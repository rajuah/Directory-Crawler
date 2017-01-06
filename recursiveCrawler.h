//
// Created by Akhilesh Raju on 1/3/17.
//

#ifndef CODE_RECURSIVECRAWLER_H
#define CODE_RECURSIVECRAWLER_H

#include <iostream>
#include <vector>
#include <boost/filesystem.hpp>
#include <map>

class recursiveCrawler {

  // Stack of paths to be explored; When all the directories have been explored the size of this is zero
  std::vector<boost::filesystem::path> pathStack;

  // Given the directory path this function looks for sub-directories and prints the non-directory files
  std::vector<boost::filesystem::path> getDirectoriesAndDisplayFilePath(boost::filesystem::directory_iterator directoryIter);

 public:

  // This function gets the root directory from the user and recursively visits the sub-directories
  void dfsCrawler(boost::filesystem::path currentDirectory);

  // Crawler to print the directory structure in a Breadth First manner
  void bfsCrawler(boost::filesystem::path currentDirectory, unsigned int indexValue = 0);
};

#endif //CODE_RECURSIVECRAWLER_H

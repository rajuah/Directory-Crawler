//
// Created by Akhilesh Raju on 1/3/17.
//

#ifndef CODE_NONRECURSIVECRAWLER_H
#define CODE_NONRECURSIVECRAWLER_H

#include <iostream>
#include <vector>
#include <boost/filesystem.hpp>
#include <map>

class nonRecursiveCrawler {

  // Stack of paths to be explored; When all the directories have been explored the size of this is zero
  std::vector<boost::filesystem::path> pathStack;

  // Given the directory path this function looks for sub-directories and prints the non-directory files
  void getDirectoriesAndDisplayFilePath(boost::filesystem::directory_iterator dirIter);

 public:

  // This function get the root directory from the user and recursively visits the sun-directories
  void dfsCrawler(boost::filesystem::path startDirectory);

  //
  void bfsCrawler(boost::filesystem::path startDirectory);
};

#endif //CODE_NONRECURSIVECRAWLER_H

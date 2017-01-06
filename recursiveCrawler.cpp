//
// Created by Akhilesh Raju on 1/3/17.
//

#include "recursiveCrawler.h"

void recursiveCrawler::dfsCrawler(boost::filesystem::path currentDirectory) {
  boost::filesystem::directory_iterator directoryIter{currentDirectory};
  std::vector<boost::filesystem::path> subDirectoryVector = getDirectoriesAndDisplayFilePath(directoryIter);
  for (auto iter = subDirectoryVector.begin(); iter!=subDirectoryVector.end(); ++iter) {
    dfsCrawler((*iter));
  }
}

void recursiveCrawler::bfsCrawler(boost::filesystem::path currentDirectory, unsigned int indexValue) {
  boost::filesystem::directory_iterator directoryIter{currentDirectory};
  std::vector<boost::filesystem::path> subDirectoryVector = getDirectoriesAndDisplayFilePath(directoryIter);
  for (auto iter = subDirectoryVector.begin(); iter!=subDirectoryVector.end(); ++iter)
    pathStack.push_back(*iter);
  if (indexValue < pathStack.size())
    bfsCrawler(pathStack[indexValue], indexValue + 1);
}

std::vector<boost::filesystem::path> recursiveCrawler::getDirectoriesAndDisplayFilePath(boost::filesystem::directory_iterator directoryIter) {
  std::vector<boost::filesystem::path> subDirectoryVector;
  while (directoryIter!=boost::filesystem::directory_iterator()) {

    // Test if directory iterator is a directory
    // If Yes then store it in the vector
    if (boost::filesystem::is_directory(*directoryIter))
      subDirectoryVector.push_back(*directoryIter);

      // Else it is a file - print it
    else
      std::cout << (*directoryIter).path().string() << std::endl;
    ++directoryIter;
  }
  return subDirectoryVector;
}


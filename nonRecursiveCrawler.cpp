//
// Created by Akhilesh Raju on 1/3/17.
//

#include "nonRecursiveCrawler.h"

void nonRecursiveCrawler::dfsCrawler(boost::filesystem::path startDirectory) {
  boost::filesystem::directory_iterator dirIter{startDirectory};
  getDirectoriesAndDisplayFilePath(dirIter);
  while (pathStack.size()!=0) {
    dirIter = boost::filesystem::directory_iterator(pathStack.back());
    pathStack.pop_back();
    getDirectoriesAndDisplayFilePath(dirIter);
  }
}

void nonRecursiveCrawler::bfsCrawler(boost::filesystem::path startDirectory) {
  boost::filesystem::directory_iterator dirIter{startDirectory};
  getDirectoriesAndDisplayFilePath(dirIter);
  while (pathStack.size()!=0) {
    dirIter = boost::filesystem::directory_iterator(pathStack.front());
    getDirectoriesAndDisplayFilePath(dirIter);
    pathStack.erase(pathStack.begin());
  }
}

void nonRecursiveCrawler::getDirectoriesAndDisplayFilePath(boost::filesystem::directory_iterator dirIter) {
  while (dirIter!=boost::filesystem::directory_iterator()) {

    // Test if directory iterator is a directory
    // If Yes then store it in the stack
    if (boost::filesystem::is_directory(*dirIter))
      pathStack.push_back(*dirIter);

      // Else it is a file - print it
    else
      std::cout << (*dirIter).path().string() << std::endl;
    ++dirIter;
  }
}
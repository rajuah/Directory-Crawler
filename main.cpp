#include <iostream>
#include "recursiveCrawler.h"
#include "nonRecursiveCrawler.h"

int main(int argc, char *argv[]) {
  if (argc > 1) {
    std::string root = argv[1];

    // Test if the provided path is a directory
    if (boost::filesystem::is_directory(boost::filesystem::path(root))) {
      std::cout << "\n\nRecursive Crawler";
      std::cout << "\n-----------------\n";
      recursiveCrawler r_crawler;
      r_crawler.dfsCrawler(root);
      r_crawler.bfsCrawler(root);

      std::cout << "\n\nNon Recursive Crawler";
      std::cout << "\n---------------------\n";
      nonRecursiveCrawler nr_crawler;
      nr_crawler.dfsCrawler(root);
      nr_crawler.bfsCrawler(root);
    } else {
      std::cerr << "\n" << root << " is not a valid path";
      std::cerr << "\nPlease enter a valid path and re-run the program\n\nExiting .......\n";
      exit(0);
    }
  } else
    std::cerr << "\n\nKindly enter the root path as argument while running the program ......\n\n";
  return 0;
}

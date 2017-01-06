# Directory-Crawler

This program is similar to web crawlers except instead of the web it crawls through a given source directory.
It is implemented using both a recursive and non-recursive approach.

The program relies on the boost filesystem library for its directory operations and is essential for the program to succesfully compile.

To run the program compile it and provide the full path of the directory to crawl as an argument.

For e.g. if the name of the executable is _'Code'_ and the path to be crawled through is _'/Users/User A/Documents'_ then invoke the program by typing

     $ ./Code "/Users/User A/Documents"

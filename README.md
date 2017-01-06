# Directory-Crawler

This program is similar to web crawlers except instead of the web it crawls through a given directory.

The program print out the path of all the files contained within the directory and subsequent sub-directories.

Empty directories are ignored by the program and their paths are not printed onto the console.

It is implemented using both a recursive and non-recursive approach and is built using the [Boost filesystem](http://www.boost.org/doc/libs/1_63_0/libs/filesystem/doc/index.htm) library.

To run the program compile it and provide the full path of the directory to crawl as an argument.

For e.g. if the name of the executable is _'Code'_ and the path to be crawled through is _'/Users/User A/Documents'_ then invoke the program by typing

     $ ./Code "/Users/User A/Documents"

The program has been tested on macOS Sierra.

# C++ Boilerplate
[![Build Status](https://travis-ci.org/akashatharv/Week4.svg?branch=master)](https://travis-ci.org/akashatharv/Week4)
[![Coverage Status](https://coveralls.io/repos/github/akashatharv/Week4/badge.svg)](https://coveralls.io/github/akashatharv/Week4)
---
## Authors 
Part 1:
	- Driver - Akash Atharv, Navigator Nithish Sanjeev Kumar

Part 2:
	- Driver - RajendraMayavan,
	  Navigator - Chin-Po Tsai


## To Do List
- [x] Submit Pull request to other pair
- [x] Run cppcheck,cpplint
- [x] Review build error on Travis
- [x] Make the author section on readME more clarified
- [x] Update the UML Diagram according to implementation

## Overview

Simple starter C++ project with:

- cmake
- googletest

## Building the package
```
git clone -b GMock_Extra_Credit_Nithish --single-branch https://github.com/akashatharv/Week4.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
```
## Running the test and demo
```
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Working with Eclipse IDE ##

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of Week4

```
cd ~/workspace
mkdir -p boilerplate-eclipse
cd boilerplate-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../Week4/
```

## Updating CMakelists

To Google Mock for projects, note these changes in CMakelists:

In the main CMakelists.txt, change add_subdirectory(vendor/googletest/googltest) to add_subdirectory(vendor/googletest). This would add GMock libs to the project.

In the test/CMakelists, add gmock in the target link libraries.

## Resources

Google Mock resources are found [here](https://github.com/abseil/googletest/blob/master/googlemock/docs/ForDummies.md)

The google mock cheatsheet can be found [here](https://github.com/abseil/googletest/blob/master/googlemock/docs/CheatSheet.md)

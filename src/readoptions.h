/*
############################ COPYRIGHT NOTICE ##################################

Code provided by G. Carleo and M. Troyer, written by G. Carleo, December 2016.

Permission is granted for anyone to copy, use, modify, or distribute the
accompanying programs and documents for any purpose, provided this copyright
notice is retained and prominently displayed, along with a complete citation of
the published version of the paper:
 ______________________________________________________________________________
| G. Carleo, and M. Troyer                                                     |
| Solving the quantum many-body problem with artificial neural-networks        |
|______________________________________________________________________________|

The programs and documents are distributed without any warranty, express or
implied.

These programs were written for research purposes only, and are meant to
demonstrate and reproduce the main results obtained in the paper.

All use of these programs is entirely at the user's own risk.

################################################################################
*/
#include "getopt.h"
#include <map>
#include <iostream>
#include <string>


#ifndef __READ_OPTION_H__
#define __READ_OPTION_H__

//Various utilities to read the command line options

std::string FindModel(std::string strarg);

std::string FindCoupling(std::string strarg);

void PrintHeader();

void PrintInfoMessage();

std::map<std::string, std::string> ReadOptions(int argc, char *argv[]);

#endif
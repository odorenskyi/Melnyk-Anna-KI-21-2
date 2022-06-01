#ifndef HELPERFUCTIONS_H_INCLUDED
#define HELPERFUCTIONS_H_INCLUDED

#include "ModulesMelnyk.h"

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void declareTestSuiteResults(ofstream &resFile, ClassLab12_Melnyk Tablet, string outArea, string expArea, int index)
{

    resFile << " ---------------------------------------------------- " << endl
            << "| TEST CASE " << setw(2) << index << setw(38) << "|" << endl
            << "| (input)    Tablet length: " << setw(20) << Tablet.getTabletLength() << "  a  |" << endl
            << "| (input)    Tablet width:  " << setw(20) << Tablet.getTabletWidth()  << "  b  |" << endl
            << "| (input)    Tablet height: " << setw(20) << Tablet.getTabletHeight() << "  h  |" << endl
            << "| (output)   Tablet square: " << setw(20) << outArea << "  S  |" << endl
            << "| (expected) Tablet square: " << setw(20) << Tablet.getTabletSquare() << "  S  |" << endl;
    resFile << "| TEST CASE RESULT:       " << setw(20) << boolalpha << (expArea.compare(outArea) == 0) << "     |" << endl
            << " ---------------------------------------------------- " << endl;
}

#endif // HELPERFUCTIONS_H_INCLUDED

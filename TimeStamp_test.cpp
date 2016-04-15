// TimeStamp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//#include <limits>

#include "TimeStamp.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TimeStamp ts;

	double time_stamp = ts.GetTimeStamp();
	long date_stamp = ts.GetDateStamp();

	cout.precision(15);
	cout << "Time Stamp: " << time_stamp << endl;
	cout << "Date Stamp: " << date_stamp << endl;

	return 0;
}


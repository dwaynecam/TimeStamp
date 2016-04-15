// TimeStamp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TimeStamp.h"

double TimeStamp::GetTimeStamp()
{
	time_t rawtime;
	struct tm * timeinfo;
	double time_stamp = 0;

	rawtime = time (NULL);
	timeinfo = localtime (&rawtime);
	
	time_stamp = time_stamp + (1900+timeinfo->tm_year)*10000;
	time_stamp = time_stamp + (timeinfo->tm_mon + 1)*100;
	time_stamp = time_stamp + timeinfo->tm_mday;
	time_stamp = time_stamp + timeinfo->tm_hour*.01;
	time_stamp = time_stamp + timeinfo->tm_min*.0001;
	time_stamp = time_stamp + timeinfo->tm_sec*.000001;
	
	return time_stamp;
}

long TimeStamp::GetDateStamp()
{
	double time_stamp = GetTimeStamp();
	int date_stamp = (int)time_stamp;

	return date_stamp;
}





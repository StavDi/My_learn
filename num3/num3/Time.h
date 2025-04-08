#pragma once
#include <fstream>
#include <iostream>
#include "Time.h"
#include <string.h>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
public:
	Time(int hour, int minute);
	Time();
	friend ostream& operator<< (ostream& os, const Time& f);
	friend istream& operator>> (istream& is, Time& f);
	Time operator =(Time a);
	int operator > (Time a);
};


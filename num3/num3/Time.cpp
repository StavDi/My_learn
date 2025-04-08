#include "Time.h"

Time::Time(int hour, int minute)
{
	this->hour = hour;
	this->minute = minute;
}

Time::Time()
{
}

Time Time::operator=(Time a)
{
	this->hour = a.hour;
	this->minute = a.minute;
	return *this;
}

int Time::operator>(Time a)
{
	if (this->hour < a.hour)
	{
		return 0;
	}
	if (this->hour > a.hour)
	{
		return 1;
	}
	if (this->hour == a.hour)
	{
		if (this->minute >= a.minute)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}


ostream& operator<<(ostream& os, const Time& f)
{
	os << f.hour << ":" << f.minute;
	return os;
}

istream& operator>>(istream& is, Time& f)
{
	is >> f.hour >> f.minute;
	return is;
}

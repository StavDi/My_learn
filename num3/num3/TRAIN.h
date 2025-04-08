#pragma once
#include <fstream>
#include <iostream>
#include "Time.h"
#include <string.h>
using namespace std;
class TRAIN
{
private:
	char pun[80];
	int numb;
	Time clock;
public:
	char* getpun()
	{
		return this->pun;
	}
	TRAIN(const char* pun, int numb, Time clock);
	TRAIN();
	friend ostream& operator<< (ostream& os, TRAIN& f);
	TRAIN operator=(TRAIN a);
	int operator>(TRAIN a);
	friend istream& operator>>(istream& is, TRAIN& f);
};


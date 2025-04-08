#include "TRAIN.h"

TRAIN::TRAIN(const char* pun, int numb, Time clock)
{
	strcpy_s(this->pun,pun);
	this->numb = numb;
	this->clock = clock;
}

TRAIN::TRAIN()
{
}

TRAIN TRAIN::operator=(TRAIN a)
{
	strcpy_s(this->pun, a.pun);
	this->numb = a.numb;
	this->clock = a.clock;
	return *this;
}

int TRAIN::operator>(TRAIN a)
{
	if (this->clock > a.clock)
	{
		return 1;
	}
	else
	{
	return 0;
	}
}



ostream& operator<<(ostream& os, TRAIN& f)
{
	os << "\n_______________________\nDestination| " << f.pun << "\nNumber     | " << f.numb << "\nTime       | " << f.clock;
	return os;
}
istream& operator>>(istream& is, TRAIN& f)
{
	is >> f.pun >> f.numb >> f.clock;
	return is;
}

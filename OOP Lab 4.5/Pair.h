#pragma once
#include <iostream>
using namespace std;

class Pair {
public:
	virtual ~Pair() {};

	virtual long getHryvnya() const = 0;
	virtual unsigned short getKopiyka() const = 0;
	virtual void setHryvnya(int value) = 0;
	virtual void setKopiyka(int value) = 0;
};
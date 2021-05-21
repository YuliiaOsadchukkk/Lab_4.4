//COrArray.h
#pragma once
#include "CArray.h"

using namespace std;

class OrArray :public Array
{
public:
	OrArray(unsigned int count = 0, ...);

	Array* Add(Array* r) override;
	float Foreach(const unsigned int& index) override;

	ostream& Print(ostream& out) const override;
	istream& Insert(istream& in) override;
};


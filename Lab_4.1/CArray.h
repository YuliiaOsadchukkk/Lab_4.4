//CArray.h
#pragma once
#include <iostream>

using namespace std;

class Array abstract
{
protected:
	int* _set = nullptr;
	unsigned int _size = 0;

	void AddItem(const int& val);

public:
	const int* GetSet() const;
	unsigned int GetSize() const;

	bool HasItem(const int& val) const;
	~Array();


	virtual Array* Add(Array* r) = 0;
	virtual float Foreach(const unsigned int& index) = 0;


	virtual ostream& Print(ostream& out) const = 0;
	virtual istream& Insert(istream& in) = 0;
};

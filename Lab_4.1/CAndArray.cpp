//CAndArray.cpp
#include "CAndArray.h"

AndArray::AndArray(unsigned int count, ...)
{
	if (count == 0)
		return;

	_set = new int[_size = count];

	for (size_t i = 0; i < _size; i++)
		_set[i] = (&count + 1)[i];
}
/////////////////////////////////////////////////////////


Array* AndArray::Add(Array* r)
{
	AndArray* tmp = new AndArray();

	for (unsigned int i = 0; i < _size; i++)
		if (r->HasItem(_set[i]))
			tmp->AddItem(_set[i]);

	return tmp;
}

float AndArray::Foreach(const unsigned int& index)
{
	return sqrt(_set[index]);
}



ostream& AndArray::Print(ostream& out) const
{
	for (size_t i = 0; i < _size; i++)
		out << _set[i] << ' ';

	out << endl;
	return out;
}

istream& AndArray::Insert(istream& in)
{
	int tmp;
	char is_cnt;

	do
	{
		cout << "Input " << _size + 1 << " item of array: ";
		cin >> tmp;

		if (!HasItem(tmp))
			AddItem(tmp);
		else
			cout << "This num already in array!" << endl;

		cout << "continue(y/n): ";
		cin >> is_cnt;

	} while (is_cnt != 'n');
	return in;
}

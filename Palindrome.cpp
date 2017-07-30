#include <iostream>

using namespace std;


void main()
{
	int source = 0;
	int copy = 0;
	int target = 0;
	int mult = 10000;
	int answ = 0;

	cout << "Please enter 5 digit number: ";
	cin >> source;
	copy = source;

	while (copy > 0)
	{
		target = copy % 10;
		answ = answ + target * mult;

		copy = copy / 10;
		mult = mult / 10;
	}

	if (answ == source)
	{
		cout << answ << " = " << source << endl;
	}

	else
	{
		cout << answ << " != " << source << endl;
	}
	system("pause");
}
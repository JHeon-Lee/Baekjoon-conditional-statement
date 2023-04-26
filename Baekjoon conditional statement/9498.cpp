#include <iostream>

using namespace std;

int main()
{
	int score;
	cin >> score;
	while (score > 100 || score < 0)
		cin >> score;

	if (score > 89 && score < 101)
	{
		cout << "A" << endl;
	}
	else if (score > 79 && score < 90)
	{
		cout << "B" << endl;
	}
	else if (score > 69 && score < 80)
	{
		cout << "C" << endl;
	}
	else if (score > 59 && score < 70)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "F" << endl;
	}

	return 0;
}
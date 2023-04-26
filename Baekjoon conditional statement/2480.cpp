#include <iostream>

using namespace std;

int main()
{
	int dice1, dice2, dice3;
	int reward;

	cin >> dice1 >> dice2 >> dice3;
	while ((dice1 > 6 || dice1 < 1) || (dice2 > 6 || dice2 < 1) || (dice3 > 6 || dice3 < 1))
	{
		cin >> dice1 >> dice2 >> dice3;
	}

	if ((dice1 == dice2) && (dice1 == dice3))
	{
		reward = 10000 + dice1 * 1000;
		cout << reward << endl;
	}
	else if ((dice1 != dice2) && (dice1 != dice3) && (dice2 != dice3))
	{
		if ((dice1 > dice2) && (dice1 > dice3))
		{
			reward = dice1 * 100;
		}
		else if ((dice2 > dice1) && (dice2 > dice3))
		{
			reward = dice2 * 100;
		}
		else
		{
			reward = dice3 * 100;
		}
		cout << reward << endl;
	}
	else
	{
		if (dice1 == dice2)
		{
			reward = 1000 + dice1 * 100;
		}
		else if (dice1 == dice3)
		{
			reward = 1000 + dice1 * 100;
		}
		else
		{
			reward = 1000 + dice2 * 100;
		}
		cout << reward << endl;
	}
	return 0;
}
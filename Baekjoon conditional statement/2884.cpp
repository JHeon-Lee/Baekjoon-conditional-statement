#include <iostream>

using namespace std;

int main()
{
	int hour, minute;

	cin >> hour >> minute;
	while ((hour > 23 || hour < 0) || (minute > 59 || minute < 0))
	{
		cin >> hour >> minute;
	}
	
	if (minute > 44)
	{
		minute -= 45;
		cout << hour << " " << minute << endl;
	}
	else
	{
		if (hour == 0)
		{
			minute += 15;
			hour = 23;
			cout << hour << " " << minute << endl;
		}
		else
		{
			minute += 15;
			hour -= 1;
			cout << hour << " " << minute << endl;
		}
	}

	return 0;
}
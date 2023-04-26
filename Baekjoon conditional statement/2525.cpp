#include <iostream>

using namespace std;

int main()
{
	int hour, minute;
	int elapsed_time;

	cin >> hour >> minute;
	cin >> elapsed_time;

	while ((hour > 23 || hour < 0) || (minute > 59 || minute < 0) || (elapsed_time > 1000 || elapsed_time < 0))
	{
		cin >> hour >> minute;
		cin >> elapsed_time;
	}

	int time_h, time_m;
	time_h = elapsed_time / 60;
	time_m = elapsed_time % 60;
	int total_h = hour + time_h;
	int total_m = minute + time_m;

	if (total_m > 59)
	{
		total_m -= 60;
		total_h += 1;
	}
	if (total_h > 23)
	{
		total_h -= 24;
	}

	cout << total_h << " " << total_m << endl;

	return 0;
}
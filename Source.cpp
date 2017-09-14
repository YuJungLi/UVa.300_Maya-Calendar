#include <iostream>
#include <iomanip>
#include <string.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	char Haab[19][10] = { "pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet" };
	char Tzolkin[20][10] = { "imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau" };
	cin >> n;
	cout << n << endl;
	while (n--)
	{
		int day, year, days;
		char month[10];
		cin >> day;
		getchar();
		cin >> month >> year;
		for (int i = 0; i < 19; i++)
		{
			if (strcmp(month, Haab[i]) == 0)
			{
				days = year * 365 + i * 20 + day;
				break;
			}
		}
		int yy = days / 260, mm = days % 260 % 20, dd = days % 260 % 13 + 1;
		cout << dd << " " << Tzolkin[mm] << " " << yy << endl;
	}
	return 0;
}
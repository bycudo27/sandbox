#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	long a, b, f1, f2 = 0, f3 = 1;
	cout << "Enter the left border" << endl;
	cin >> a;
	cout << "Enter the right border" << endl;
	cin >> b;
	while (f2 <= b)
	{
		if (f2 >= a)
		{
			cout << f2 << " " << endl;
			f1 = f2;
			f2 = f3;
			f3 = f1 + f2;
		}
	}
	return 0;
}
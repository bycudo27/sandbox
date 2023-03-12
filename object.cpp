#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	if (SetConsoleCP(1251) == 0)
	{
		cerr << "Failed to set codepage!" << endl;
	}
	if (SetConsoleOutputCP(1251) == 0)
	{
		cerr << "Failedto set OUTPUT codepage!" << endl;
	}
	class Infa
	{
	public:
		string name, surname, age, height;


		void input_infa(string imya, string family, string vozr, string rost)
		{
			name = imya;
			surname = family;
			age = vozr;
			height = rost;
		}
		void output_infa()
		{
			cout << "Введите имя: " << name << endl;
			cout << "Введите фамилию" << surname << endl;
			cout << "Введите возраст: " << age << endl;
			cout << "Введите вес: " << height << endl;
		}
	};

	Infa one;
	Infa two;

	string imya, family, vozr, rost;
	imya = "Кадум";
	family = "Вокболок";
	vozr = "47 лет";
	rost = "1.86 м";
	one.input_infa(imya, family, vozr, rost);
	cout << "Объект 1" << endl;
	one.output_infa();
	cout << endl;

	imya = "Николай";
	family = "Митягин";
	vozr = "28 лет";
	rost = "2.00 м";
	two.input_infa(imya, family, vozr, rost);
	cout << "\n\nОбъект 2" << endl;
	two.output_infa();
}
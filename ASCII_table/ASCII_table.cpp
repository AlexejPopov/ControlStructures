#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	cout << "������� ASCII-��������:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(0, "");
	cout << "��� � �������� �����" << endl;
}

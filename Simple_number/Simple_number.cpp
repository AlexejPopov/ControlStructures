#include <iostream>
#include <ctime>
#include <locale.h>
using namespace std;
// ������� �� ����� ��� ������� ����� �� ���������� �������.

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "--------------------------------------------------��������� ��� ������ �� ����� ���� ������� �����!----------------------------------------------" << endl;
	int row = 2, border = 0;
	cout << "\n������� ������ ��� ���� ������� �����: "; cin >> border;
	cout << "��� ������� �����: ";
	time_t start = time(NULL);
	for (int i = 0; i <= border; i++)
	{
		/*if (row%row==0&&row%1==0)
		{
			cout << row << "\t";
		}
		row++;*/
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if(simple)	cout << i << "\t";

	}
	time_t end = time(NULL);
	cout << "Duration: " << end - start << endl;
	cout << endl;
}
/* ����������� ����� - ��� ����� ������� ����.

����������� ����� N, ������� 1 , ���������� �������, ���� ��� ��� ������� �� ����� ����� ����� 1 � ������ ���� ���� �������.
��������, 5 ��� ������� �����, ��� �� ����� ���� ��������� ��� ������� �� 2 , 3 � 4, � ������ �� 1 � �� 5. */
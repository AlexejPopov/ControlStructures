#include <iostream>
#include <ctime>
#include <locale.h>
using namespace std;
// ¬ывести на экран р€д простых чисел до указанного предела.

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "--------------------------------------------------ѕрограмма дл€ вывода на экран р€да простых чисел!----------------------------------------------" << endl;
	int row = 2, border = 0;
	cout << "\n¬ведите предел дл€ р€да простых чисел: "; cin >> border;
	cout << "–€д простых чисел: ";
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
/* Ќатуральное число - это число большее нул€.

Ќатуральное число N, большее 1 , называетс€ простым, если при его делении на любое число кроме 1 и самого себ€ есть остаток.
Ќапример, 5 это простое число, оно не может быть разделено без остатка на 2 , 3 и 4, а только на 1 и на 5. */
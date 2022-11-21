#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "-------------Программа для возведения числа в степень!-------------" << endl;
	float A = 0.0F, B = 0.0F;
	int control = 0;

	do
	{
		system("cls");
		cout << "Введите основание степени: "; cin >> A;
		cout << "Введите степень: "; cin >> B;
		float result = pow(A, B);
		cout << "Результат равен: " << result << endl;
		control = 0;
		cout << "\nДля выхода нажмите 0 или любую букву. Для продолжения счета нажмите любую цифру: "; cin >> control;
	} while (control);
}
﻿#include <iostream>
#include <stdlib.h>
using namespace std;

/* Факториал числа Х - это произведение всех натуральных чисел от 1 до Х включительно.	Х! = 1 * 2 * 3 * ... * Х
Факториал существует только для целочисленных положительных чисел.	0! = 1;		1! = 1;		Факториал отрицательного числа не существует.
F = n! = n * (n - 1)! */

int main()
{
    system("chcp 1251");
    system("cls");
    cout << "-----------------------Программа для вычисления факториала числа!-----------------------" << endl;
    int digit = 0, i = 1;
    double factorial = 1.0;

    cout << "Введите число, не более 170: "; cin >> digit;

    if (digit > 170)cout << "Используйте другую программу!" << endl;

    else
    {
        if (digit < 0)cout << "Факториал не существует!" << endl;
        else
        {
            if (!digit)cout << "Факториал = 1" << endl;
            else
            {
                while (i <= digit)
                {
                    factorial *= i;
                    i++;
                }
                cout << "Факториал равен " << factorial << endl;
            }
        }
    }
}
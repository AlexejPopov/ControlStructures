#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    cout << "----------------Ряд Фибоначчи до указанного предела!----------------" << endl;
    int control = 0, fibonacci = 0, digit = 0;
    do
    {
        system("cls");
        cout << "Введите границу ряда Фибоначчи: "; cin >> fibonacci;
        for (int i = 0; i <= fibonacci; i++)
        {
            if (fibonacci < 2)
            {
                cout << "Введен неверный предел ряда Фибоначчи!" << endl;
                break;
            }
            else
            {

            }
        }

        control = 0;
        cout << "\nПостроим еще рядок?" << endl;
        cout << "Для выхода нажмите 0 или любую букву. Для продолжения счета нажмите любую цифру: "; cin >> control;
    } while (control);


}
/* 0  1  1  2  3  5  8  13  21  ...
   0  1  2  3  4  5  6   7   8
   Fn = Fn-1 + Fn-2 */
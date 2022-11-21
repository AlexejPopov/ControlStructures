#include <stdlib.h>
#include <iostream>
using namespace std;

float Power(float digit, float power);

int main()
{
    system("chcp 1251");
    system("cls");
    cout << "------------------------------------------Программа для возведения числа в степень!-------------------------------------------" << endl;
    int control = 0;
    do
    {
        system("cls");
        float digit = 0.0F, power = 0.0F;
        cout << "Введите основание степени: "; cin >> digit;
        cout << "Введите степень числа: "; cin >> power;
        Power(digit, power);
        float result = Power(digit, power);
        cout << "Результат: " << result << endl;
        control = 0;
        cout << "\nДля выхода нажмите 0 или любую букву. Для продолжения счета нажмите любую цифру: "; cin >> control;
    } while (control);
}

float Power(float digit, float power)
{
    float result = 1.0F;
    if (power < 0)
    {
        digit = 1 / digit;
        power = -power;
    }
    for (int i = 0; i < power; i++)
    {
        result *= digit;
    }
    return result;
}
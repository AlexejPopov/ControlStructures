#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Ââåäèòå ïðåäåëüíîå ÷èñëî: "; cin >> n;
	for (int i = 0, a = 0, b = 1, c = a + b; i++ < n; c = (a = b) + (b = c))
	{
		cout << a << "\t";
	}
	cout << endl;
}
// Lab_04_1.cpp
// Лесюк Оксана
// Лабораторна робота № 4.1
// Цикли
// Варіант 13

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, N;
	double p;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	p = 1;
	k = N;
	while (k <= 25)
	{
		p *= sqrt(1 + N/k);
		k++;
	}
	cout << "1) p = " << p << endl;

	p = 1;
	k = N;
	do {
		p *= sqrt(1 + N / k);
		k++;
	} while (k <= 25);
	cout << "2) p = " << p << endl;

	p = 1;
	for (k = N; k <= 25; k++)
	{
		p *= sqrt(1 + N / k);
	}
	cout << "3) p = "<< p << endl;

	p = 1;
	for (k = 25; k >= N; k--)
	{
		p *= sqrt(1 + N / k);
	}
	cout << "4) p = "<<  p<< endl;
	return 0;
}
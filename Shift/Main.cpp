﻿#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };

	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сдвиг массива:
	int shift;
	cout << "Введите количество сдвигов: "; cin >> shift;	
	for (int i = 0; i < shift; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;

	//Вывод сдвинутого массива на экран:
	for (int i = 0; i < n; i++)
		{
		cout << arr[i] << tab;
		}
	cout << endl;
	}
}
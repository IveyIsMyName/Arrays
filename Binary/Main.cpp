#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	int num; //для ввода десятичного числа
	int bin[100]; //хранит двоичный эквивалент десятичного числа 
	int count = 0; //счетчик количества операций над числом

	cout << "Введите десятичное число: "; cin >> num;

	for (int i = 0; num > 0; i++)
	{
		bin[i] = num % 2;
		num = num / 2;
		count++;  
	}
	
	cout << "\nДвоичный эквивалент десятичного числа: ";
	for (int j = count - 1; j >= 0; j--)
	{
		cout << bin[j];
	}
}
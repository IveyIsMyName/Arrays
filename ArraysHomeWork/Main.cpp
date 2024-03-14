#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int SIZE = 5;
	int arr[SIZE];

	//Ввод с клавиатуры
	cout << "Введите элементы массива по порядку: ";
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	//Прямой порядок 
	cout << "Массив в прямом порядке: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Обратный порядок
	cout << "Массив в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Сумма элементов
	int sum = 0;
	cout << "Сумма элементов массива: ";	
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;

	//Среднее-арифметическое
	cout << "Среднее-арифметическое значение элементов: "
		<< sum / SIZE << endl;

	//Мин. и макс. значения
	int max, min;
	max = arr[0];
	min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	cout << "Максимальное значение: " << max << endl;
	cout << "Минимальное значение: " << min << endl;
}

#include<iostream>
using namespace std;
#define tab "/t";

void main()
{
	setlocale(LC_ALL, "Rus");
	const int SIZE = 5;
	int arr[SIZE];

	//Ввод с клавиатуры
	cout << "Введите элементы массива по порядку: ";
	for (int i = 0; i < SIZE; i++)
	cin >> arr[i];

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
		<< (double)sum / SIZE << endl;

	//Мин. и макс. значения
	int max, min;
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	cout << "Максимальное значение: " << max << endl;
	cout << "Минимальное значение: " << min << endl;

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

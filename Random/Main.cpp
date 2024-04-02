#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	do
	{
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand >= maxRand)	cout << "Ошибка. Введите корректные значения: " << endl;
	} while (minRand >= maxRand);

	//заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand() % 100;
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//сортировка массива:
		
	for (int i = 0; i < n; i++) //счетчик 'i' выбирает элемент, в который нужно поместить мин значение
	{
		for (int j = i + 1; j < n; j++) //счетчик 'j' перебирает оставшиеся элементы
		{ 
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}			
		
	}

	
	//вывод отсортированного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
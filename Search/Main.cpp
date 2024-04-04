#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 7;
	}
	
	cout << "Исходный массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	cout << "Повторяющеися значения: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[i] == arr[j])
			{ 
				cout << arr[j] << "\t";
				count++;
			}
	}			
	cout << endl;

	cout << "Количество повторений: " << count << endl;

}
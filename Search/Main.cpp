#include <iostream>
using namespace std;
#define cout std::cout
//#define SEARCH_1

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	int count = 0;

#ifdef SEARCH_1
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
#endif // SEARCH_1

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 8;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//		поиск повторений:
	for (int i = 0; i < n; i++)
	{
		bool met_before = false; //предполагаем, что выбранное значение ранее не встречалось
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				met_before = true;
				break;				//прерывает текущую итерацию и все последующие 
			}
		}
		if(met_before)continue; //прерывает текущую итерацию и переходит к следующей
		
		int counter = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])counter++;
		}
		//if(counter) printf("Значение %i повторяется %i раз\n", arr[i], counter);
		//
		if (counter)cout << "Значение " << arr[i] << " повторяется " << counter << " раз" << endl;
	}
}
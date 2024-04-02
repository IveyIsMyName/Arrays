#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"
//#define UNIQUE_1

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];

#ifdef UNIQUE_1
	bool sameValue;
	for (int i = 0; i < n; )
	{
		sameValue = false;
		int randomValue = rand() % 10 + 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == randomValue) //проверяет есть ли в массиве значение, которое было сгенирировано
			{
				sameValue = true;
				break; //прекращает поиск, так как одинаковое значение было найдено
			}
		}
		if (sameValue != true) //добавляет значение только при условии, что оно в предыдущих элементах не встречается
		{
			arr[i] = randomValue;
			i++; //сдвиг по элементам происходит только при добавлении нового значения
		}
	}

#endif // UNIQUE_1

	//Заполнение массива уникальными случайными числами:
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}
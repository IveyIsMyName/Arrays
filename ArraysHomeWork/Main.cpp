#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int SIZE = 5;
	int arr[SIZE];

	//���� � ����������
	cout << "������� �������� ������� �� �������: ";
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	//������ ������� 
	cout << "������ � ������ �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//�������� �������
	cout << "������ � �������� �������: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ���������
	int sum = 0;
	cout << "����� ��������� �������: ";	
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;

	//�������-��������������
	cout << "�������-�������������� �������� ���������: "
		<< sum / SIZE << endl;

	//���. � ����. ��������
	int max, min;
	max = arr[0];
	min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	cout << "������������ ��������: " << max << endl;
	cout << "����������� ��������: " << min << endl;
}

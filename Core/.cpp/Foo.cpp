#include "../../SystemLib.h"
//============= Задание 1 =============== 
void InitArray(int arr[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}

}
void ShowArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void SortArray(int arr[], int size, bool X) {
	int temp = 0;
	if (X == 1)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = size - 1; j > i; j--)
			{
				if (arr[j - 1] < arr[j])
				{
					temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	else if (X == 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = size - 1; j > i; j--)
			{
				if (arr[j - 1] > arr[j])
				{
					temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}

}
//============= Задание 2 =============== 
void InitArray2(int arr[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = -20 + rand() % 40;
	}

}
void SortBetweenNegativeElements(int arr[], int size) {
	int index1 = 0, index2 = 0, temp;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			index2 = i;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			index1 = i;
			break;
		}
	}
	for (int i = index1 + 1; i < index2; i++)
	{
		for (int j = index2 - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Сортировка между отрицательными элементами" << endl;
}
//============= Задание 3 =============== 
void InitArray3(int arr[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}

}

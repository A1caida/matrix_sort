#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	const int n = 5;

	int** ar;
	ar = new int* [n];
	for (int i = 0; i < n; i++)
	{

		ar[i] = new  int[n];

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			ar[i][j] = rand() % 10;
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int owo = 0; owo < n - 1; owo++) //owo -  строка
			{
				for (int uwu = owo + 1; uwu < n; uwu++)
				{
					if (ar[i][j] < ar[owo][uwu])
					{
						swap(ar[i][j], ar[owo][uwu]);
					}
				}
			}
		}
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			for (int owo = 1; owo < n; owo++)
			{
				for (int uwu = 0; uwu < owo; uwu++)
				{
					if (ar[i][j] > ar[owo][uwu])
					{
						swap(ar[i][j], ar[owo][uwu]);
					}
				}
			}
		}
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}

}

// fullmoon.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;
int month(int i);
int _tmain(int argc, _TCHAR* argv[])
{
	/*int date[13];
	int d,l;
	cout << "enter date";
	cin >> d;
	for (int i = 0; i < 14; i++)
	{
		d = d + 28;
		if (d>28)
		{
			l=month(i);
			d = d - l;
			date[i] = d;
		}
		else
		{
			int temp;
			temp = d;
			date[i] = d;
			i--;
		}

	}*/

	char *ptr = "bob";
	cout << ptr;
	return 0;
}

int month(int i)
{
	int j = i;
	int arr[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return(arr[j]);


}
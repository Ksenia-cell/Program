﻿#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	int a, b, temp;
	cout << "a ="; cin >> a;
	cout << "b ="; cin >> b;
	temp = a;
	while (temp != b)
	{
		a = temp;
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		temp = a - b;
		a = b;
	}
	cout << "НОД =" << b << endl;

}
﻿// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
//
#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a= 4.8, b=-7.9,n,m;
	if (a >= b)
		n = pow((a - b), 1.0 / 3.0);
	else
		n = a * a + (a - b) / sin(a*b);

	if (n < b)
		m = (n + a) / (-b) + sqrt(pow(sin(a),2)-cos(n));
	if (n = b)
		m = b * b + tan(n*a);
	if (n > b)
		m = b * b*b + n * a*a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "n = " << n << endl;
	cout << "m = " << m << endl;

	system("pause");

    return 0;
}


﻿// CplusplusPointersExercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


///
/// Change the values of pX and pY.
///
void Modify(int * pX, int * pY)
{
	// Complete these statements
	// ? = 12345;
	// ? = 56789;
}

int main()
{
	int nX = 0;
	int nY = 0;

	Modify(&nX, &nY);

	cout << "nX = " << nX << " nY = " << nY << endl;
}


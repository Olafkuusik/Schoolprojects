// RngXY.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

void RandomNumber()
{
	int x = rand() % 40;
	int y = rand() % 40;
	x = x - 20;
	y = y - 20;
}

int main()
{
	RandomNumber();
    return 0;
}
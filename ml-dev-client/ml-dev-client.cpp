// ml-dev-client.cpp : Defines the entry point for the console application.

#include <iostream>

#include <ml/ML.h>


int main()
{
	ML::Point origin;
	ML::Point p1 = { 3, 4, 0 };

	std::cout << "Distance from origin to p1: " << origin.distanceTo(p1) << '\n';
}


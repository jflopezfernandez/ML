// ml-dev-client.cpp : Defines the entry point for the console application.

#include <iostream>

#include <ml/ML.hxx>


int main()
{
	ML::Vector3D v1 { {  2,  1, -1 } };
	ML::Vector3D v2 { { -3,  4,  1 } };

	v1.print();
	v2.print();

	std::cout << "\n\nVector3D-1: \n";
	for (int i = 1; i < 4; i++) {
		std::cout << "\t[" << i << "]: " << v1[i] << '\n';
	}

	std::cout << "\n\nVector3D-2: \n";
	for (int i = 1; i < 4; i++) {
		std::cout << "\t[" << i << "]: " << v2[i] << '\n';
	}

	std::cout << "\n\n\nMagnitude: " << v1.magnitude() << '\n';
	std::cout << "Magnitude: " << v2.magnitude() << '\n';

	//ML::Vector3D v3 = v1.crossProduct(v2);
	//v3.print();

	//std::cout << "Cross Product: " << v1.crossProduct(v2).toString() << '\n';
}


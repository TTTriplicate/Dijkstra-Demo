// Dijkstra-Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Weighted_Digraph.h"

int main()
{
	Weighted_Digraph digraph;
	digraph.loadGraph("matrix.txt");

	for (int i : digraph.calculateDistances(0)) {
		std::cout << i << "\t";
	}
	std::cout << std::endl;
}


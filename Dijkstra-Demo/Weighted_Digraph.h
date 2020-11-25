#pragma once
#include <vector>
#include <queue>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Weighted_Digraph
{
private:
	std::vector<std::vector<int>> adjacencies;
	std::vector<int> shortestPaths;
	std::queue<int> remaining;
	void clearPaths();
public:
	Weighted_Digraph();
	~Weighted_Digraph();

	std::vector<int> calculateDistances(int start);
	void loadGraph(std::string path);
};


#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Node
{

private:
	int num;
	vector<int> coin; // the number of each denomination used

public:
	Node();
	~Node();
};


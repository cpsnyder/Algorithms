#include <iostream>
#include <fstream>
#include <vector>
#include "Node.h"

using namespace std;

void print(vector<int> v);

int main() {

	// open input file
	ifstream in;
	in.open("input.txt");

	// open output file
	ofstream out;
	out.open("output.txt");

	// variables
	int n;			// number of denominations
	int k;			// number of problems to solve
	vector<int> d;	// vector of denominations
	vector<int> p;	// problems to solve

	// parse denominations
	in >> n;
	d.resize(n);
	for (int i = 0; i < n; i++) {
		in >> d[i];
	}

	in >> k; // get num of problems

	// get problems and find max size of problem
	int max = 0;

	p.resize(k);
	for (int i = 0; i < k; i++) {
		in >> p[i];
		if (p[i] > max) {
			max = p[i];
		}
	}

	vector<Node> A(max + 1); // Array for memoization

	// compute A for max value
	for (int i = 0; i < k; i++) {

	}

	// query for the results of the problems
	// do stuff here




	// test
	
	// end test


	// close files
	in.close();
	out.close();
	return 0;
}

void print(vector<int> v)
{
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

}

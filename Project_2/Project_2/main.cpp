#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void print(vector<int> v);

int main() {

	// open input file
	ifstream in;
	in.open("input.txt");

	// open output file
	ofstream out;
	out.open("output.txt");

	// parse file ----------------------------------------

	int n;			// number of denominations
	int k;			// number of problems to solve
	vector<int> d;	// vector of denominations
	vector<int> p;	// vector of problems to solve

	// parse denominations
	in >> n;
	d.resize(n);
	for (int i = 0; i < n; i++) {
		in >> d[i];
	}

	// parse problems
	in >> k;
	p.resize(k);
	for (int i = 0; i < k; i++) {
		in >> p[i];
	}

	// ---------------------------------------------------

	



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

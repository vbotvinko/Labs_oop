#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

int main(int argc, char** argv[])
{
	ifstream input (*argv[1]);
	ofstream output (*argv[2]);
	
	string cur_str;

	map <string, pair<int,double>> words;

	while (!input.eof())
	{
		
	}


	return 0;
}


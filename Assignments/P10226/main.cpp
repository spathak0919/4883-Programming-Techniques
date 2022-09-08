// Name          : Sandesh Pathak
// Program 10266 : Hardwood Species
// Description   : Each test case in program consists of a list of the species of   
//                 every tree observed by the satellite.

#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main()
{
	int test = 0;
	string tree = "";

	map<string, double>hardwood;

  // take input of the number of test cases
	cin >> test;

  // read the remaining line
	getline(cin, tree);
	cin.ignore();

  // count total number of trees from zero
	while (test--)
	{
		int count = 0;

      // create a map to store the tree species and their count
		while (getline(cin, tree) && tree != "")
		{
			hardwood[tree]++;
			count++;
		}
		for (map<string, double>::iterator it = hardwood.begin(); it != hardwood.end(); it++)
		{
			cout << (*it).first << " " << fixed << setprecision(4) << (*it).second / count * 100 << endl;
		}
		//cout << endl;
		hardwood.clear();

		if (test != 0)
		{
			cout << endl;
		}
	}
	return 0;
}


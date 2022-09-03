// Name          : Sandesh Pathak
// Program 10266 : Hardwood Species
// Description   : Each test case in program consists of a list of the species of   
//                 every tree observed by the satellite.

#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

// main file

int main()
{
    string empty; 
    string tree;
    int test_Cases;

    // take input of the number of test cases
  
    cin >> test_Cases;
  
    // read the remaining line
    getline(cin, empty);
    getline(cin, empty);

    // loop 
  
    while (test_Cases--)
    {
        // count total number of trees from zero
        int count = 0;
      
        // create a map to store the tree species and their count
      
        map<string, int> species;

        // cin until an empty line 
      
        do
        {
            // read a tree from the input
            getline(cin, tree);

            
            if (tree.length() == 0)
                break;

            // add the tree
            species[tree] += 1;

            
            count += 1;
        } while (tree.length() > 0);

        // print the percentages of each tree to 4 decimal places
      
        for (auto p : species)
        {
            cout << p.first << " " << fixed << setprecision(4) << ((double)p.second / count) * 100 << "\n";
        }
        cout << "\n";
    }

    return 0;
}

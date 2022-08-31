/**
* Name   : Sandesh Pathak
* Course : 4883- Programming Techniques
* Date   : 08/30/2022
*/
#include <iostream>
using namespace std;

int main() {
    int B = 0, A = 0;
    
    while (cin >> A >> B) {
        
       int difference = (B-A);

      if (difference<0)
      difference*=-1;

      cout <<difference<<endl;

    }
    return 0;
}


    ---------------------------OR----------------------------------------
        
#include <iostream>
#include <fstream>

#define endl "\n"
using namespace std;

int main()
{
    fstream inFile("input");
    
    int B = 0, A = 0;
   
    while (inFile >> A >> B)
    {
   
        int diff = B - A;
     
        cout << abs(diff) << endl;
    }

    inFile.close();
    return 0;
}

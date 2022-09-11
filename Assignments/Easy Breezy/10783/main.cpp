// Name   - Sandesh Pathak
// P10783 - Odd Sum

#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int r = 0; r < test; r++)
      
    {
        int range1;
        int range2;
        int sum =0;
        cin >> range1;
        cin >> range2;

        for(int x=range1; x<=range2; x++){
            if(x%2!=0){
                sum+=x;
            }
        }
        cout << "Case " << (r+1) << ": " << sum <<endl;
    }
    return 0;
}

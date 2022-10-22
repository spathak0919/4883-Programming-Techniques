#include <iostream>
using namespace std;
int main()
{  
    long long input1,input2;
    long result=0;
    
    while(cin>>input1>>input2)
    {
         result=input1;
         while(input1>=input2)
         {
             result++;
             input1-=input2;
             input1++;
         }
         cout<<result<<endl;
    }
    return 0;
}

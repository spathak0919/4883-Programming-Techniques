#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int x=0;
    string number;
  
    long long binary=0;

while(cin>>number){
         x=0;
        binary=0;
for(int i=number.length()-1;i>=0;i--) {
            int temp=number[i]-'0';
            binary+=temp*( pow(2,x+1)-1);
            x++;
        }
        if(binary==0)
        {
            break;
        }
        cout<<binary<<endl;
         }
    return 0;
}

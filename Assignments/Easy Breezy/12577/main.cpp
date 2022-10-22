// Name   : Sandesh Pathak
// P12577 : Hajj-e-Akbar

#include <iostream>
using namespace std;

int main(){
  
    string input;
  
    int caseNumber=1;
  
    while(cin >>input){
        if(input =="Hajj")
            cout << "Case " << caseNumber << ": Hajj-e-Akbar" << endl;
          
        else if(input == "Umrah")
            cout << "Case " << caseNumber << ": Hajj-e-Asghar" << endl;
          
        else if(input =="*")
            break;
      
        caseNumber++;
    }
    return 0;
}

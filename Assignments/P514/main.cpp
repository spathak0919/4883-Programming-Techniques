// Name        : Sandesh Pathak
// P514        : Rails


#include <iostream>
#include <map>
#include <algorithm>
#include <stack>

using namespace std;

// main function
int main() {
  
  //number of coaches less than 10000
   int N[1000];
	  int input,i; 

  //input
	while (true) {
		cin >> input;
		if (input == 0)
			break;

		while (true) {
			cin >> N[0];
			if (N[0] == 0){
				cout << endl;
				break;
			}
			for (i = 1; i < input; i++) {
				cin >> N[i];
			}

			int currCoaches = 1, NIndex = 0;

      // stack for input
			stack<int> rails;
			while(currCoaches<=input){
				rails.push(currCoaches);

				while(!rails.empty() && rails.top() == N[NIndex]){
					rails.pop();
					NIndex++;
					if(NIndex>=input) break;
				}

				currCoaches++;
			}
      // if true and else
			if(rails.empty()) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}

	return 0;
}

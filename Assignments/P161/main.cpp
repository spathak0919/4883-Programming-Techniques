// Name          : Sandesh Pathak
// Program 161   : Traffic Lights

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>

using namespace std;

// main function

int main()
{
    int Zero = 0;
    int data = 0;
  
start:

    vector<int> lights;
  
    while (cin >> data)
      
    {
        // not equal to zero
      
        if (data != 0)
        {
            lights.push_back(data);
            Zero = 0;
        }

          // else
          
        else if (data == 0)
        {
            Zero++;
            
            if (Zero == 3)
                return 0;
              
            // break

            else if (Zero == 1)
                goto LOOP;
        }
    }

  
LOOP:
    bool green = false;
  
    int time = 0;
    for (time = (*min_element(lights.begin(), lights.end())) * 2; time <= 18000; time++)
    {
        int Counttrue = 0;
        for (int i = 0; i < lights.size(); i++)
        {
            if (time % (lights[i] * 2) < lights[i] - 5)
                Counttrue++;
        }
        if (Counttrue == lights.size())
        {
            green = true;
            break;
        }
    }
    if (green)
      
        printf("%02d:%02d:%02d\n", time / 3600, time % 3600 / 60, time % 60);
      
    else
        cout << "Signals fail to synchronise in 5 hours"<< endl;
  
    goto start;
  
    return 0;
}

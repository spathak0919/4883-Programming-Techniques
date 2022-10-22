#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    while (true)
    {
      int input;
      int enter;
      cin >> input;
        if (input == 0)
            break;
      
      int **g = new int *[input];
      
  for (int i = 0; i < input; i++){
        g[i] = new int[input];
      for (int x = 0; x < input; x++)
           g[i][x] = 0;
        }
        cin >> enter;
        int a, b;
        for (int i = 0; i < enter; i++)
        {
            cin >> a >> b;
            g[a][b] = 1;
            g[a][b] = 1;
        }
        int *nodes = new int[input];
        for (int i = 0; i < input; i++)
            nodes[i] = -1;

        bool flag = true;
        int nextnode = -1;
        queue<int> queue;
        queue.push(0);
        nodes[0] = 1;
        for (; !queue.empty() && flag;)
        {
            nextnode = queue.front();
            queue.pop();

            for (int j = 0; j < input; j++)
            {
                if (g[nextnode][j] == 1)
                {

                    if (nodes[nextnode] == nodes[j])
                    {
                        flag = false;
                        break;
                    }
                    else if (nodes[j] == -1)
                    {
                        nodes[j] = !nodes[nextnode];
                        queue.push(j);
                    }
                }
            }
        }

        if (flag)
            cout << "BICOLORABLE.\n";
        else
            cout << "NOT BICOLORABLE.\n";
    }
    return 0;
}

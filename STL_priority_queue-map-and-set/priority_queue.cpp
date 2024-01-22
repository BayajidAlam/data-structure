#include <bits/stdc++.h>
using namespace std;

int main()
{

  priority_queue<int> pq;
  while (true)
  {
    int cmd;
    cin >> cmd;
    if (cmd == 0)
    {
      int x;
      cin >> x;
      pq.push(x);
    }
    else if (cmd == 1)
    {
      pq.pop();
    }
    else if (cmd == 2)
    {
      cout << pq.top() << endl;
    }
    else
    {
      break;
    }
  }

  return 0;
}
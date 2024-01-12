#include <bits/stdc++.h>
using namespace std;

void find_Winner(int a, int b)
{
  if ((a + b) % 2 == 0)
  {
    cout << "Bob" << endl;
  }
  else
  {
    cout << "Alice" << endl;
  }
}

int main()
{

  int tt;
  cin >> tt;
  while (tt--)
  {
    int a, b;
    cin >> a >> b;
    find_Winner(a, b);
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    // first way
    // bit-wise XOR 
    cout << (a ^ b ^ c) << '\n';
    // second way
    if (a == b)
    {
      cout << c << endl;
    }
    else if (a == c)
    {
      cout << b << endl;
    }
    else
    {
      cout << a << endl;
    }
  }

  return 0;
}
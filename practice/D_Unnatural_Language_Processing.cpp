#include <bits/stdc++.h>
using namespace std;

void just_solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  string res = "";
  while (!s.empty())
  {
    int x;
    // if string has a | e on the back x will be 2 else 3
    // it means 2,3 char will be pop from string
    if (s.back() == 'a' || s.back() == 'e')
    {
      x = 2;
    }
    else
      x = 3;
    // add 1 by one last char to res
    // and delete last char from string
    while (x--)
    {
      res += s.back();
      s.pop_back();
    }
    // add a . after every iteration
    res += '.';
    // again it will check is the string is empty or not and continue till string is empty
  }
  // delete the last . from the res
  res.pop_back();
  reverse(res.begin(), res.end());
  cout << res << endl;
}

int main()
{

  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    just_solve();
  }
  return 0;
}
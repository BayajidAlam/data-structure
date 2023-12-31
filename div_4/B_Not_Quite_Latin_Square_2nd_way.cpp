#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int cnt[3] = {};
  for (int i = 0; i < 9; i++)
  {
    char c;
    cin >> c;

    if (c != '?')
    {
      cnt[c - 'A']++;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    if (cnt[i] < 3)
    {
      cout << (char)('A' + i) << endl;
    }
  }
}

int main()
{

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    solve();
  }
  return 0;
}
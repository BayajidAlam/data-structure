#include <bits/stdc++.h>
using namespace std;

int main()
{

  map<string, int> mp;
  mp.insert({"Sakib", 20});
  mp.insert({"Tamim", 22});
  mp.insert({"Joshim", 340});

  for (auto it = mp.begin(); it != mp.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }
  return 0;
}
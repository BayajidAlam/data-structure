#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> v = {1, 2, 3, 4, 5};
  // erase a emement 
  // v.erase(v.begin() + 3);

  // erase some element
  v.erase(v.begin() + 1, v.end() - 1);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}
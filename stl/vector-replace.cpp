#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> v = {1, 2, 3, 4,3, 5, 6, 7};
  replace(v.begin(), v.end(), 3, 100);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}
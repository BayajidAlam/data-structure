#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> v = {1, 2, 3, 4, 5};
  vector<int> y = {200, 300, 400};
  // insert a element
  // v.insert(v.begin() + 2, 10);

  // insert a vector
  v.insert(v.begin() + 3, y.begin(), y.end());
  for (int x : v)
  {
    cout << x << " ";
  }
  return 0;
}
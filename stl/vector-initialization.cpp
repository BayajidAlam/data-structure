#include <bits/stdc++.h>
using namespace std;

int main()
{
  // general initializations
  // vector<int> v;

  // init with default values
  // vector<int> v(5);

  // copy from a vector
  // vector<int> v(5, 4);
  // vector<int> v1(v);

  // from a array
  int a[5] = {1, 3, 4, 6, 7};
  vector<int> v(a, a + 5);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  cout << v.size();
  return 0;
}
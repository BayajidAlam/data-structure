#include <bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList = {10, 20, 30, 40, 50};
  myList.remove(10);
  for (int val : myList)
  {
    cout << val << " ";
  }
  return 0;
}
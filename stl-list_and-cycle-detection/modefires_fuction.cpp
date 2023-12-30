#include <bits/stdc++.h>
using namespace std;

int main()
{

  list<int> myList = {10, 20, 30, 40, 50};
  list<int> newList;
  // newList = myList;
  newList.assign(myList.begin(), myList.end());
  for(int val:newList){
    cout << val << endl;
  }
  return 0;
}
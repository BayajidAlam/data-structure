#include <bits/stdc++.h>
#include <list>
using namespace std;

void print_from_left(const list<int> &myList)
{
  cout << "L ->";
  for (const auto &el : myList)
  {
    cout << el << " ";
  }
  cout << endl;
}

void print_from_right(const list<int> &myList)
{
  cout << "R ->";
  for (auto it = myList.rbegin(); it != myList.rend(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{

  int Q;
  cin >> Q;

  list<int> myList;
  while (Q--)
  {

    int X, V;
    cin >> X >> V;

    if (X == 0)
    {
      myList.push_front(V);
    }
    else if (X == 1)
    {
      myList.push_back(V);
    }
    else if (X == 2)
    {
      int i = 0;
      auto it = myList.begin();
      while (i < V && it != myList.end())
      {
        it++;
        i++;
      }

      if (it != myList.end())
      {
        myList.erase(it);
      }

      print_from_left(myList);
      print_from_right(myList);
    }
  }

  return 0;
}
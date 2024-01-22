#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  int mark;

  Student(string name, int roll, int mark)
  {
    this->name = name;
    this->roll = roll;
    this->mark = mark;
  }
};

class cmp
{
public:
  bool operator()(Student a, Student b)
  {
    if (a.mark > b.mark)
      return true;
    else if (a.mark < b.mark)
    {
      return false;
    }
    else
    {
      if (a.roll > b.roll)
        return true;
      else
        return false;
    }
  }
};

int main()
{
  int n;
  cin >> n;
  priority_queue<Student, vector<Student>, cmp> pq;
  for (int i = 0; i < n; i++)
  {
    string name;
    int roll;
    int mark;
    cin >> name >> roll >> mark;
    Student obj(name, roll, mark);
    pq.push(obj);
  }

  while (!pq.empty())
  {
    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
    pq.pop();
  }

  return 0;
}
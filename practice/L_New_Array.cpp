#include <iostream>
#include <vector>

using namespace std;

void concatArrays(const vector<int> &A, const vector<int> &B)
{
  for (int i = 0; i < A.size(); i++)
  {
    cout << B[i] << " ";
  }
  for (int i = 0; i < A.size(); i++)
  {
    cout << A[i];
    if (i < A.size() - 1)
    {
      cout << " ";
    }
  }
}

int main()
{
  int n;
  cin >> n;

  vector<int> A(n);
  vector<int> B(n);

  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> B[i];
  }

  concatArrays(A, B);

  return 0;
}

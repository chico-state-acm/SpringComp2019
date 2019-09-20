#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int size;
  cin >> size;
  vector<int> A(size);
  int temp;
  for(int i = 0; i < size; i++)
  {
    cin >> temp;
    A[i] = temp;
  }
  sort(A.begin(), A.end());
  cout << A[A.size() - 2] << endl;
}

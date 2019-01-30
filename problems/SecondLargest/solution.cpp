#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int size;
  cin >> size;
  vector<int> A(0);
  int temp;
  for(int i = 0; i < size; i++)
  {
    cin >> temp;
    A.push_back(temp);
  }
  sort(A.begin(), A.end());
  cout << A[A.size() - 2] << endl;
}

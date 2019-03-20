#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, k;
  cin >> N >> k;
  vector<int> V(N);
  for(int i = 0; i < N; i++)
  {
    cin >> V[i];
  }
  sort(V.begin(), V.end());
  int remain;
  int count = 0;
  for(int i = 0; i < N - 2; i++)
  {
    remain = k - V[i];
    int m = i + 1;
    int n = N - 1;
    while(m < n)
    {
      if(V[m] + V[n] > remain)
      {
        n--;
      }
      else if(V[m] + V[n] < remain)
      {
        m++;
      }
      else
      {
        count++;
        n--;
        m++;
      }
    }
  }
  cout << count << endl;
}

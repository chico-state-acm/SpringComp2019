#include <iostream>
#include <vector>

using namespace std;

struct myPair
{
  int first;
  int second;
};

int main()
{
  int n;
  cin >> n;
  vector<myPair> V(n);
  for(int i = 0; i < n; i++)
  {
    cin >> V[i].first >> V[i].second;
  }

  int count = 0;
  int current = -1;
  int nextMin;
  while(true)
  {
    nextMin = 100000;
    for(int i = 0; i < n; i++)
    {
      if(V[i].first > current && V[i].second < nextMin)
      {
        nextMin = V[i].second;
      }
    }
    if(nextMin == 100000)
    {
      break;
    }
    count++;
    current = nextMin;
  }
  cout << count << endl;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<bool> V(1001, false);
  int temp;
  cin >> temp;
  V[temp] = true;
  cout << temp;
  for(int i = 1; i < N; i++)
  {
    cin >> temp;
    if(!V[temp])
    {
      V[temp] = true;
      cout << ' ' << temp;
    }
  }
  cout << endl;
}

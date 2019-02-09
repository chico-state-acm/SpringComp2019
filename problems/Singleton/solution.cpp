#include <iostream>

using namespace std;

int main()
{
  int size;
  cin >> size;
  int singleton = 0;
  int temp;
  for(int i = 0; i < size; i++)
  {
    cin >> temp;
    singleton ^= temp;
  }
  cout << singleton << endl;
}

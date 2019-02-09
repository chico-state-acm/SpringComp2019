#include <iostream>

using namespace std;

int main()
{
  int h, p, s;
  cin >> h >> p >> s;
  if(h * s < p)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }
}

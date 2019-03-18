#include <iostream>

using namespace std;

double chanceOfWin(int b, int r, int n)
{
  if(b == 0)
  {
    return 0.0;
  }
  if(b == 1)
  {
    return (double)b / n;
  }
  return ((double)b / n) * ((double)r / (n - 1)) + ((double)b / n) * ((double)(b - 1) / (n - 1)) * chanceOfWin(b - 2, r, n - 2);
}

int main()
{
  int r, b, n;
  cin >> r >> b;
  n = r + b;
  cout.precision(5);
  cout << fixed << chanceOfWin(b, r, n) * 100 << endl;
}

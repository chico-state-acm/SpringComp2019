#include <iostream>

using namespace std;

int main()
{
  double t;
  char s;
  cin >> t >> s;
  switch(s)
  {
    case 'K':
      t -= 273.15;
      // Fallthrough
    case 'C':
      t *= 1.8;
      t += 32;
      // Fallthrough
    case 'F':
      cout.precision(2);
      cout << fixed << t << endl;
      break;
    default:
      break;
  }
  return 0;
}

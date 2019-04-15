#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;
  for(int i = 1; i < s.length(); i++)
  {
    if(s[i] == s[i -1])
    {
      cout << "yes" << endl;
      return 0;
    }
  }
  cout << "no" << endl;
}

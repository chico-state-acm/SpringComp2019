#include <iostream>

using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  int temp = 0;
  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] <= 'Z')
    {
      temp = 25 - 2 * (s[i] - 'A');
    }
    else
    {
      temp = 25 - 2 * (s[i] - 'a');
    }
    cout << (char)(s[i] + temp);
  }
  cout << endl;
}

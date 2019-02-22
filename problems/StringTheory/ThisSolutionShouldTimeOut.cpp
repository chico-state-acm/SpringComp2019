#include <iostream>

using namespace std;

int main()
{
  string S, Z;
  cin >> S >> Z;
  for(int i = 0; i <= (S.length() - Z.length()); i++)
  {
    for(int j = 0; j < Z.length(); j++)
    {
      if(S[i+j] != Z[j])
      {
        break;
      }
      if(j == (Z.length() - 1))
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}

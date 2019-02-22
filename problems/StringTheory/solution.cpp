#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

string S, Z;


struct suffix
{
  int index;
  char type;
  int group;
};

int compFinal(int A)
{
  for(int i = 0; i < Z.length(); i++)
  {
    if(i + A >= S.length())
    {
      return -1;
    }
    if(S[A + i] < Z[i])
    {
      return -1;
    }
    if(S[A + i] > Z[i])
    {
      return 1;
    }
  }
  return 0;
}

bool sortSuffix(suffix A, suffix B)
{
  if(A.group == B.group)
  {
    if(A.type == 'S')
    {
      return A.index < B.index;
    }
    else
    {
      return A.index > B.index;
    }
  }
  else
  {
    return strcmp(&S[A.index], &S[B.index]) < 0;
  }
}

int main()
{
  cin >> S >> Z;
  vector<suffix> SA(S.length());
  SA[S.length() - 1].index = S.length() - 1;
  SA[S.length() - 1].type = 'L';
  SA[S.length() - 1].group = 0;
  int group = 1;
  vector<int> charCounts(26, 0);
  charCounts[S[S.length() - 1] - 'a']++;

  for(int i = S.length() - 2; i >= 0; i--)
  {
    SA[i].index = i;
    charCounts[S[i] - 'a']++;
    if(S[i] < S[i + 1])
    {
      SA[i].type = 'S';
      SA[i].group = group++;
    }
    else if(S[i] > S[i + 1])
    {
      SA[i].type = 'L';
      SA[i].group = group++;
    }
    else
    {
      SA[i].type = SA[i + 1].type;
      SA[i].group = SA[i + 1].group;
    }
  }

  int reducedSize = charCounts[Z[0] - 'a'];
  vector<suffix> shortSA(reducedSize);
  int count = 0;
  for(int i = 0; i < SA.size(); i++)
  {
    if(S[SA[i].index] == Z[0])
    {
      shortSA[count++] = SA[i];
    }
  }
  sort(shortSA.begin(), shortSA.end(), sortSuffix);

  int l = 0;
  int r = shortSA.size() - 1;
  int temp;
  int result;
  while(l <= r)
  {
    temp = (l + r - 1) / 2;
    result = compFinal(shortSA[temp].index);
    if(result == 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
    if(l == r)
    {
      break;
    }
    if(result < 0)
    {
      l = temp + 1;
    }
    else
    {
      r = temp - 1;
    }
  }
  cout << "No" << endl;
  return 0;
}

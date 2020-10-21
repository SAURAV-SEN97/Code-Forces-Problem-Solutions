#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s,t;
  getline(cin,s);
  getline(cin,t);

  reverse(t.begin(),t.end());
  if(s == t)
    cout << "YES";
  else
    cout << "NO";
}

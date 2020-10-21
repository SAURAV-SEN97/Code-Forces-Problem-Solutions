#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    string word;
    while(tc --)
    {
        cin >> word;
        if(word.length()>10 )
        {
            cout << word[0] << word.length() -2 << word[word.length() - 1]<<endl;
        }
        else
            cout << word << endl;
    }
      return 0;
}

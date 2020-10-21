#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector < int > v;
    string str;
    int n, i;
    cin >> str;
    int len = str.size();
    for(i = 0; i < len; i++)
    {
        if(str[i] != '+'){
            n = str[i] - '0';
            v.push_back(n);
        }

    }
    sort(v.begin(),v.end());

    for(i = 0 ; i < v.size();i++)
    {
        cout << v[i];

        if(i <= v.size() -2 && v.size()> 1)
            cout << "+";
    }
    return 0;
}

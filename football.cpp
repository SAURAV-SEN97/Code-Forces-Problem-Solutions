#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    getline(cin,word);
    int one = 0,t = 0;
    int zero = 0;
    for(int i = 0; i < word.size(); i++)
    {
        if(word[i] =='1')
        {
            one++;
            zero = 0;
        }

       else
        {
            zero++;
            one = 0;
        }
        if(one >= 7 || zero >= 7)
        {
            t = 1;
            break;

        }
    }
    if(t == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

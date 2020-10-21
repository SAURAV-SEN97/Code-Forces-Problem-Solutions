#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string word;
    getline(cin,word);
    transform (word.begin(), word.end(), word.begin(), ::tolower);

    for(int i = 0; i < word.size();i++)
    {
        if(word [i]== 'a' ||word[i] == 'o'||word[i] == 'y'||word[i] == 'e'||word[i]== 'u'||word[i] =='i')
        {
            cout << "";
        }
        else
        {
            cout << ".";
        cout << word[i];
        }

    }

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string word,word_1;
    getline(cin,word);
    getline(cin,word_1);

    transform(word.begin(),word.end(),word.begin(),::tolower);

    transform(word_1.begin(),word_1.end(),word_1.begin(),::tolower);


    if(word > word_1) cout << "1";
    else if(word < word_1) cout<<"-1";
    else
        cout << "0";


}

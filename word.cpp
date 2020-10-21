#include<bits/stdc++.h>
using namespace std;
int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string word;
    getline(cin,word);
    int upper= 0,lower = 0;
    for(int i = 0; i < word.size();i++)
    {
        if(word[i] >= 'A' && word[i] <='Z') upper ++;
        else
            lower++;

    }
   if(lower > upper)
   {
       transform(word.begin(),word.end(),word.begin(),::tolower);
       cout<< word;
   }
   else if(upper >lower)
   {
        transform(word.begin(),word.end(),word.begin(),::toupper);
       cout<< word;
   }
   else
   {
       transform(word.begin(),word.end(),word.begin(),::tolower);
       cout<< word;
   }
}

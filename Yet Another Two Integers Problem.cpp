#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++)
    {
        int  a, b, d,e;
        cin >> a >> b;
        if(a == b) cout << "0" << endl;
        else
        {
            if(a < b) swap(a ,b);
            cout << " a is: " << a << "b is : " << b;

           d = (a / 10);
           cout << "d is: " << d;

           e = (b / 10);
           cout << "e is: " << e;

           cout <<(ceil(d-e))  << endl;
        }



    }
}

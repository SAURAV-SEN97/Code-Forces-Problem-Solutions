#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++)
    {
       int a, b, d;
       cin >> a >> b;
       d = (a + b)/ 2;
       if ( a > b)
       {
           cout << abs((d-b)-(a-d)) << endl;
       }
       else if( b > a)
       {
           cout << abs((a-d)- (b-d)) << endl;
       }
       else
        cout << "0" << endl;


    }
}

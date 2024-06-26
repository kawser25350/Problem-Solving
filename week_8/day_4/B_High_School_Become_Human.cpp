#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    long double x, y;
    cin >> x >> y;
    long double a = y * log(x), b = x * log(y);
    if (a > b)
    {
        cout << '>';
    }
    else if (a < b)
    {
        cout << '<';
    }
    else
        cout << '=';
    return 0;
}
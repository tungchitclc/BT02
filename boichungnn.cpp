#include <iostream>

using namespace std;

int ucln( int a , int b)
{
    for( int i = min(a,b); i >= 1; i--)
    {
        if( a % i == 0 && b % i == 0)
        {
            return i ;
        }
    }
    return 1;
}

int main()
{
    int a , b ;
    cin >> a >> b ;
    int Bcnn = (a*b)/ucln(a,b);
    cout << Bcnn << endl;
    return 0;
}

#include <iostream>

using namespace std;

int gcd ( int a , int b)
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
    int a , b;
    cout << "NHAP TU SO VA MAU SO:";
    cin >> a >> b ;
    int tu = a / gcd(a,b);
    int mau = b / gcd( a , b);
    cout << "PHAN SO TOI GIAN LA:" << tu <<" " << mau << endl;
    return 0;
}

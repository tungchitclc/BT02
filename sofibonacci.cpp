#include <iostream>

using namespace std;

bool Fibo(long long n )
{
    if( n == 0 || n == 1)
    {
        return true;
    }
    long long fn1 = 1, fn2 = 0;
    for( int i = 2; i <= 92; i++)
    {
        long long fn = fn1 + fn2;
        if( fn = n)
        {
            return true;
        }
        fn2 = fn1 ;
        fn1 = fn;

    }
    return false;
}

int main()
{
    long long n ;
    cin >> n ;
    if( Fibo(n))
    {
        cout << "yes" << endl;
    }else
    {
        cout << "no" << endl;
    }
    return 0;
}

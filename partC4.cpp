#include <iostream>

using namespace std;

int main()
{
    int a ;
    do
    {
        cin >> a;
    }
    while(a < 0);
    {
        for( int i = a ; i >=1 ; i--)
        {
            for( int j = a - i ; j >= 1 ; j--)
            {
                cout << " " ;
            }
            for( int j = 2 * i - 1; j >= 1; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}

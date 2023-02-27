#include <iostream>

using namespace std;
double luythua( float x , int y)
{
    float res = 1;
    while( y--)
    {
        res = res * x;
    }
    return res;
}
int main()
{
    float x , z; cin >> x;
    int n ; cin >> n ;
    z = luythua(x,n);
    cout << z << endl;
    return 0;
}

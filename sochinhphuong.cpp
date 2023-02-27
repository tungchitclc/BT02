#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    if( sqrt(n) * sqrt(n) == n )
    {
        cout << n << " la so chinh phuong " << endl;

    }else
    {
        cout << n << " khong phai so chinh phuong" << endl;
    }
    return 0;
}

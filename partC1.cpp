#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;
int soNguyenTo(int soA)
{
    if (soA < 2)
        return 0;

    for (int i = 2; i <= sqrt((float)soA); i ++)
    {
        if (soA%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n ;
    cin >> n ;
    if(soNguyenTo(n) == 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout <<"no" << endl;
    }


    return 0;
}

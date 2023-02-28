#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e;
    cout <<"Nhap diem cua 5 mon hoc:" << endl;
    cin >> a >> b >> c >> d >> e;
    int tb = ( a + b + c + d + e)/(double)5;
    cout << "Diem trung binh cong 5 mon la :" <<tb << endl;
    return 0;
}

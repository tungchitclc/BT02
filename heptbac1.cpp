#include <iostream>

using namespace std;
int main(){
    int a1, b1, c1, a2, b2, c2;
    float D, Dx, Dy, x, y;
    cout << "a1*x + b1*y = c1" << endl;
    cout << "a2*x + b2*y = c2" << endl;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0) {
        if (Dx + Dy == 0)
            cout << "He phuong trinh co vo so nghiem";
        else
            cout << "He phuong trinh vo nghiem";
    }
    else {
        x = Dx / D;
        y = Dy / D;
        cout << "He phuong trinh co nghiem" << endl;
        cout << "x = " << x<<endl;
        cout << "y = " << y;
    }
    return 0;
}

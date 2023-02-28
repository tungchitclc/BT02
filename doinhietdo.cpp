#include <iostream>

using namespace std;

int main()
{
    cout << "Fahrenheit" <<"    " <<"Celsius"<<"    "<<"Absolute Value" << endl;
    for( int i = 0 ; i <= 300; i+=20)
    {
       float ce = ((i - 32) * 5)/(double)9;
        float k = ce + 273.15;
    cout << i <<"       " <<ce<<"       "<<k<<endl;
    }
    return 0;
}


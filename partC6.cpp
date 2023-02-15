#include <iostream>
using namespace std;
int main(){
	int n, a[102][102];
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i+j <= n+1){
				a[i][j] = i+j-1;
			}
			else
            {
                a[i][j] = i + j - n - 1;
            }
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

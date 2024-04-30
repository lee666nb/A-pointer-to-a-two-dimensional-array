#include <iostream>
using namespace std;
int main() {
	int m,n; 
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
    for(int *p=a[0]; p < a[0]+(m*n); p++) {
        for(int *q=p+1; q < a[0]+(m*n); q++) {
            if(*q < *p) {
                swap(*p, *q);
            }
        } 
    }
    cout<<endl; 
    for(int i=0;i<m;i++) { 
        for(int j=0;j<n;j++)
		 { 
            cout<<a[i][j]<<" ";
        }
        cout<<endl; 
    }
    return 0;
}

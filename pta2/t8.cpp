#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m];
    n%=m;
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    for (int i = m-n; i < m; i++)
    {
        cout<<a[i]<<" ";
    }
    for (int i = 0; i < m-n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[m-n-1];
    
    
    
}
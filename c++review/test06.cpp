#include <iostream>
using namespace std;
int fn1(){
    int *p=new int(5);
    return *p; //缺点：麻烦，且无法释放
}
int main()
{
    int *a = new int[10];
    for (int i = 0; i < 10; i++)
    {
        int temp;
        cin >> temp;
        a[i] = temp;
        cout << a[i] << endl;
    }
    int b=fn1();
    cout<<b<<endl;

}
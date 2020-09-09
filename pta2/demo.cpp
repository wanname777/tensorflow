#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, m;
    int flag = 0;
    cin >> n >> m;
    int a[100][3];
    int b[3];
    int c[2];
    memset(a,0,sizeof(a));
    for (int i = 0; i < n; ++i) {
        cin >> a[i][0];
        cin>>a[i][1];
        cin>>a[i][2];
        cout<<a[i][0]<<endl;
    }
    // for (int i = 0; i < m; ++i) {
    //     cin >> b[0] >> b[1] >> b[2];
    //     int temp = a[0][0] * b[0] + a[0][1] * b[1] + b[2];
    //     if (a[0][2] == 'A') {
    //         c[0] = temp / abs(temp);
    //         c[1] = -c[0];
    //     } else {
    //         c[1] = temp / abs(temp);
    //         c[0] = -c[1];
    //     }
    //     for (int j = 0; j < n; ++j) {
    //         int t = a[j][0] * b[0] + a[j][1] * b[1] + b[2];
    //         if (t / abs(t) != c[a[j][2] - 'A']) {
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if (flag) {
    //         cout << "NO" << endl;
    //     } else {
    //         cout << "YES" << endl;
    //     }
    //     flag = 0;
    // }

    return 0;
}

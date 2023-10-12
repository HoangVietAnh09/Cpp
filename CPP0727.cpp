#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n+5], kq[n+5];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        kq[1] = a[1];
        kq[2] = max(a[1], a[2]);
        for(int i = 3; i <= n; i++){
            kq[i] = max(kq[i-1], kq[i-2] + a[i]);
        }
        cout << kq[n] << endl;
    }
    return 0;
}
/*
kq[i]: tong lon nhat tai vi tri i cua mang
bai toan nho nhat: i = 1 thi kq[1] = a[1];
                   i = 2 thi kq[2] = so lon hon trong so
cong thuc truy hoi: so lon hon trong hai so kq[i-1] hoac kq[i-2] + a[i];
*/
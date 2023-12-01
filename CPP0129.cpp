#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        int res = 0;
        for(int i = 1; i <= n; i++){
            int tmp = i;
            while(tmp%p == 0){
                res++;
                tmp /= p;
            }
        }
        cout << res << endl;
    }
    return 0;
}
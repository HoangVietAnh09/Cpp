#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 2; i <= n; i++){
            int dem = 0;
            while(n%i == 0){
                dem++;
                n /= i;
            }
            if(dem != 0)
                cout << i << " " << dem << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    return n > 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i = fmin(n, m); i <= fmax(n, m); i++){
            if(check(i)){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
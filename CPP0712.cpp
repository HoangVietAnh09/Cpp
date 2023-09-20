#include <bits/stdc++.h>
using namespace std;
void in(int &k, int x[]){
    for(int i = 1; i <= k; i++){
        cout << x[i];
    }
    cout << " ";
}
void sinh(int i, int &k, int &n, int x[]){
    for(int j = x[i-1]+1; j <= n - k + i; j++){
        x[i] = j;
        if(i == k)
            in(k, x);
        else
            sinh(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x[10000] = {0};
        cin >> n >> k;
        sinh(1, k, n, x);
        cout << endl;
        return 0;
    }
}
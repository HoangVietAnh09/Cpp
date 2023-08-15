#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        int dem = 0;
        while(n%i == 0){
            dem++;
            n /= i;
        }
        if(dem != 0){
            cout << i << " " << dem << endl;
        }
    }
    if(n != 1){
        cout << n << " " << 1;
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int prime[1000001];
void sang(){
    for(int i = 0; i <= 1000000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 1000; i++){
        if(prime[i]){
            for(int j = i*i; j <= 1000000; j += i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    sang();
    while(t--){
        sang();
        int n;
        cin >> n;
        for(int i = 0; i <= n; i++){
            if(prime[i]){
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
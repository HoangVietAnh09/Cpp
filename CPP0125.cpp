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
    int a, b;
    cin >> a >> b;
    for(int i = fmin(a, b); i <= fmax(a, b); i++){
        if(check(i)){
            cout << i << " ";
        }
    }
    return 0;
}
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
    int n;
    cin >> n;
    if(check(n))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
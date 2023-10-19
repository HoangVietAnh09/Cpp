#include <bits/stdc++.h>
using namespace std;
int n, k, a[104];
set<int> s;
void in(){
    int tmp = 0;
    for(int i = 1; i <= k; i++){
        tmp += 
    }
}
void sinh(int i){
    for(int j = 0; j <= 9; j++){
        a[i] = j;
        if(i >= k){
            in();
            s.insert()
        }else{
            sinh(i+1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    sinh(1);
    cout << *s.begin() << " " << *s.rbegin();
    return 0;
}
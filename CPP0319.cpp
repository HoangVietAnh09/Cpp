#include <bits/stdc++.h>
using namespace std;
int n, k, a[10004];
set<int> s;
void in(){
    int tmp = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        tmp = tmp*10 + a[i];
        sum += a[i];
    }
    if(sum == k)
        s.insert(tmp);
}
void sinh(int i){
    for(int j = 0; j < 10; j++){
        a[i] = j;
        if(i == n){
            in();
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
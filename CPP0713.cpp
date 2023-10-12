#include <bits/stdc++.h>
using namespace std;
int n, a[1004], used[100];
void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}
void backTracking(int i){
    for(int j = 1; j <= n; j++){
        if(used[j] == 0){
            a[i] = j;
            used[j] = 1;
            if(i == n){
                in();
            }else{
                backTracking(i+1);
            }
            used[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        backTracking(1);
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int n, a[1004];
void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}
void backTrack(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            in();
        }else{
            backTrack(i+1);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        backTrack(1);
        cout << endl;
    }
    return 0;
}
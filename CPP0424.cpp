#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int k, n;
        cin >> k >> n;
        int a[n*k];
        for(int i = 0; i < n*k; i++){
            cin >> a[i];
        }
        qsort(a, k*n, sizeof(int), cmp);
        for(int x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}
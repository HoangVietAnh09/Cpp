#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        qsort(a, n, sizeof(int), cmp);
        int max = 1e9;
        int min = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                min = i + 1;
                if(max > min){
                    max = min;
                }
            }
        }
        cout << max << " " << min << endl;

    }
    return 0;
}
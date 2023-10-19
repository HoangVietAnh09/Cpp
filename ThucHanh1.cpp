#include <bits/stdc++.h>
using namespace std;
int min(vector<vector<int>> &matrix){
    int n = matrix.size();
    vector<int> rows(n, 0);
    vector<int> cos(n, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            rows[i] += matrix[i][j];
            cos[j] += matrix[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int target = rows[i];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int tmp = abs(matrix[i][j] - target);
                cnt += tmp;
            }
        }
    }
    return cnt;

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> v[i][j];
            }
        }
        cout << min(v) << endl;
    }
    return 0;
}
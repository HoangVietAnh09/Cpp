#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        string tmp;
        stringstream ss(s);
        int cnt_c = 0, cnt_l = 0, cnt_s = 0;
        while(ss >> tmp){
            cnt_s++;
            tmp[tmp.length()-1] -= '0';
            if(tmp[tmp.length()-1] % 2 == 0){
                cnt_c++;
            }else{
                cnt_l++;
            }
        }
        if(cnt_s%2 == 0 && cnt_c > cnt_l || cnt_s%2 != 0 && cnt_l > cnt_c){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
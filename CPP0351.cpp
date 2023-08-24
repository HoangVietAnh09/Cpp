#include <bits/stdc++.h>
#define ll long long
using namespace std;
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    return n > 1;
}
int check_thuan(int n){
    while(n > 9){
        if((n%10) >= ((n/10)%10))
            return 0;
        n /= 10;
    }
    return 1;
}
int check_nghich(int n){
    while(n > 9){
        if((n%10) <= ((n/10)%10))
            return 0;
        n /= 10;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        vector<string> vs;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            vs.push_back(tmp);
        }
        for(int i = 0; i < vs.size(); i++){
            vs[i][0] = toupper(vs[i][0]);
        }
        if(n == 1){
            cout << vs[vs.size()-1] << " ";
            for(int i = 0; i < vs.size()-1; i++){
                cout << vs[i] << " ";
            }
        }else{
            for(int i = 1; i < vs.size(); i++){
                cout << vs[i] << " ";
            }
            cout << vs[0] << " ";
        }
        cout << endl;
    }
    return 0;
}
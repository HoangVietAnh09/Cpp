#include <bits/stdc++.h>
using namespace std;
int solve(string s){
    int tmp = 0;
    for(int i = 0; i < s.length(); i++){
        tmp += s[i]-'0';
    }
    if(tmp == 9) return 1;
    while(tmp > 9){
        int check = 0;
        while(tmp != 0){
            check += tmp%10;
            tmp /= 10;
        }
        if(check == 9) return 1;
        tmp = check;
    }
    return 0;
    

}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(solve(s)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }

    }
}
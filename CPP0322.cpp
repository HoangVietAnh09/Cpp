#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        string sum = "";
        while(s1.length() < s2.length()) s1 = "0" + s1;
        while(s1.length() > s2.length()) s2 = "0" + s2;
        int nho = 0;
        for(int i = s1.length()-1; i >= 0; i--){
            int tmp = (s1[i]-'0')+(s2[i]-'0') + nho;
            sum = char(tmp%10+'0') + sum;
            nho = tmp/10;
        }
        if(nho > 0) sum = char(nho + '0') + sum;
        for(int i = 0; i < sum.length(); i++){
            cout << sum[i];
        }
        cout << endl;

    }
    return 0;
}
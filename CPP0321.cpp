#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        string sub = "";
        int len = max(s1.length(), s2.length());
        while(s1.length() < s2.length()) s1 = '0' + s1;
        while(s1.length() > s2.length()) s2 = '0' + s2;
        if(s1 < s2){
            swap(s1, s2);
        }
        int nho = 0;
        for(int i = s1.length()-1; i >= 0; i--){
            int tmp = (s1[i]-'0') - (s2[i]-'0') - nho;
            if(tmp < 0){
                tmp += 10;
                nho = 1;
            }else{
                nho = 0;
                sub[i] = tmp + '0';
            }
        }
        
        cout << sub << endl;

    }
    return 0;
}
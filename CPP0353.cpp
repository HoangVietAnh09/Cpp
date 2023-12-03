#include <bits/stdc++.h>
using namespace std;
int check(string s){
    int l = 0, r = s.length()-1;
    while(l <= r){
        if(s[l] != s[r]) return false;
        l++, r--;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int l = s.length();
        string res = "";
        for(int i = 0; i < l; i++){
            if (tolower(s[i]) <= 'c' && tolower(s[i]) >= 'a')
				res += "2";
			if (tolower(s[i]) <= 'f' && tolower(s[i]) >= 'd')
				res += "3";
			if (tolower(s[i]) <= 'i' && tolower(s[i]) >= 'g')
				res += "4";
			if (tolower(s[i]) <= 'l' && tolower(s[i]) >= 'j')
				res += "5";
			if (tolower(s[i]) <= 'o' && tolower(s[i]) >= 'm')
				res += "6";
			if (tolower(s[i]) <= 's' && tolower(s[i]) >= 'p')
				res += "7";
			if (tolower(s[i]) <= 'v' && tolower(s[i]) >= 't')
				res += "8";
			if (tolower(s[i]) <= 'z' && tolower(s[i]) >= 'w')
				res += "9";
        }
        if(check(res)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }

        
    return 0;
}
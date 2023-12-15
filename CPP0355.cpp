#include<bits/stdc++.h>
using namespace std;
string vietThuong(string s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
string vietHoa(string s){
	s[0] = toupper(s[0]);
	return s;
}

int main (){
//    freopen("DATA.in", "r", stdin);
//    freopen("VANBAN.in", "w", stdout);
	string s;
	vector<string> vs;
	while(cin >> s){
		s = vietThuong(s);
		vs.push_back(s);
	}
	int check = 1;
	for(auto x : vs){
		if(check){
			x = vietHoa(x);
			check = 0;
		}
		int dau = x[x.length()-1];
		if(dau == '.' || dau == '?' || dau == '!'){
			check = 1;
			x.pop_back();
			cout << x << endl;
		}else{
			cout << x << " ";
		}
	}
	return 0;
}


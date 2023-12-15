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
	set<string> st;
	map<string, int> mp;
	set<string> st2;
	ifstream fin("DATA1.in");
	string s;
	while(fin >> s){
		s = vietThuong(s);
		st.insert(s);
		mp[s] = 1;
	}
	fin.close();
	ifstream fcin("DATA2.in");
	string s1;
	while(fcin >> s1){
		s1 = vietThuong(s1);
		st.insert(s1);
		if(mp[s1] == 1)
			st2.insert(s1);
	}
	fcin.close();
	for(auto x : st) cout << x << " ";
	cout << endl;
	for(auto x : st2) cout << x << " ";
	
	return 0;
}



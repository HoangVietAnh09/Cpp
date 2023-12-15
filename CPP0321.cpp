#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
string sub(string a, string b){
	int l = fmax(a.length(), b.length());
	while(a.length() < l) a = "0" + a;
	while(b.length() < l) b = "0" + b; 
	if(a < b){
		swap(a, b);
	}
	int nho = 0;
	string res = "";
	for(int i = l-1; i >= 0; i--){
		int so = (a[i]-'0') - (b[i]-'0') - nho;
		if(so < 0){
			so += 10;
			nho = 1;
		}else nho = 0;
		res = char(so + '0') + res;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << sub(a, b) << endl;	
	}
	return 0;
}

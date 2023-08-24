#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

struct PhanSo{
    ll tu, mau;
};

void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p){
    ll l = gcd(p.tu, p.mau);
    p.tu = p.tu/l;
    p.mau = p.mau/l;
}

void in(PhanSo p){
    cout << p.tu << "/" << p.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
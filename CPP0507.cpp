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
void rutgon(PhanSo &p){
    ll l = gcd(p.tu, p.mau);
    p.tu /= l;
    p.mau /= l;
}
void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}
PhanSo tong(PhanSo a, PhanSo b){
    PhanSo t;
    t.tu = a.tu*b.mau + b.tu*a.mau;
    t.mau = a.mau * b.mau;
    rutgon(t);
    return t;
}
void in(PhanSo p){
    cout << p.tu << "/" << p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
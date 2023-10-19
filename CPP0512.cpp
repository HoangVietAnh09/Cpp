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

void rut_gon(PhanSo &p){
    ll t = gcd(p.tu, p.mau);
    p.tu = p.tu/t;
    p.mau = p.mau/t;
}
void binh_phuong(PhanSo &p){
    p.tu *= p.tu;
    p.mau *= p.mau;
}

PhanSo tinh_c(PhanSo a, PhanSo b){
    PhanSo c;
    c.tu = a.tu*b.mau + b.tu*a.mau;
    c.mau = a.mau*b.mau;
    rut_gon(c);
    binh_phuong(c);
    return c;
}

PhanSo tinh_d(PhanSo a, PhanSo b, PhanSo c){
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau; 
    rut_gon(d);
    return d;
}

void in(PhanSo p){
    cout << p.tu << "/" << p.mau;
}

void process(PhanSo a, PhanSo b){
    PhanSo c = tinh_c(a, b);
    PhanSo d = tinh_d(a, b, c);
    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau;
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
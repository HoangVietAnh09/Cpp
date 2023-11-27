#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau){
            this->tu = tu;
            this->mau = mau;
        }
        PhanSo(){
            tu = 0;
            mau = 1;
        }
        friend istream& operator >> (istream&, PhanSo&);
        friend ostream& operator << (ostream&, PhanSo);
        void rutgon();
        int getTu(){
            return this->tu;
        }
        int getMau(){
            return this->mau;
        }
};
istream& operator >> (istream &in, PhanSo &p){
    in >> p.tu >> p.mau;
    return in;
}
ostream& operator << (ostream &out, PhanSo p){
    out << p.tu << "/" << p.mau;
    return out;
}
void PhanSo::rutgon(){
    ll tmp = gcd(tu, mau);
    tu = tu/tmp;
    mau = mau/tmp;
}


int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
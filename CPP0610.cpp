#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
ll lcm(ll a, ll b){
    return a*b/gcd(a, b);    
}
class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau){
            this->tu = tu;
            this->mau = mau;
        }
        friend ostream& operator << (ostream&, PhanSo);
        friend istream& operator >> (istream&, PhanSo&);
        void rutGon();
        friend PhanSo operator + (PhanSo, PhanSo);
};
ostream& operator << (ostream& out, PhanSo a){
    cout << a.tu << '/' << a.mau;
    return out;
}
istream& operator >> (istream& in, PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}
void PhanSo::rutGon(){
    ll tmp = gcd(tu, mau);
    tu /= tmp;
    mau /= tmp;
}
PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo tong(1, 1);
    ll mc = lcm(a.mau, b.mau);
    tong.tu = mc/a.mau * a.tu + mc/b.mau * b.tu;
    tong.mau = mc;
    ll gg = gcd(tong.tu, tong.mau);
    tong.tu /= gg;
    tong.mau /= gg;
    return tong;

}
int main(){
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
class DoanhNghiep{
    private:
        string mdn, ten;
        int cnt;
    public:
        DoanhNghiep(){
            mdn = ten = "";
            cnt = 0;
        }
        int getCnt(){
            return this->cnt;
        }
        string getMdn(){
            return this->mdn;
        }
        friend istream& operator >> (istream&, DoanhNghiep&);
        friend ostream& operator << (ostream&, DoanhNghiep);
};
istream& operator >> (istream &in, DoanhNghiep &p){
    getline(in, p.mdn);
    getline(in, p.ten);
    cin >> p.cnt;
    in.ignore();
    return in;
}
ostream& operator << (ostream &out, DoanhNghiep p){
    cout << p.mdn << " " << p.ten << " " << p.cnt << endl;
    return out;
}
bool cmp(DoanhNghiep a, DoanhNghiep b){
    if(a.getCnt() > b.getCnt()) return true;
    if(a.getCnt() == b.getCnt() && a.getMdn() < b.getMdn()) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    DoanhNghiep ds[n];
    cin.ignore();
    for(int i = 0; i < n; i++) cin >> ds[i];
    sort(ds, ds+n, cmp);
    for(int i = 0; i < n; i++) cout << ds[i];
    return 0;
}
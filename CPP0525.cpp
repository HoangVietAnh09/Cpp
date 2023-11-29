#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
class SinhVien{
    private:
        string id, hoTen, lop;
        float d1, d2, d3;
    public:
        SinhVien(){
            id = hoTen = lop = "";
            d1 = d2 = d3 = 0;
        }
        SinhVien(string id, string hoTen, string lop, float d1, float d2, float d3){
            this->id = id;
            this->hoTen = hoTen;
            this->lop = lop;
            this->d1 = d1;
            this->d2 = d2;
            this->d3 = d3;
        }
        string getTen(){
            return this->hoTen;
        }
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream &in, SinhVien &p){
    cin.ignore();
    in >> p.id;
    in.ignore();
    getline(in, p.hoTen);
    getline(in, p.lop);
    in >> p.d1 >> p.d2 >> p.d3;
    return in;
}
ostream& operator << (ostream &out, SinhVien p){
    out << cnt++ << " " << p.id << " " << p.hoTen << " " << p.lop << " " << fixed << setprecision(1) << p.d1 << " " << p.d2 << " " << p.d3 << endl;
    return out;
}
bool cmp(SinhVien a, SinhVien b){
    return a.getTen() < b.getTen();
}
int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) cin >> ds[i];
    sort(ds, ds+n, cmp);
    for(int i = 0; i < n; i++) cout << ds[i];
    return 0;
}
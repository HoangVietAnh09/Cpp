#include <bits/stdc++.h>
using namespace std;
class doanhNghiep{
    private:
        string id, ten;
        int count;
    public:
    int getCount(){
        return count;
    }
    string getTen(){
        return ten;
    }
    string getId(){
        return id;
    }
    friend istream& operator >> (istream&, doanhNghiep&);
    friend ostream& operator << (ostream&, doanhNghiep);
};
istream& operator >> (istream &in, doanhNghiep &p){
    cin.ignore();
    getline(in, p.id);
    getline(in, p.ten);
    in >> p.count;
    return in;
}
bool cmp(doanhNghiep x, doanhNghiep y){
    if(x.getCount() != y.getCount()){
        return x.getCount() > y.getCount();
    }
    if(x.getCount() == y.getCount()){
        return x.getId() < y.getId();
    }
}
int main(){
    int n;
    cin >> n;
    doanhNghiep ds[n];
    for(int i = 0; i < n; i++) cin >> ds[i];
    sort(ds, ds+n, cmp);
    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
        for(int i = 0; i < n; i++){
            if(ds[i].getCount() >= a && ds[i].getCount() <= b){
                cout << ds[i].getId() << " " << ds[i].getTen() << " " << ds[i].getCount() << endl;
            }
        }

    }

}
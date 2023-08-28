#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv, hoten, lop, birth;
    float gpa;
};

void nhapThongTinSV(SinhVien &p){
    getline(cin, p.hoten);
    cin >> p.lop;
    cin.ignore();
    cin >> p.birth;
    cin >> p.gpa;
}

void inThongTinSV(SinhVien p){
    p.msv = "N20DCCN001";
    if(p.birth[1] = '/') p.birth = "0" + p.birth;
    if(p.birth[4] = '/') p.birth.insert(3, "0");
    cout << p.msv << " " << p.hoten << " " << p.lop << " " << p.birth << " " << fixed << setprecision(2) << p.gpa;

}


int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
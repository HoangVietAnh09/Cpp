#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct NhanVien{
    string mnv = "00001";
    string ho_ten;
    string gt;
    string date;
    string address;
    string tax;
    string regist;
};

void nhap(NhanVien &p){
    getline(cin, p.ho_ten);
    cin >> p.gt;
    cin >> p.date;
    cin.ignore();
    getline(cin, p.address);
    cin >> p.tax;
    cin >> p.regist;
}

void in(NhanVien p){
    cout << p.mnv << " " << p.ho_ten << " " << p.gt << " " << p.date << " " << p.address << " " << p.tax << " " << p.regist;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
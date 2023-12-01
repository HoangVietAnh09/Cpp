#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv, hoTen, lop, ngaySinh;
        float gpa;
    public:
        SinhVien(){
            msv = hoTen = lop = ngaySinh = "";
            gpa = 0;
        }
        void nhap();
        void xuat();
};
void SinhVien::nhap(){
    getline(cin, hoTen);
    getline(cin, lop);
    getline(cin, ngaySinh);
    cin >> gpa;
}
void SinhVien::xuat(){
    msv = "B20DCCN001";
    if(ngaySinh[1] == '/') ngaySinh = "0" + ngaySinh;
    if(ngaySinh[4] == '/') ngaySinh.insert(3, "0");
    cout << msv << " " << hoTen << " " << lop << " " << ngaySinh << " " << fixed << setprecision(2) << gpa << endl;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
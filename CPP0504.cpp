#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct SinhVien{
    string msv = "B20DCCN001";
    string ho_ten;
    string lop;
    string date;
    float gpa;
};
void nhap(SinhVien &p){
    getline(cin, p.ho_ten);
    getline(cin, p.lop);
    getline(cin, p.date);
    cin >> p.gpa;
    if(p.date[1] == '/'){
        p.date = "0" + p.date;
    }
    if(p.date[4] == '/'){
        p.date.insert(3,"0");
    }
}
void in(SinhVien p){
    cout << p.msv << " " << p.ho_ten << " " << p.lop << " " << p.date << " " << fixed << setprecision(2) << p.gpa; 
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string ho_ten;
    string date;
    float diem1, diem2, diem3;
};

void nhap(ThiSinh &p){
    getline(cin, p.ho_ten);
    cin >> p.date;
    cin >> p.diem1 >> p.diem2 >> p.diem3;
}


void in(ThiSinh p){
    cout << p.ho_ten << " " << p.date << " " << fixed << setprecision(1) << p.diem1+p.diem2+p.diem3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
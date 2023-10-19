#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
    string id, name, sex, birth, address, tax, res;
};

struct ngay{
    int day, month, year;
};



void nhap(NhanVien p){
    getline(cin, p.name);
    cin >> p.sex;
    cin >> p.birth;
    cin.ignore();
    getline(cin, p.birth);
    cin >> p.tax;
    cin >> p.res;
}

void sapxep(NhanVien p[], int n){

}

void inds(NhanVien p[], int n){

}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
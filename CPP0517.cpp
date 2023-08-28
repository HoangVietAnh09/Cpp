#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct NhanVien{
    string mnv;
    string hoten, gt, birth, address, tax, regist;
};
void nhap(NhanVien &p){
    while(p.mnv.size() < 6){
        p.mnv += "0";
    }
    cin.ignore();
    getline(cin, p.hoten);
    cin >> p.gt >> p.birth;
    cin.ignore();
    getline(cin, p.address);
    cin >> p.tax >> p.regist;
}
void inds(NhanVien p[], int n){
    for(int i = 0; i < n; i++){
        string s = to_string(i+1);
        while(s.size() < 5) s = "0" + s;
        cout << s << " " << p[i].hoten << " " << p[i].gt << " " << p[i].birth << " " << p[i].address << " " << p[i].tax << " " << p[i].regist;
        cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

#include <bits/stdc++.h>
<<<<<<< HEAD
using namespace std;
struct NhanVien{
    string id, name, sex, birth, address, tax, res;
};

struct ngay{
    int day, month, year;
};



void nhap(NhanVien p){
=======
#define ll long long
using namespace std;
int tmp = 1;
struct NhanVien{
    string id, name, sex, birth, address, res;
    ll tax;
};
void nhap(NhanVien &p){
    cin.ignore();
    string t = to_string(tmp);
    p.id = t;
    while(p.id.length() < 5){
        p.id = "0" + p.id; 
    }
    tmp++;
>>>>>>> ea7261b4ac4e960207bc69db9cebfc0d87d07af2
    getline(cin, p.name);
    cin >> p.sex;
    cin >> p.birth;
    cin.ignore();
<<<<<<< HEAD
    getline(cin, p.birth);
    cin >> p.tax;
    cin >> p.res;
}

void sapxep(NhanVien p[], int n){

}

void inds(NhanVien p[], int n){

=======
    getline(cin, p.address);
    cin >> p.tax;
    cin.ignore();
    cin >> p.res;
}
bool cmp(NhanVien a, NhanVien b){
    string tmp1 = "", tmp2 = "";
    tmp1 += a.birth.substr(6) += a.birth.substr(3, 2) += a.birth.substr(0, 2);
    tmp2 += b.birth.substr(6) += b.birth.substr(3, 2) += b.birth.substr(0, 2);
    return tmp1 < tmp2;
}
void sapxep(NhanVien p[], int n){
    sort(p, p + n, cmp);
}
void inds(NhanVien p[], int n){
    for(int i = 0; i < n; i++){
        if(p[i].birth[1] == '/') p[i].birth = "0" + p[i].birth;
        if(p[i].birth[4] == '/') p[i].birth.insert(3, "0");
        if(p[i].res[1] == '/') p[i].res = "0" + p[i].res;
        if(p[i].res[4] == '/') p[i].res.insert(3, "0");
        cout << p[i].id << " " << p[i].name << " " << p[i].sex << " " << p[i].birth << " " << p[i].address << " " << p[i].tax << " " << p[i].res;
        cout << endl;
    }
>>>>>>> ea7261b4ac4e960207bc69db9cebfc0d87d07af2
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
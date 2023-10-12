#include <bits/stdc++.h>
#define ll long long
using namespace std;
class SinhVien{
    private:
        string id, name, clas, birth;
        float gpa;
    public:
        SinhVien(){
            id = "";
            name = "";
            clas = "";
            birth = "";
            gpa = 0;
        }
        void nhap();
        void xuat();
};
void SinhVien::nhap(){
    getline(cin, name);
    cin >> clas;
    cin >> birth;
    cin >> gpa;
    id = "B20DCCN001";
}

void SinhVien::xuat(){
    if(birth[1] = '/') birth = "0" + birth;
    if(birth[4] = '/') birth.insert(3, "0");
    cout << id << " " << name << " " << clas << " " << birth << " " << fixed << setprecision(2) << this->gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

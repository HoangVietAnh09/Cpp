#include <bits/stdc++.h>
#define ll long long
using namespace std;
class SinhVien{
    private:
        string id, name, clas, birth;
        float gpa;
    public:
        SinhVien(){
            this->id = "";
            this->name = "";
            this->clas = "";
            this->birth = "";
            this->gpa = 0;
        }
        void nhap();
        void xuat();
};
void SinhVien::nhap(){
    getline(cin, this->name);
    cin >> this->clas;
    cin >> this->birth;
    cin >> this->gpa;
}

void SinhVien::xuat(){
    if(this->birth[1] = '/') this->birth = "0" + this->birth;
    if(this->birth[4] = '/') this->birth.insert(3, "0");
    this->id = "B20DCCN001";
    cout << this->id << " " << this->name << " " << this->clas << " " << this->birth << " " << fixed << setprecision(2) << this->gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

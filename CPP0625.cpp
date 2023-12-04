#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
class GiangVien{
    private:
        string mgv, ten, mon;
    public:
        string lastName;
        GiangVien(){
            lastName = mgv = ten = mon = "";
        }
        string getTen(){
            return this->ten;
        }
        string getMa(){
            return this->mgv;
        }
        friend istream& operator >> (istream&, GiangVien&);
        friend ostream&operator << (ostream&, GiangVien);
};
istream& operator >> (istream &in, GiangVien &p){
    p.mgv = "GV";
    p.mgv += string(2-to_string(cnt).length(), '0') + to_string(cnt);
    cnt++;
    getline(in, p.ten);
    int pos = p.ten.find_last_of(" ");
    p.lastName = p.ten.substr(pos);
    getline(in, p.mon);
    stringstream ss(p.mon);
    string token;
    string tmp = "";
    while(ss >> token){
        tmp += toupper(token[0]);
    }
    p.mon = tmp;
    return in;
}
ostream& operator << (ostream &out, GiangVien p){
    cout << p.mgv << " " << p.ten << " " << p.mon << endl; 
    return out;
}
bool cmp(GiangVien a, GiangVien b){
    if(a.lastName < b.lastName) return true;
    if(a.lastName == b.lastName && a.getMa() < b.getMa()) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    GiangVien ds[n];
    cin.ignore();
    for(int i = 0; i < n; i++) cin >> ds[i];
    sort(ds, ds + n, cmp);
    for(int i = 0; i <n; i++) cout << ds[i];

    return 0;
}
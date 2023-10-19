#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string id, name, birth, cls;
    float gpa;
};

void nhap(SinhVien p[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, p[i].name);
        cin >> p[i].cls;
        cin.ignore();
        cin >> p[i].birth;
        cin >> p[i].gpa;
        string s = to_string(i+1);
        while(s.size() < 3){
            s = "0" + s;
        }
        p[i].id = "B20DCCN" + s;
    }
}

void chuanHoa(string s){
    vector<string> vs;
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]); 
    }
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        vs.push_back(tmp);
    }
    for(int i = 0; i < vs.size(); i++){
        vs[i][0] = toupper(vs[i][0]);
    }
    for(int i = 0; i < vs.size(); i++){
        cout << vs[i] << " ";
    }

}
bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien p[], int n){
    sort(p, p + n, cmp);
}

void in(SinhVien p[], int n){
    for(int i = 0; i < n; i++){
        if(p[i].birth[1] == '/') p[i].birth = "0" + p[i].birth;
        if(p[i].birth[4] == '/') p[i].birth.insert(3, "0");
        cout << p[i].id << " ";
        chuanHoa(p[i].name);
        cout << p[i].cls << " " << p[i].birth << " " << fixed << setprecision(2) << p[i].gpa;
        cout << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
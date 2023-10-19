#include <bits/stdc++.h>
using namespace std;

struct goods{
    int id;
    string name, group;
    float giaMua, giaBan, gia;
};

bool cmp(goods a, goods b){
    return a.gia > b.gia;
}

void nhap(goods p[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        p[i].id = i + 1;
        getline(cin, p[i].name);
        getline(cin, p[i].group);
        cin >> p[i].giaMua;
        cin >> p[i].giaBan;
        p[i].gia = p[i].giaBan - p[i].giaMua;
    }
}


void sap_xep(goods p[], int n){
    sort(p, p + n, cmp);
}

void in(goods p[], int n){
    sap_xep(p, n);
    for(int i = 0; i < n; i++){
        cout << p[i].id << " " << p[i].name << " " << p[i].group << " " << fixed << setprecision(2) << p[i].gia << endl;
    }
}


int main(){
    int t;
    cin >> t;
    goods p[t];
    nhap(p, t);
    in(p, t);
    return 0;
}
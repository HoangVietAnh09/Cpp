#include <bits/stdc++.h>
using namespace std;
struct Point{
    double x, y;
};

void input(Point &p){
    cin >> p.x >> p.y;
}

double distance(Point n, Point m){
    double tmp = 0;
    tmp = sqrt(pow(n.x-m.x, 2) + pow(n.y-m.y, 2));
    return tmp;
}


int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
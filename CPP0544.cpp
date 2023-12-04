#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct Point{
    double x, y;
};
void nhap(Point &p){
    cin >> p.x >> p.y;
}
double distance(Point a, Point b){
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}


int main(){
    int t;
    cin >> t;
    while(t--){
        Point a, b, c;
        nhap(a);
        nhap(b);
        nhap(c);
        double ab = distance(a, b);
        double ac = distance(a, c);
        double bc = distance(b, c);
        if(ab + ac > bc && ab + bc > ac && ac + bc > ab){
            double s = sqrt((ab+bc+ac)*(ab+bc-ac)*(-ab+bc+ac)*(ab-bc+ac))*1.0/4;
            double r = ab*bc*ac*1.0/(4*s);
            cout << fixed << setprecision(3) << (double)PI*r*r << endl;
        }else{
            cout << "INVALID\n";
        }
    }
    return 0;
}
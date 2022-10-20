#include<iostream>
using namespace std;
int main(){
    int a, b, c, max, mid, min;
    cin>>a>>b>>c;
    max = (a > b && a > c) ? a : (b > c ? b: c);
    min = (a < b && a < c) ? a : (b < c ? b: c);
    mid = (a + b + c) - max - min;
    cout<<max<<" "<<mid<<" "<<min<<endl;
    system("pause");
}
// pp đệ quy
#include<iostream>
using namespace std;
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
    int n, k;
    cout << "Nhap k: ";
    cin >> k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "To hop bang: " << C(k, n);
    system("pause");
    return 0;
}
// pp lặp
// #include<iostream>
// using namespace std;
// long long gt(int n) {
//     long long s = 1;
//     for (int i = 1; i <= n; i++)
//         s *= i;
//     return s;
// }
// long long C(int k, int n) {
//     return  gt(n) / (gt(k)*gt(n - k));
// }
// int main(){
//     int n, k;
//     cout << "Nhap k: ";
//     cin >> k;
//     cout << "Nhap n: ";
//     cin >> n;
//     cout << "To hop bang: " << C(k, n);
//     system("pause");
//     return 0;
// }
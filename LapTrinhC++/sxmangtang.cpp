#include<iostream>

using namespace std;

int main() {
    int n;
    int arr[1000];
    cout<<"Nhap so mang: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {            //sắp xếp nhỏ dần thì đổi thành dấu "<"
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Mang sau khi sap xep"<<endl;
    for (int i = 0; i < n; i++) {
        
        cout << arr[i] << " ";
    }
    return 0;
}
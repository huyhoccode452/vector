// Yêu cầu:
// - Nhập n số nguyên từ người dùng
// - Lưu vào vector
// - Sắp xếp tăng dần và giảm dần, in ra cả hai
#include <iostream>
#include <vector>  
#include <algorithm> // for sort
using namespace std;    
int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    vector<int> v(n);
    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Sap xep tang dan
    vector<int> v_asc = v;
    sort(v_asc.begin(), v_asc.end());
    cout << "Sap xep tang dan: ";
    for (int num : v_asc) {
        cout << num << " ";
    }
    cout << endl;

    // Sap xep giam dan
    vector<int> v_desc = v;
    sort(v_desc.rbegin(), v_desc.rend());
    cout << "Sap xep giam dan: ";
    for (int num : v_desc) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
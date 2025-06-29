// Yêu cầu:
// - Tạo vector int gồm các phần tử: 1, 3, 5, 7, 9
// - Tìm và xoá giá trị 5 khỏi vector (sử dụng find + erase)
// - In kết quả ra màn hình
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {1,3,5,7,9};
    cout << "Vector ban dau: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    auto it = find(v.begin(), v.end(), 5);
    if (it != v.end()) {
        v.erase(it);
    }
    cout << "Vector sau khi xoa 5: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
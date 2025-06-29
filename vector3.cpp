// Yêu cầu:
// - Tạo vector kiểu string gồm các phần tử: "C++", "Java", "Python"
// - Cập nhật phần tử ở vị trí 1 thành "JavaScript"
// - In toàn bộ vector bằng for-range
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> v = {"C++","Java", "Python"};
    for(const string& lang : v) {
        cout << lang << " ";
    }
    cout << endl;
    v[1] = "JavaScript";
    for(const string& lang : v) {
        cout << lang << " ";
    }
    cout << endl;
    return 0;
}
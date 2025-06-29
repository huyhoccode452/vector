// Yêu cầu:
// - Tạo vector kiểu float gồm 4 phần tử bất kỳ
// - In kích thước vector
// - Xóa toàn bộ phần tử bằng clear()
// - Kiểm tra xem vector có rỗng không
// - In kích thước vector sau khi xóa
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<float> v = {1.2,5.5,3.34,6.9329};
    cout << "Kich thuoc vector: " << v.size() << endl;
    v.clear();
    if (v.empty()) {
        cout << "Vector rong!" << endl;
    }
    else
    {
        cout << "Vector khong rong!" << endl;
    }
    cout << "Kich thước vector sau khi xoa : " << v.size() << endl;
    return 0;
}
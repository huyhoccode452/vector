#include <bits/stdc++.h>
using namespace std;

// Hàm in vector số nguyên
void printVector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

// Bài 1: Khởi tạo và in vector
void exercise1() {
    cout << "Bài 1:\n";
    // TODO: Khởi tạo vector từ 1 đến 10 và in ra
    vector<int> v;
    for (int i = 1; i <= 10; ++i) {
        v.push_back(i);
    }
    printVector(v);
}

// Bài 2: Khởi tạo vector với giá trị mặc định
void exercise2() {
    cout << "Bài 2:\n";
    // TODO: Vector có 5 phần tử, mỗi phần tử là 7
    vector<int> v(5, 7);
    printVector(v);
}

// Bài 3: Duyệt vector
void exercise3() {
    cout << "Bài 3:\n";
    // TODO: Duyệt bằng for, range-for, iterator
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Duyệt bằng for:\n";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "\nDuyệt bằng range-for:\n";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Duyệt bằng iterator:\n";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Bài 4: Thêm phần tử vào cuối
void exercise4() {
    cout << "Bài 4:\n";
    // TODO: push_back các phần tử 10, 20, 30
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    printVector(v);
}

// Bài 5: Chèn phần tử vào vị trí cụ thể
void exercise5() {
    cout << "Bài 5:\n";
    // TODO: Thêm 15 vào vị trí thứ 2
    vector<int> v = {10, 20, 30};
    cout << "Trước khi chèn:\n";
    printVector(v);
    // Chèn 15 vào vị trí thứ 2 (index 1)
    v.insert(v.begin() + 1, 15); // Chèn 15 vào
    printVector(v);
}

// Bài 6: Cập nhật phần tử
void exercise6() {
    cout << "Bài 6:\n";
    // TODO: Đổi phần tử tại index 2 thành 10
    vector<int> v = {10, 20, 30};
    cout << "Trước khi cập nhật:\n";
    printVector(v);
    if (v.size() > 2) {
        v[2] = 10; // Cập nhật phần tử tại index 2
    }
    printVector(v);
}

// Bài 7: Xoá phần tử
void exercise7() {
    cout << "Bài 7:\n";
    // TODO: Xoá cuối và xoá phần tử có giá trị 6
}

// Bài 8: Đảo ngược vector
void exercise8() {
    cout << "Bài 8:\n";
    // TODO: Dùng reverse()
}

// Bài 9: Sắp xếp tăng/giảm
void exercise9() {
    cout << "Bài 9:\n";
    // TODO: sort tăng, sort giảm
}

// Bài 10: Tính tổng và trung bình
void exercise10() {
    cout << "Bài 10:\n";
    // TODO: sum, average
}

// Bài 11: Đếm số lần xuất hiện
void exercise11() {
    cout << "Bài 11:\n";
    // TODO: Đếm số lần xuất hiện của 2
}

// Bài 12: Xoá tất cả phần tử bằng một giá trị
void exercise12() {
    cout << "Bài 12:\n";
    // TODO: Dùng erase-remove idiom
}

// Bài 13: Tìm min/max
void exercise13() {
    cout << "Bài 13:\n";
    // TODO: Dùng min_element, max_element
}

// Bài 14: Loại bỏ phần tử trùng
void exercise14() {
    cout << "Bài 14:\n";
    // TODO: Dùng set hoặc sort + unique
}

// Bài 15: Gộp và sắp xếp
void exercise15() {
    cout << "Bài 15:\n";
    // TODO: Gộp 2 vector rồi sort
}

// Bài 16: Tích vô hướng
void exercise16() {
    cout << "Bài 16:\n";
    // TODO: Tính dot product
}

// Bài 17: Cộng hai ma trận 2D vector
void exercise17() {
    cout << "Bài 17:\n";
    // TODO: Tạo 2 ma trận 3x3 rồi cộng
}

// Bài 18: Xoay ma trận 90 độ
void exercise18() {
    cout << "Bài 18:\n";
    // TODO: Xoay ma trận vuông theo chiều kim đồng hồ
}

int main() {
    // Gọi từng bài để test:
    //exercise1();
    // exercise2();
    // exercise3();
    // exercise4();
    //exercise5();
    exercise6();
    // exercise7();
    // ...
    // Bỏ comment từng dòng để test dần
    return 0;
}

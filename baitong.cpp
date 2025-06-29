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
    cout << "\nDuyệt bằng range-for:\n";

    for (int x : v) {
        cout << x << " ";
    }
    cout << "\nDuyệt bằng iterator:\n";
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
    vector<int> v(4,20);
    cout << "Before change: ";
    printVector(v);
    v.insert(v.begin() + 1, 15); // Chèn 15 vào vị trí thứ 2
    cout << "After change: ";   
    printVector(v);
}

// Bài 6: Cập nhật phần tử
void exercise6() {
    cout << "Bài 6:\n";
    // TODO: Đổi phần tử tại index 2 thành 10
    vector<int> v(4,20);
    cout << "Before update: ";
    printVector(v);
    if(v.size() > 2) {
        v[2] = 10;
    }
}

// Bài 7: Xoá phần tử
void exercise7() {
    cout << "Bài 7:\n";
    // TODO: Xoá cuối và xoá phần tử có giá trị 6
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    cout << "Before deletion: ";    
    printVector(v);
    if (!v.empty()) {
        v.pop_back(); // Xoá phần tử cuối
    }
    cout << "After deleting last element: ";
    printVector(v);
    auto it = find(v.begin(), v.end(), 6);
    if (it != v.end()) {
        v.erase(it); // Xoá phần tử có giá trị 6
    }
}

// Bài 8: Đảo ngược vector
void exercise8() {
    cout << "Bài 8:\n";
    // TODO: Dùng reverse()
    vector<int> v;
    int n;cout << "Nhap so phan tu cua vector: ";cin >> n;
    for(int i = 0;i < n;i++) 
    {
        int temp;cin >> temp;
        v.push_back(temp);
    }
    cout << "Before reverse: ";
    printVector(v);
    reverse(v.begin(), v.end()); // Đảo ngược vector
    cout << "After reverse: ";
    printVector(v); 
}

// Bài 9: Sắp xếp tăng/giảm
void exercise9() {
    cout << "Bài 9:\n";
    // TODO: sort tăng, sort giảm
    vector<int> v = {5, 2, 9, 1, 5, 6};
    cout << "Before sorting: ";
    printVector(v);
    sort(v.begin(), v.end()); // Sắp xếp tăng
    cout << "After sorting (increasing): ";
    printVector(v);
    sort(v.begin(), v.end(), greater<int>()); // Sắp xếp giảm   
    cout << "After sorting (decreasing): ";
    printVector(v);
    cout << endl;  
}

// Bài 10: Tính tổng và trung bình
void exercise10() {
    cout << "Bài 10:\n";
    // TODO: sum, average
    vector<int> v = {1, 2, 3, 4, 5};
    int sum = accumulate(v.begin(), v.end(), 0);
    double average = static_cast<double>(sum) / v.size();
    cout << "Tổng: " << sum << endl;
}

// Bài 11: Đếm số lần xuất hiện
void exercise11() {
    cout << "Bài 11:\n";
    // TODO: Đếm số lần xuất hiện của 2
    vector<int> v = {1, 2, 2, 3, 4, 2, 5};
    int count1 = count(v.begin(), v.end(), 2);
    cout << "Số lần xuất hiện của 2: " << count1 << endl;
    cout << endl;
}

// Bài 12: Xoá tất cả phần tử bằng một giá trị
void exercise12() {
    cout << "Bài 12:\n";
    // TODO: Dùng erase-remove idiom
    vector<int> v = {1, 2, 3, 2, 4, 2, 5};
    cout << "Before removing 2: ";
    printVector(v);
    v.erase(remove(v.begin(), v.end(), 2), v.end()); // Xoá tất cả phần tử có giá trị 2
    cout << "After removing 2: ";
    printVector(v);
    cout << endl;
}

// Bài 13: Tìm min/max
void exercise13() {
    cout << "Bài 13:\n";
    // TODO: Dùng min_element, max_element
    vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6};
    auto min_it = min_element(v.begin(), v.end());
    auto max_it = max_element(v.begin(), v.end());
    if (min_it != v.end() && max_it != v.end()) {
        cout << "Giá trị nhỏ nhất: " << *min_it << endl;
        cout << "Giá trị lớn nhất: " << *max_it << endl;
    } else {
        cout << "Vector rỗng!" << endl;
    }
}

// Bài 14: Loại bỏ phần tử trùng
void exercise14() {
    cout << "Bài 14:\n";
    // TODO: Dùng set hoặc sort + unique
    vector<int> v = {1, 2, 2, 3, 4, 4, 5};
    cout << "Before removing duplicates: ";
    printVector(v);
    sort(v.begin(), v.end()); // Sắp xếp trước khi loại bỏ trùng
    auto last = unique(v.begin(), v.end()); // Loại bỏ phần tử trùng
    v.erase(last, v.end()); // Xoá phần tử trùng
}

// Bài 15: Gộp và sắp xếp
void exercise15() {
    cout << "Bài 15:\n";
    // TODO: Gộp 2 vector rồi sort
    vector<int> v1 = {1, 3, 5, 7};
    vector<int> v2 = {2, 4, 6, 8};
    cout << "Vector 1: ";
    printVector(v1);
    cout << "Vector 2: ";
    printVector(v2);
    vector<int> merged = v1; // Bắt đầu với v1
    merged.insert(merged.end(), v2.begin(), v2.end()); // Gộp v2 vào v1
    cout << "Merged vector before sorting: ";
    printVector(merged);
    sort(merged.begin(), merged.end()); // Sắp xếp vector đã gộp
    cout << "Merged vector after sorting: ";
    printVector(merged);
    cout << endl;
}

// Bài 16: Tích vô hướng
void exercise16() {
    cout << "Bài 16:\n";
    // TODO: Tính dot product
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    if (v1.size() != v2.size()) {
        cout << "Vector sizes do not match!" << endl;
        return;
    }
    int dot_product = 0;
    for (size_t i = 0; i < v1.size(); ++i)

    {
        dot_product += v1[i] * v2[i];
    }
    cout << "Tích vô hướng (dot product): " << dot_product << endl;
    cout << endl;
}

// Bài 17: Cộng hai ma trận 2D vector
void exercise17() {
    cout << "Bài 17:\n";
    // TODO: Tạo 2 ma trận 3x3 rồi cộng
    vector<vector<int>> mat1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> mat2 = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    cout << "Ma trận 1:\n";
    for (const auto& row : mat1) {
        printVector(row);
    }
    cout << "Ma trận 2:\n";
    for (const auto& row : mat2) {
        printVector(row);
    }
    vector<vector<int>> result(3, vector<int>(3, 0)); // Ma trận kết quả
    for (size_t i = 0; i < mat1.size(); ++i) {
        for (size_t j = 0; j < mat1[i].size(); ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j]; // Cộng từng phần tử
        }
    }
    cout << "Kết quả cộng ma trận:\n";
    for (const auto& row : result) {
        printVector(row);
    }
}

// Bài 18: Xoay ma trận 90 độ
void exercise18() {
    cout << "Bài 18:\n";
    // TODO: Xoay ma trận vuông theo chiều kim đồng hồ
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Ma trận ban đầu:\n";
    for (const auto& row : mat) {
        printVector(row);
    }

    size_t n = mat.size();
    // Xoay ma trận 90 độ theo chiều kim đồng hồ
    for (size_t i = 0; i < n / 2; ++i) {
        for (size_t j = i; j < n - i - 1; ++j) {
            int temp = mat[i][j];
            mat[i][j] = mat[n - j - 1][i];
            mat[n - j - 1][i] = mat[n - i - 1][n - j - 1];
            mat[n - i - 1][n - j - 1] = mat[j][n - i - 1];
            mat[j][n - i - 1] = temp;
        }
    }
}

int main() {
    // Gọi từng bài để test:
    exercise1();
    // exercise2();
    // exercise3();
    // exercise4();
    // exercise5();
    // exercise6();
    // exercise7();
    // exercise8();
    // exercise9();
    // exercise10();
    // exercise11();
    // exercise12();
    // exercise13();
    // exercise14();
    // exercise15();
    // exercise16();
    // exercise17();
    // exercise18();
    // // ...
    // Bỏ comment từng dòng để test dần
    return 0;
}

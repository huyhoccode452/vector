#include <bits/stdc++.h>
using namespace std;

// Hàm in map bất kỳ
template<typename K, typename V>
void printMap(const map<K, V>& mp) {
    for (auto& [key, val] : mp) {
        cout << key << " -> " << val << '\n';
    }
}

// Bài 1: Tạo và in map tên → điểm
void exercise1() {
    cout << "Bài 1:\n";
    // TODO: Tạo map<string, int> và in ra
    map<string,int> scores = {
        {"Alice",39},
        {"Bob",45},
        {"Charlie",50},
        {"David",30}
    }; 
    printMap(scores);
}
   


// Bài 2: Thêm phần tử bằng insert() và []
void exercise2() {
    cout << "Bài 2:\n";
    // TODO: So sánh insert và []
    map<string, int> scores = {
        {"Alice", 39},
        {"Bob", 45}
    };
    cout << "Trước khi thêm phần tử:\n";
    printMap(scores);
    scores.insert({"Charlie", 50}); // Thêm bằng insert
    scores["David"] = 30; // Thêm bằng []
    cout << "Sau khi thêm phần tử:\n";
    printMap(scores);
}

// Bài 3: Tìm phần tử bằng count() và find()
void exercise3() {
    cout << "Bài 3:\n";
    // TODO
    auto scores = map<string, int>{
        {"Alice", 39},
        {"Bob", 45},
        {"Charlie", 50}
    };
    cout << "Tìm kiếm điểm của Alice:\n";
    if (scores.count("Alice")) {
        cout << "Alice có điểm: " << scores["Alice"] << '\n';
    } else {
        cout << "Không tìm thấy Alice.\n";
    }
}

// Bài 4: Cập nhật điểm sinh viên
void exercise4() {
    cout << "Bài 4:\n";
    // TODO
}

// Bài 5: Xoá phần tử khỏi map
void exercise5() {
    cout << "Bài 5:\n";
    // TODO
}

// Bài 6: Duyệt map bằng 3 cách
void exercise6() {
    cout << "Bài 6:\n";
    // TODO
}

// Bài 7: In theo điểm giảm dần (gợi ý: vector<pair>)
void exercise7() {
    cout << "Bài 7:\n";
    // TODO
}

// Bài 8: Đếm ký tự trong chuỗi
void exercise8() {
    cout << "Bài 8:\n";
    // TODO
}

// Bài 9: Đếm từ trong đoạn văn
void exercise9() {
    cout << "Bài 9:\n";
    // TODO
}

// Bài 10: Nhóm sinh viên theo điểm số
void exercise10() {
    cout << "Bài 10:\n";
    // TODO
}

// Bài 11: Tìm sinh viên điểm cao nhất/thấp nhất
void exercise11() {
    cout << "Bài 11:\n";
    // TODO
}

// Bài 12: map<pair<string, string>, int> lưu (Họ, Tên) → tuổi
void exercise12() {
    cout << "Bài 12:\n";
    // TODO
}

// Bài 13: Đảo map<string, int> thành multimap<int, string>
void exercise13() {
    cout << "Bài 13:\n";
    // TODO
}

// Bài 14: Từ điển Anh - Việt
void exercise14() {
    cout << "Bài 14:\n";
    // TODO
}

// Bài 15: Gộp 2 map lại thành 1
void exercise15() {
    cout << "Bài 15:\n";
    // TODO
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Gọi bài bạn muốn chạy:
    // Ví dụ:
    exercise1();
    // exercise2();
}

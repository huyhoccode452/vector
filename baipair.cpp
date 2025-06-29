#include <bits/stdc++.h>
using namespace std;

// Hàm in pair
template<typename T1, typename T2>
void printPair(pair<T1, T2> p) {
    cout << "(" << p.first << ", " << p.second << ")\n";
}

void exercise1() {
    cout << "Bài 1:\n";
    // TODO: Tạo pair<int, string> và in ra
    pair<int, string> p = {1, "Hello"};
    printPair(p);
}

void exercise2() {
    cout << "Bài 2:\n";
    // TODO: Dùng make_pair với int và double
    pair<int, double> p = make_pair(10, 3.14);
    cout << "Pair created with make_pair: ";
    printPair(p);
}

void exercise3() {
    cout << "Bài 3:\n";
    // TODO: Tạo và cập nhật giá trị trong pair
    pair<int, string> p = {2, "World"};
    cout << "Before update: ";
    printPair(p);
    p.first = 10;
    p.second = "Love";
    cout << "After update: ";
    printPair(p);
}

void exercise4() {
    cout << "Bài 4:\n";
    // TODO: So sánh 2 pair
    pair<int, string> p1 = {1, "A"};
    pair<int, string> p2 = {2, "B"};
    cout << "Comparing pairs:\n";
    if (p1 < p2) {
        cout << "Pair 1 is less than Pair 2\n";
    } else if (p1 > p2) {
        cout << "Pair 1 is greater than Pair 2\n";
    } else {
        cout << "Pair 1 is equal to Pair 2\n";
    }
}

void exercise5() {
    cout << "Bài 5:\n";
    // TODO: Mảng pair tên và điểm số
}

void exercise6() {
    cout << "Bài 6:\n";
    // TODO: Sắp xếp theo điểm
}

void exercise7() {
    cout << "Bài 7:\n";
    // TODO: Tìm sinh viên điểm cao nhất
}

void exercise8() {
    cout << "Bài 8:\n";
    // TODO: Dùng tie để tách pair
}

void exercise9() {
    cout << "Bài 9:\n";
    // TODO: Vector các pair tọa độ
}

void exercise10() {
    cout << "Bài 10:\n";
    // TODO: Tính khoảng cách tới gốc
}

void exercise11() {
    cout << "Bài 11:\n";
    // TODO: Tìm điểm gần gốc nhất
}

void exercise12() {
    cout << "Bài 12:\n";
    // TODO: In từ có tần suất >= 2
}

int main() {
    // Gọi bài bạn muốn test
    exercise1();
    exercise2();
    exercise3();
    exercise4();
    // ...
    return 0;
}

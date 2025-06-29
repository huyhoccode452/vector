// Yêu cầu:
// - Tạo vector chứa các chữ cái a → e
// - Đảo ngược vector bằng reverse()
// - In kết quả
#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<char> v = {'a','b','c','d','e'};
    cout << "Vector trước khi dao!" << endl;
    for(char a : v) 
        cout << a << " ";
    cout << endl;
    reverse(v.begin(),v.end());
    cout << "Vector sau khi dao!" << endl;
    for(char a : v) 
        cout << a << " ";
    cout << endl;
    return 0;
}
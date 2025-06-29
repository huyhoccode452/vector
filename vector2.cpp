#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<char> v ;
    v.push_back('a');
    v.push_back('b');
    v.push_back('d');
    for(char x : v) {
        cout << x << " ";
    }
    cout << endl;
    v.insert(v.begin() + 2, 'c'); // Insert 'c' at index 1
    for(char x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
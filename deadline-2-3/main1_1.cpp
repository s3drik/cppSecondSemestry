#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
bool palindrome(T p) {
    string str = to_string(p);
    str.erase(remove(str.begin(), str.end(), '.'), str.end()); 
    string rs = str;
    reverse(rs.begin(), rs.end());
    cout<<rs<<endl;
    return (str == rs);
}

bool palindrome(string p) {
    string rs = p;
    reverse(rs.begin(), rs.end());
    return (p == rs);
}

int main() {
    int p1;
    string p2;
    cout << "polindrom tekshirishga son kiriting: ";
    cin >> p1;
    cout << "polindrom tekshirishga so'z kiriting: ";
    cin >> p2;
   
    if (palindrome(p1)) {
        cout << p1 << " polindrom" << endl;
    } else {
        cout << p1 << " polindrom emas" << endl;
    }
    if (palindrome(p2)) {
        cout << p2 << " so'zi polindrom" << endl;
    } else {
        cout << p2 << " so'zi polindrom emas" << endl;
    }
    palindrome(123.321);
    return 0;
}
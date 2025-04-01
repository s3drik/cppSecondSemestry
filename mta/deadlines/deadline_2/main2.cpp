#include <bits/stdc++.h>
#include <stack> 

using namespace std;

int main() {
    stack<int> myyStack;

    myyStack.push(10);
    myyStack.push(20);
    myyStack.push(30);
    
    cout << "Stekdan chiqarilayotgan element: " <<
    myyStack.top() << endl;
    myyStack.pop(); 
    cout << "Stekdan chiqarilayotgan element: " <<
    myyStack.top() << endl; 
    myyStack.pop();
    cout << "Stekdagi qolgan element: " <<
    myyStack.top() <<endl;
    return 0;
}

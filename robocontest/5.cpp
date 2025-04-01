#include <iostream>
using namespace std;

int main() {
    int son1, son2;
    cin >> son1 >> son2;
    int count=0;
    long long divisor = 0;
    for (int i = 1; i <= son1; ++i) {
        divisor = divisor * 10 + i;
        if (divisor % son2 == 0) {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    int length;
    cin >> length;
    string qator1, qator2;
    cin >> qator1 >> qator2;

    int underscoreCount = 0;

    for (int i = 0; i < length; ++i) {
        if (qator1[i] == '_' && qator2[i] == '_') {
            underscoreCount++;
        }
    }

    cout << underscoreCount << endl;

    return 0;
}

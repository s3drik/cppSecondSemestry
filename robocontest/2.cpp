#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    short init;
    while(true){
        cin>>init;
        if(init == 0)
            break;
        vector<short> arr;
        for(short i = 0; i < init; i++){
            short temp;
            cin>>temp;
            arr.push_back(temp);
        }
        auto v = min_element(arr.begin(), arr.end());
        cout<<*v<<endl;
    }
    return 0;
}
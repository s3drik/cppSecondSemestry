#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int count = 0;
    short arr1[5], arr2[5];
    for(char i = 0; i < 5; i++){
        cin>>arr1[i];
    }
    for(char i = 0; i < 5; i++){
        cin>>arr2[i];
    }
    sort(arr1, arr1 + 5);
    sort(arr2, arr2 + 5);
    for(char i = 0; i < 5; i++){
        cout<<arr1[i]<<" ";
        cout<<arr2[i]<<endl;
        if(arr1[i] > arr2[i])
            count++;
    }
    cout<<count<<endl;
    return 0;
}
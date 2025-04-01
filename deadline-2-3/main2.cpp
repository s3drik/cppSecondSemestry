#include <iostream>
#include <array>

using namespace std;

int main(){
    srand(time(0));
    array<int, 10> arr;
    cout << "arrayni tasodifiy sonlar bilan toldirish: "<<endl;
    for(int i = 0; i < arr.size(); ++i) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout<<endl;
    int min = arr.at(0), max = arr.at(0);

    for(auto i: arr){
        if(i < min) {
            min = i;
        }
        if(i > max) {
            max = i;
        }
    }
    cout<<"arrayning eng kichik elementi: "<<min<<endl;
    cout<<"arrayning eng katta elementi: "<<max<<endl;
    cout<<"arrayning o'rta arifmetigi: "<<(min + max) / 2.0<<endl;

    return 0;
}
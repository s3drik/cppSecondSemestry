#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<char> vec{'a', 'b', 'c', 'd'};
    vec.push_back('-');
    vec.push_back('=');

    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    vec.insert(vec.begin() + vec.size()/2, '+');
    cout<<"vectorning o'rtasiga '+' qo'shildi: "<<endl;
    for(auto i: vec){
        cout<<i<<" ";
    }
    return 0;
}
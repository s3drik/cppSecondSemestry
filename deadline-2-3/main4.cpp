#include <iostream>
#include <map>

using namespace std;

int main(){
    multimap<string, int> mm = {
        {"Sardor", 12},
        {"Aziz", 4},
        {"Murod", 12},
        {"Ahmad", 1}
    };
    mm.insert({"Ali", 5});
    mm.insert({"Tolib", 12});
    cout<<"kalitlar va qiymatlar: "<<endl;
    for(auto item : mm){
        cout<<item.first<<" "<<item.second<<endl;
    }
    int qid;
    bool b = false;
    cout<<"qidirilgan qiymatni kiriting: ";cin>>qid;
    for(auto item : mm){
        if(item.second == qid){
            cout<<item.first<<" "<<item.second<<endl;
            b = true;
        }
    }
    if(!b){
        cout<<"bunday qiymatda hech qanday kalit mavjud emas!"<<endl;
    }

    return 0;
}
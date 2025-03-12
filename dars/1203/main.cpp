#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

class Kitob{
    string nomi;
    int narxi;
    public:
    Kitob(){}
    Kitob(string nom, int narx){
        this->nomi = nom;
        this-> narxi = narx;
    }
    string name(){
        return nomi;
    }
    void print(){
        cout<<nomi<<" "<<narxi<<endl;
    }

};
int main() {
    vector<Kitob> kitoblar = {
        Kitob("Ikki eshik orasi", 45000)
    };
    kitoblar.push_back(Kitob("O'tkan kunlar", 50000));
    kitoblar.push_back(Kitob("Mehrobdan chayon", 55000));
    kitoblar.push_back(Kitob("Kecha va kunduz", 60000));
    kitoblar.push_back(Kitob("Shum bola", 45000));
    kitoblar.push_back(Kitob("Sarob", 48000));
    kitoblar.push_back(Kitob("Qorako'z Majnun", 52000));
    kitoblar.push_back(Kitob("Oq kema", 47000));
    kitoblar.push_back(Kitob("Yulduzli tunlar", 53000));
    kitoblar.push_back(Kitob("Alpomish", 49000));
    for(auto item: kitoblar){
        item.print();
    }
    string skitob; bool bol;
    cout<<"Qidirilayotgan kitob nomini kiriting: ";
    cin>>skitob;
    for(int i = 0;i < kitoblar.size(); i++){
        if(kitoblar[i].name() == skitob){
            bol = true;
            kitoblar.erase(kitoblar.begin()+i);
            cout<<"tabriklayman kitobni oldingiz";
        }
    }
    if(!bol){
        cout<<"siz qidirgan kitob mavjud emas!";
    }
    return 0;
}
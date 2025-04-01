#include <iostream>
#include <list>

using namespace std;

class Kitob{
    string nom;
    int narx;
public:
    Kitob(string nomi, int narxi){
        this->nom = nomi;
        this->narx = narxi;
    }
    void show(){
        cout<<nom<<" || "<<narx<<endl;
    }
};

bool narxf()

int main() {
    list<Kitob> yangi = {
        Kitob("Raqamli qal'a", 70000),
        Kitob("o'tgan kunlar ", 45000),
        Kitob("Dunyoning ishlari", 65000),
    };
    yangi.push_back(Kitob("Da vinchi siri", 80000));
    for(auto k: yangi)
        k.show();
    string str;
    
    list<Kitob> kitoblar;
    kitoblar.assign(yangi.begin(), yangi.end());
    for(auto k: kitoblar)
        k.show();
    kitoblar.remove_if(narxf);
    return 0;
}
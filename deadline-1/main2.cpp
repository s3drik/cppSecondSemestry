#include <iostream>

using namespace std;

class Bekat{
    string nom;
    string yul_nomi;
    int narxi;
    bool ochiq;
    bool oxirgi_bekat;
    public:
    Bekat(string nom, string yul_nomi, int narxi=1700, bool ochiq=false, bool oxirgi_bekat=false){
        this->nom = nom;
        this->yul_nomi = yul_nomi;
        this->narxi = narxi;
        this->ochiq = ochiq;
        this->oxirgi_bekat = oxirgi_bekat;
    }

    void chop_etish(){
        cout<<"bekat nomi: "<<nom
        <<" yo'l nomi: "<<yul_nomi
        <<" narxi: "<<narxi
        <<(oxirgi_bekat?" bu oxirgi bekat.":" oxirgi bekat emas")
        <<endl;
    }
    bool ochiqmi(){
        return ochiq;
    }
    void ochish(){
        ochiq = true;
    }
    void yopish(){
        ochiq = false;
    }
    int narx(){
        return narxi;
    }
    int narx(string tur){
        if(tur == "karta") narxi = 1700;
        else if(tur == "naqd") narxi = 3000;
        else if(tur == "uzum") narxi = 990;
        return narxi;
    }
    void yangi_nom(string nom){
        this->nom = nom;
    }
};

int main(){
    Bekat M("Ming o'rik", "Yunusobod yo'li", 1700, false, true);
    M.chop_etish();
    M.yangi_nom("Oybek");
    if(M.ochiqmi()){
        cout<<"metro hozir ochiq"<<endl;
    } else M.ochish();

    cout<<"kirish narxi: "<<M.narx()<<endl;
    cout<<"naqd pul uchun kirish narxi: "<<M.narx("naqd")<<endl;
    M.chop_etish();
    return 0;
}
#include <iostream>

using namespace std;

class Futbolchi{
    string ism, familiya, ampuls;
    public:
    void show(){
        cout << ism << " " << familiya << " " << ampuls << endl;
    }
    void set(string i, string f, string a){
        ism = i;
        familiya = f;
        ampuls = a;
    }
    string get_ap(){
        return ampuls;
    }
};


int main(){
    Futbolchi jamoa[11];
    jamoa[0].set("David", "De Gea", "Darvozabon");
    jamoa[1].set("Sergio", "Ramos", "Himoyachi");
    jamoa[2].set("Gerard", "Pique", "Himoyachi");
    jamoa[3].set("Jordi", "Alba", "Himoyachi");
    jamoa[4].set("Dani", "Carvajal", "Himoyachi");
    jamoa[5].set("Luka", "Modric", "Yarim himoya");
    jamoa[6].set("Sergio", "Busquets", "Yarim himoya");
    jamoa[7].set("Andres", "Iniesta", "Yarim himoya");
    jamoa[8].set("Toni", "Kroos", "Yarim himoya");
    jamoa[9].set("Lionel", "Messi", "Hujumchi");
    jamoa[10].set("Cristiano", "Ronaldo", "Hujumchi");

    cout<<"jamoadagi hujumchilar: "<<endl;
    for(int i = 0; i < 11; i++){
        if(!jamoa[i].get_ap().compare("Hujumchi")){
            jamoa[i].show();
        }
    }
    return 0;
}
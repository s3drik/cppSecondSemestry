#include <iostream>

using namespace std;

int bin_search(int a[], int n, int son){
    int ong = 0;
    while (ong <= n) { 
        int i = (ong + n) / 2;
        if (a[i] == son) { 
            return i;
        }
        else if (a[i] <son) 
            ong = i + 1;
        else 
            n = i - 1; 
    }

    return -1;

}

int main(){
    int massiv[12];
    for(int i = 0; i<12; i++){
        massiv[i] = i*2 + 3;
        cout<<massiv[i]<<" ";
    } 
    cout<<endl;
    int son;
    cout<<"qidirilayotgan sonni kiriting: ";cin>>son;
    int l = bin_search(massiv, 12, son);

    if(l<0)
        cout<<"qidirilgan son mavjud emas!"<<endl;
    else
        cout<<"qidirilgan son indexi: "<<l<<endl;
    return 0;
    
}
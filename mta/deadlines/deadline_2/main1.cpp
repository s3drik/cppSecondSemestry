#include <iostream>

using namespace std;

int faktorial(int n){
    if(n==1 || n==0) return 1; else
        return faktorial(n-1)*n;
}
int main(){
int n;
cout<<"sonni kiriting="; cin>>n;
cout<<faktorial(n)<<endl;
return 0;
}
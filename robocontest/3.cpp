#include <iostream>
#include <cmath>
using namespace std;

     

void co(int num, int &x,int &y){
    int count = 0;
    int corc, cord;
    int root = (int)(sqrt(num));
    if(root*root == num || root * root ){
        x = 0-root/2;
        y = 0-root/2;
        return ;
    }
    
    if (root % 2 == 0) {
        cord = root++;
    } else {
        cord = root += 2;
    }
    int kv = cord*cord;
    corc = cord/2;
    cout<<corc<<endl;
    while(kv-num>corc){
        cord-=corc;
        count++;
    }
    switch(count){
        case 0:
            x = -corc;
            y = corc - (kv-num);
            cout<<kv<<endl;
            return;
        case 1:
            x = corc - (cord-num);
            y = -corc;
            break;
        case 2:
            x = -corc;
            y = -corc + (cord-num);
            break;
        case 3:
            x = -corc + (cord-num);
            y = corc;
            break;
    }

    // cout<<x<<" "<<corc<<endl;
}

int main() {
    int x1, y1;
    co(8, x1,y1);
    cout<<x1<<" "<<y1<<endl;
    // int n, m;
    // cin>>n;
    
    return 0;
}

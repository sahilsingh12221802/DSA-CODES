#include <iostream>
using namespace std;

//Iterative approach

double e(int x, int n){
    double s = 1;
    for(;n>0;n--){
        s=1+x*s/n;
    }
    return s;
}


//recursive approach

double e1(int x, int n){
    static double s;
    if(n==0){
        return s;
    }else{
        s=1+x*s/n;
        return e1(x,n-1);
    }
}
int main(){
    double r,s;
    r = e1(1,10);
    s = e(1,10);
    cout << r << endl;
    cout << s << endl;
}
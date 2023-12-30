#include <iostream>
using namespace std;


//Type 1

int pow(int m,int n){
    if(n == 0){
        return 1;
    }
    else{
        return pow(m,n-1) * m ;
    }
}

//Type 2

int pow1(int m, int n){
    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        return pow(m*m,n/2);
    }else{
        return m*pow(m*m,(n-1)/2);
    }
}

int main(){
    int p;
    p=pow(3,2);
    cout << p;
}
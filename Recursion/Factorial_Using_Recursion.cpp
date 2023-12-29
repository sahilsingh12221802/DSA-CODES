#include <iostream>
using namespace std;

// Recursive approach

int fact(int n){
    if(n == 0){
        return 1;
    }
    else {
        return fact(n-1) * n;
    }
}

//Iterative approach

int fact1(int n){
    int i,s=1;
    for(i = 1; i <= n; i++){
        s = s * i;
    }
    return s;
}


int main(){
    int f;
    f = fact1(5);
    cout << f;
}
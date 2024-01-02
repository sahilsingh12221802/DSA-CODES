#include <iostream>
using namespace std;

//Recursive Approach
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-2) + fib(n-1);
    }
}


//Iterative Approach
int fib1(int n){
    int t0=0, t1=1, s=0, i;
    if(n<=1){
        return n;
    }
    else{
        for(i=2;i<=n;i++){
            s=t0+t1;
            t0=t1;
            t1=s;
        }
    }
    return s;
}
int main(){
    int result;
    result = fib1(7);
    cout << result;
}

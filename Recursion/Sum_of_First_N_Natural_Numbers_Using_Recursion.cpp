#include <iostream>
using namespace std;

// Type 1
int sum(int n){
    if(n == 0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}


// Type 2
int sum1(int n){
    return n * (n+1)/2;
}


//Type 3
int sum2(int n){
    int i,s=0;
    for(i = 1; i <= n; i++){
        s = s + i;
    }
    return s;
}
int main(){
    int s;
    s = sum2(50);
    cout << s;
}


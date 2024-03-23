#include <iostream>
using namespace std;

int main(){
    int i,j;
    //Method 1 in stack only
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,8,7,6}}; 


    //Method 2 in stack as well as heap
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    //Method 3 in heap only
    int **C;
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    cout << "2D array of A is:- " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the values for B in 2D array:- " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cin >> B[i][j];
        }
    }
    cout << "2D array of B is:- " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Enter the values for C in 2D array:- " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cin >> B[i][j];
        }
    }

    cout << "2D array of C is:- " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}

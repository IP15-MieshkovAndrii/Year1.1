#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
using namespace std;

typedef double Matrix[10][10];
Matrix A;
typedef double Array[10];
Array B;
void input(Matrix, int, int);
void output(Matrix, int, int);
void matr_arr(Matrix, Array, int, int);

int main() {
    const int n=5, m=7;
    double z;
    srand(time(NULL));
    cout << "A(n x m):" << endl;
    input(A, n, m);
    output(A, n, m);
    matr_arr(A, B, n, m);
    cout << "B(m):"<< endl;
    for (int j=0; j<m; j++){
        cout<<setw(9)<< B[j];
    }
    cout<<endl<<endl;
    cout << "New B(m):"<< endl;
    for(int k; k<m; k++){
        for (int j=0; j<m-k; j++){
            if(B[j]<B[j+1]){
                z=B[j];
                B[j]=B[j+1];
                B[j+1]=z;
            }
        }
    }
    for (int j=0; j<m; j++){
        cout<<setw(9)<< B[j];
    }
    cout<<endl<<endl;
}

void input(Matrix matr, int n, int m){
    int range_min=-100, range_max=200, rang_double=3;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
        matr[i][j] = range_min + 1 + rand()%(range_max-range_min + 1) - (rand()%((int)pow(10,rang_double)) / pow(10,rang_double));
        }
    }
}

void output(Matrix matr, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<setw(9)<<matr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

void matr_arr(Matrix matr, Array arr, int n, int m){
    double a;
    int s;
    for (int j=0; j<m; j++){
        a=0;
        s=0;
        for(int i=0; i<n; i++){
            if(matr[i][j]>0){
                a+=matr[i][j];
                s++;
            }
        }
        arr[j]=a/double(s);
        }
}

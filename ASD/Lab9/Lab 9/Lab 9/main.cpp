#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

typedef double Matrix[10][10];
Matrix A;
void input(Matrix, int, int);
void output(Matrix, int, int);
void last_pos(Matrix, int, int);

int main() {
    int n, m;
    cout<<"Enter n, m: ";
    cin >> n >> m;
    cout << endl << "A(n x m):" << endl;
    srand(time(NULL));
    input(A, n, m);
    output(A, n, m);
    last_pos(A, n, m);
    output(A, n, m);
    return 0;
}

void input(Matrix matr, int n0, int m0){
    int range_min=-200, range_max=200, rang_double=3;

    for (int i=0; i<n0; i++){
        for (int j=0; j<m0; j++){
        matr[i][j] = range_min + 1 + rand()%(range_max-range_min + 1) - (rand()%((int)pow(10,rang_double)) / pow(10,rang_double));
        }
    }
}

void output(Matrix matr, int n0, int m0){
    for (int i=0; i<n0; i++){
        for (int j=0; j<m0; j++){
            cout<<setw(9)<<matr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

void last_pos(Matrix matr, int n0, int m0){
    double x;
    int d;
    int ix, jx;
    for (int j=0; j<m0; j++){
        for (int i=0; i<n0; i++){
            if(matr[i][j]>0){
                x=matr[i][j];
                ix=i;
                jx=j;
            }
        }
        if(jx==j){
            cout<<"x = "<<x<<endl;
            cout<<"Location: "<<ix+1<<","<<jx+1<<endl<<endl;
            d=ceil(n0/double(2))-1;
            matr[ix][j]=matr[d][j];
            matr[d][j]=x;
        }
        else{
            cout<<"The column "<<j+1<<" does not have a positive number."<<endl<<endl;
        }
    }
}

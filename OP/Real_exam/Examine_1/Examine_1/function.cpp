#include <iostream>
#include <iomanip>
using namespace std;
int** input(int&q){
    cout<< "q = ";
    cin>>q;
    int **matr= new int *[q];
    for(int i=0; i<q; i++){
        matr[i]=new int [q];
        for(int j=0; j<q; j++){
            matr[i][j]=rand()%52-14;
        }
    }
    return matr;
}
void output(int** matr, int q){
    for(int i=0; i<q; i++){
        for(int j=0; j<q; j++){
            cout<<setw(9)<<matr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

//int** poryadok(int** matr, int q){
//    int temp;
//    for(int i=0; i<q; i++){
//        for(int j=0; j<q; j++){
//        if(matr[i][0]>matr[i+1][0]){
//            temp=matr[i][j];
//            matr[i][j]=matr[i+1][j];
//            matr[i+1][j]=temp;
//        }
//        }
//        
//    }
//    return matr;
//}

int* arr_matr(int** matr, int q){
    int *arr = new int [q];
    int min=100;
    for(int j=0; j<q; j++){
        min=100;
        for(int i=0; i<q; i++){
            if(matr[i][j]<min){
                min=matr[i][j];
            }
        }
        arr[j]=min;
    }
    return arr;
}

void output(int* arr, int q){
    for(int i=0; i<q; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl<<endl;
}

int* delete_el(int* arr, int&q){

    int *d = new int [q];
    int j=0;
    for(int i=0; i<q; i++){
        if(arr[i]%2==0){
        d[j]=arr[i];
        j=j+1;
        }
    }
    q=j;
    return d;
}

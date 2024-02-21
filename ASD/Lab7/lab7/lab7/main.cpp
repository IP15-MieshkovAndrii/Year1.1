#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;
void create(char a[], char b[], int n);
void output(char a[], char b[], int n);
void third_arr(char a[], char b[], char c[], int n);
void out_th(char c[], int n);
void average(char c[], int n);

int main() {
    const int n=10;
    char first[n], second[n], third[n];
    create(first, second, n);
    output(first, second, n);
    third_arr(first, second, third, n);
    out_th(third, n);
    average(third, n);
}

void create(char a[], char b[], int n){
    for(int i = 0; i < n; i++){
        a[i]=92 - 3 * i;
        b[i]=71 + 3 * i;
    }
}

void output(char a[], char b[], int n){
    cout << "First array: "<<endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout<< endl<<endl;
    cout << "Second array: "<<endl;
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    cout<< endl<<endl;
}

void third_arr(char a[], char b[], char c[], int n){
    for(int i = 0; i < n; i++){
        c[i]=0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i]==b[j]) c[i]=a[i];
        }
    }
}

void out_th(char c[], int n){
    cout << "Third array: "<<endl;
    for(int i = 0; i < n; i++){
        cout << c[i] << " ";
    }
    cout<< endl<<endl;
}

void average(char c[], int n){
    float av;
    int sum = 0, num=0;
    for(int i = 0; i < n; i++){
        if(c[i]<82){sum+=c[i];
            if(c[i]!=0){
                num++;
            }
        }
    }
    av=sum/float(num);
    cout << "Average: " << av << endl;
}

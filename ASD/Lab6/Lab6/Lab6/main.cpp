#include <iostream>
#include <cmath>
using namespace std;

long long C(int n0, int m0){
    long long c;
    if(((m0==0)&&(n0>0))||((m0==n0)&&(n0>=0))) {
        c = 1;
    }
        
    else if((m0>n0)&&(n0>=0)){
        c = 0;
    }
        
    else{
        c = C(n0-1,m0-1) + C(n0-1,m0);
    }
    return c;
}
int main ()
{
    int n, m;
    long long Cnm;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    
    if(n<0||m<0){
        cout << "n and m must be positive." << endl;
    }
    
    else{
        Cnm=C(n, m);
        cout << "Cnm = " << Cnm << endl;
    }
}

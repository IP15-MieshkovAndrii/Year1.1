#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
 
void mul(vector <int> & a, vector <int> b)
{
    int k = 0;
    int a0 = 0, a1 = 0, b0 = 0, b1 = 0;
    if (a.size() > b.size()) swap(a,b);
    if (a.size() / 2 < 10)
    {
        a0 = 0;
        int st = 1;
        for (int i = 0; i < a.size()/2; i++)
        {
            cout << a[i];
            a0 += a[i]*st;
            st *= 10;
        }
 
        a1 = 0;
        int k = a.size()/2;
        st = 1;
        for (int i = a.size()/2; i < a.size(); i++)
        {
            cout << a[i];
            a1 += a[i] * st;
            st *= 10;
        }
        cout << endl;
    }
    if (b.size() / 2 < 10)
    {
        b0 = 0;
        int st = 1;
        k = a.size()/2;
        for (int i = 0; i < b.size() - (a.size() - k); i++)
        {
            b0 += b[i] * st;
            st *= 10;
        }
 
        b1 = 0;
        st = 1;
        for (int i = b.size() - (a.size() - k); i < b.size(); i++)
        {
            b1 += b[i] * st;
            st *= 10;
        }
    }
    cout << a0 << " " << a1 << endl;
    cout << b0 << " " << b1 << endl;
    cout << k << endl;
    int c0 = a0 * b0;
    int c1 = a1 * b1;
    int c2 = c0 + c1 - (a0 - a1)*(b0 - b1);
    int m = 1;
    for (int i = 0; i < k; i++)
    {
        m *= 10;
    }
    int m1 = m;
    for (int i = 0; i < k; i++)
    {
        m1 *= 10;
    }
    cout << c0 + c2 * m + c1*m1;
}
 
int main()
{
    
    string s;
    getline(cin,s);
    vector <int> a;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        a.push_back(s[i] - '0');
    }
    getline(cin,s);
    vector <int> b;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        b.push_back(s[i] - '0');
    }
    mul(a,b);
    return 0;
}

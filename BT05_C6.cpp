#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (a % b != 0){
        int c = b;
        b = a % b;
        a = c;
    }
    return b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if (gcd(a, b) == 1) cout << "a va b nguyen to cung nhau";
    else cout << "a va b khong nguyen to cung nhau";
    return 0;
}


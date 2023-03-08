#include <bits/stdc++.h>
using namespace std;
int rnd(double n)
{
    if (n - floor(n) < ceil(n) - n) return floor(n);
    else return ceil(n);
}
/*int rnd(double n)
{
    int res;
    if (n >= 0){
        if (n - (int)n< (int)n + 1 - n) res = (int)n;
        else res = (int)n + 1;
    }
    else {
        if ((int)n - n < n - int(n - 1)) res = (int)n;
        else res = (int)n - 1;
    }
}*/
int main()
{
    int n;
    cin >> n;
    cout << rnd(n);
    return 0;
}

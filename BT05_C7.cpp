#include<bits/stdc++.h>
using namespace std;
void triangle(int n)
{
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= 2*n - 1; j++){
            if (j >= n - i && j <= n + i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    triangle(n);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
void decimalToBinary(int n)
{
    int binary[100];
    int k = 0;
    while (n > 0){
        binary[k] = n % 2;
        n /= 2;
        k++;
    }
    for (int i = k - 1; i >= 0; i--){
        cout << binary[i] << endl;
    }
}
void binaryToDecimal(int n)
{
    int decimal = 0;
    int k = 1;
    while (n > 0)
    {
        decimal += (n % 10)*k;
        n /= 10;
        k *= 2;
    }
    cout << decimal << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    decimalToBinary(n);
    binaryToDecimal(m);
    return 0;
}



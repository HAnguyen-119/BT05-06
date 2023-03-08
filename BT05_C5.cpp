#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2;i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return n > 1;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++){
        if (isPrime(i)) cout << i << " ";
    }
    return 0;
}


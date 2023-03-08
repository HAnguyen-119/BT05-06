#include<bits/stdc++.h>
using namespace std;
int random(int n)
{
    srand(time(0));
    return rand()%n;
}
int main()
{
    int n;
    cin >> n;
    cout << random(n);
    return 0;
}



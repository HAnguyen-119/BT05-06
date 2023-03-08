#include <bits/stdc++.h>
using namespace std;

int arr[100], n, k;
bool check[100] {0};
void print(int arr[], int n){
	for (int i = 1; i <= n; i++){
		cout << (char)arr[i];
	}
	cout << endl;
}
void hoanVi(int count){
	for (int i = 97; i <= 96 + n; i++){
        if (check[i] == 0){
            arr[count] = i;
            if (count == k){
                print(arr, k);
            }
            else {
                check[i] = 1;
                hoanVi(count + 1);
                check[i] = 0;
            }
        }
	}
}
int main(){

	cin >> n >> k;
	hoanVi(1);
}


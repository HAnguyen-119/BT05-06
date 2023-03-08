#include <bits/stdc++.h>
using namespace std;

int arr[100], n, k;
void print(int arr[], int n){
	for (int i = 1; i <= n; i++){
		cout << (char)arr[i];
	}
	cout << endl;
}
void toHop(int count){
	for (int i = arr[count - 1] + 1; i <= 96 + n - (k - count); i++){
        arr[count] = i;
		if (count == k){
            print(arr, k);
		}
		else {
			toHop(count + 1);
		}
	}
}
int main(){

	cin >> n >> k;
	arr[0] = 96;
	toHop(1);
}


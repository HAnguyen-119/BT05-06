
#include <bits/stdc++.h>
using namespace std;

int arr[100], n;
bool checkCol[100] {0};
bool checkFirstDiagonal[100] {0};
bool checkSecondDiagonal[100] {0};

void print(int arr[], int n){
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
            if (j == arr[i]) cout << "*";
            else cout << ".";
		}
		cout << endl;
	}
	cout << endl;
}

void queens(int count){
	for (int j = 1; j <= n; j++){
        if (checkCol[j] == 0 && checkFirstDiagonal[count + j] == 0 && checkSecondDiagonal[count - j + n] == 0){
            arr[count] = j;
            if (count == n){
                print(arr, n);
            }
            else {
                checkCol[j] = 1; checkFirstDiagonal[count + j] = 1; checkSecondDiagonal[count - j + n] = 1;
                queens(count + 1);
                checkCol[j] = 0; checkFirstDiagonal[count + j] = 0; checkSecondDiagonal[count - j + n] = 0;
            }
        }
	}
}

int main(){
	cin >> n;
	queens(1);
}

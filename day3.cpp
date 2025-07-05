#include<iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Enter element at (" << i << "," << j << "): ";
            cin >> arr[i][j];
        }
    }
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Transpose the 2D array
    cout << "The transposed 2D array is:" << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    //Symmetric Matrix
    bool isSymmetric = true;
    if(r==c) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (arr[i][j] != arr[j][i]) {
                    isSymmetric = false;
                    break;
                }
            }
        }
    }
    else {
        isSymmetric=false;
    }

    if (isSymmetric) {
        cout << "symmetric." << endl;
    } else {
        cout << "not symmetric." << endl;
    }
    return 0;
}

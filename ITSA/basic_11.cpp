#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin >> row>> col;
    int matrix_reverse[col][row];
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col; j++){
            cin >> matrix_reverse[j][i];

        }
    }
    for (int i = 0; i < col;i++){
        for (int j = 0; j < row;j++){
            cout << matrix_reverse[i][j];
            if(j!=row-1){
                cout << " ";
            }
        }
        cout << endl;
    }
}
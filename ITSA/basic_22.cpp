#include<iostream>
using namespace std;

int main(){
    bool matrix[3][3];
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3;i++){
        if((matrix[i][0] == matrix[i][1]) && (matrix[i][1] == matrix[i][2])){
            cout << "True" << endl;
            return 0;
        }
        if((matrix[0][i] == matrix[1][i]) && (matrix[1][i] == matrix[2][i])){
            cout << "True" << endl;
            return 0;
        }
    }
    if((matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])||(matrix[0][2] == matrix[1][1] &&matrix[1][1] == matrix[2][0])){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}
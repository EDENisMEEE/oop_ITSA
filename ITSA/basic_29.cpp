#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string id;
    cin >> id;
    int two_dig_num,X1,X2,P;
    char A1 = id[0];
    int N1 = id[1]-'0', N2 = id[2]-'0', N3 = id[3]-'0', N4 = id[4]-'0', N5 = id[5]-'0', N6 = id[6]-'0', N7 = id[7]-'0', N8 = id[8]-'0', N9 = id[9]-'0';
    
    if(A1 >= 'A' && A1<='H'){
        //cout << "good" << endl;
        two_dig_num = A1 - 55;
        //cout << two_dig_num;
    }else if(A1 == 'I'){
        two_dig_num = 34;
    }else if(A1 >= 'J' && A1<='N'){
        //cout << "good" << endl;
        two_dig_num = A1 - 56;
        //cout << two_dig_num;
    }else if(A1 == 'O'){
        two_dig_num = 35;
    }else if(A1 >= 'P' && A1<='V' || A1 =='Z'){
        two_dig_num = A1 - 57;
    }else if(A1 == 'X'){
        two_dig_num = 30;
    }else if(A1 == 'Y'){
        two_dig_num = 31;
    }else if(A1 == 'W'){
        two_dig_num = 32;
    }
    
    
    X1 = two_dig_num / 10;
    X2 = two_dig_num % 10;
    P = X1 + (9 * X2) + (8 * N1) + (7 * N2) + (6 * N3) + (5 * N4) + (4 * N5) + (3 * N6) + (2 * N7) + N8 + N9;
    if(P%10 == 0){
        cout << "CORRECT!!!" << endl;
    }else{
        cout << "WRONG!!!" <<endl;
    }
}
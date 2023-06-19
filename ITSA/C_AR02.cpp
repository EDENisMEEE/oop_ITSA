#include<iostream>
using namespace std;

int main(){
    int arr[6];
    for (int i = 0; i < 6;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < 6;i++){
        if(i!= 5){
            cout << arr[6 - i - 1] << " ";
        }
        else{
            cout << arr[6 - i - 1] << endl;
        }
    }
}
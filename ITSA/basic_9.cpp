#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int acc = 0;
    for (int i = 1; i <= num;i++){
        if((i%3) ==0){
           acc+= i;
        }
    }
    cout << acc << endl;
}
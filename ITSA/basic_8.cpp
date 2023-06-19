#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i <= sqrt(num);i++){
        if(num%i == 0){
            return 0;
        }
    }
    if(num == 1){
        return 0;
    }
    return 1;
}

int main(){
    int num;
    cin>>num;
    if(isPrime(num) == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}
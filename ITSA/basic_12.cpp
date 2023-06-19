#include<iostream>
#include<cmath>
using namespace std;
int f(int n){
    if(n == 1|| n==0){
        return n + 1;
    }
    else{
        return (f(n - 1) + f(floor(n / 2)));
    }
}
int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
}
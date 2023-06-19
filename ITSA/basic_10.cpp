#include<iostream>
using namespace std;

int main(){
    int a, b, temp;
    cin >> a >> b;
    if(b>a){//make sure a>=b
        temp = b;
        b = a;
        a = temp;
    }
    while(b!=0){//除數不等於0
        temp = b;
        b = a % b;//餘數變新除數
        a = temp;//除數變新被除數
    }
    cout << a<<endl;

}
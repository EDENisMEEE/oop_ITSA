#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string num;
    cin >> num;
    int count = num.length() / 2;
    //cout << count;
    for (int i = 0; i < count;i++){
        if(num[i]!=num[num.length()-i-1]){
            cout << "NO"<<endl;
            return 0;
        }
        
    }cout << "YES" << endl;
}
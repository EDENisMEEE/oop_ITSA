#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    string a;
    string b;
    cin >> a;
    cin >> b;
    int len_a = a.length();
    int num = 0;
    for (int i = 0; i + len_a <= b.length();i++){
        int match = 1;
        for (int j = 0; j < len_a;j++){
            if(b[i+j] != a[j]){
                match = 0;
            }
        }
        if(match == 1){
            num++;
        }
    }
    cout << num << endl;
}
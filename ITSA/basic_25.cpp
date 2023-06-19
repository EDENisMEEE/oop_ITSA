#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
    getline(cin, str);
    for (int j = 0; j < n;j++){
        int acc = 0;
        string str;
        getline(cin, str);
        int len = str.length();
        for (int i = 0; i < len;i++){
            acc += str[i];
        }
        
        cout << acc << "\n";
       
    }
    return ;
}

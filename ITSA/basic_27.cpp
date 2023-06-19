#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    string ans;
    cin >> ans;
    while(1){
        string guess;
        cin >> guess;
        if(guess == "0000"){
            break;
        }
        int a = 0, b = 0;
        for (int i = 0; i < 4;i++){
            if(ans[i] == guess[i]){
                a++;
            }
        }
        for (int i = 0; i < 4;i++){
            for (int j = 0; j < 4;j++){
                if(ans[i] == guess[j] && i!=j){
                    b++;
                }
            }
        }
        cout << a << "A" << b << "B" << endl;

    }
}
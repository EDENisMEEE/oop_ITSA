#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string str;
    string new_str;
    int hop;
    getline(cin, str);
    cin >> hop;
    for (int i = 0; i < str.length();i++){
        if(isalpha(str[i])){
            if(islower(str[i]) != 0){
                if((int)str[i]+hop<='z'){
                    new_str[i] = (int)str[i] + hop;
                }else{
                    new_str[i] = (int)str[i] + hop-(26*ceil((double)hop/26));
                }
            }else{
                 if((int)str[i] + hop<='Z'){
                    new_str[i] = (int)str[i] + hop;
                }else{
                    new_str[i] = (int)str[i] + hop- (26*ceil((double)hop/26));
                   
                }
            }
        
        }else if(isdigit(str[i])){
            //cout<<"yes";
            if((int)str[i]+hop<='9'){
                    new_str[i] = (int)str[i] + hop;
                }else{
                    new_str[i] = (int)str[i] + hop-(10*ceil((double)hop/10));
            }
        }
        
        else{
           
            new_str[i] = str[i];
        }
         cout<<new_str[i];
    }
    cout << endl;
}
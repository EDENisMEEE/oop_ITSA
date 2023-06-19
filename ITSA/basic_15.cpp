#include<iostream>
#include<cstring>
#include<string>
#include<map>
#include<cctype>
using namespace std;

int main(){
    string str;
    map<char, int> table;
    getline(cin, str);
    int num_word = 1;
    for (int i = 0; i < str.length();i++){
        if(str[i] == ' '){
            num_word++;
        }else if(isalpha(str[i]) !=0){
            str[i] = tolower(str[i]);
            if (table.count(str[i]) == 0)
            {
                table[str[i]] = 1;
           }else{
               table[str[i]]++;
           }
        }
    }
    cout << num_word<<endl;
    for(const auto& it: table){
        cout << it.first << " : " << it.second << endl;
    }
}
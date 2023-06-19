#include<iostream>
#include<map>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    while(!cin.eof()){
       map<string, int> numMap;
       string str;
       string num;
       int totnum = 0;
       int flag = 0;
       getline(cin, str);
       stringstream ss(str);

       while(ss>>num){//use space to split
           
        if (numMap.count(num) == 0){
               numMap[num] = 1;
         }else{
             numMap[num] += 1;
         }
         totnum += 1;
       }
       for(auto it: numMap){
        if(it.second > totnum/2){
             cout << it.first;
             flag = 1;
        }
       }
       if(flag == 0){
        cout << "NO";
       }
       cout << endl;
    }
   
}
#include<iostream>
#include<string>
#include<sstream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<string> strvec;
    string input;
    // getline(cin, input);
    // stringstream ss(input);
    // string substring;
    
     while (cin>>input){//use space to split
        
        string lower_sub;
        for (int i = 0; i < input.length();i++){
            lower_sub += tolower(input[i]);
        }
        //cout << "sub =" << lower_sub << endl;
        auto it = find(strvec.begin(), strvec.end(), lower_sub);
        if(it==strvec.end()){
            strvec.push_back(lower_sub);
           
        }
      
    }
    for (int i = 0; i < strvec.size();i++){
        if(i!=strvec.size()-1){
            cout << strvec[i] <<" ";
        }else{
            cout << strvec[i]<<"\n";
        }
    }
    
   
}

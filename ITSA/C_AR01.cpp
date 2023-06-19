#include<iostream>
#include<vector>
using namespace std;

void reverse(int length,vector <int> arr){
   for(int i=0;i<length;i++){
    
    if(i==length-1){
         cout<<arr[length-i-1];
    }else{cout<<arr[length-i-1];}
   }
   cout << endl;
}

int main(){
    int i;
    vector<int> arr;
    
    while(!cin.eof()){
    cin >> i;
    arr.push_back(i); 
    }
        
    reverse(arr.size(),arr);
    
    
}

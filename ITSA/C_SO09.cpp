#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(char a,char b){
    return (a > b);
}
int main(){
    
    vector<char> vec;
    string temp;
    cin >> temp;
    for (int i = 0; i < temp.length();i++){
        vec.push_back(temp[i]);
    }

    sort(vec.begin(), vec.end(), compare);
    for(auto it:vec){
        cout << it;
    }
    cout << endl;
    fflush(stdout);

    return 0;
}
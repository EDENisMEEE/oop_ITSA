#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int num_order;
    vector<int> start;
    vector<int>back;
    int max_car = 0;
    int now_car = 0;
    cin >> num_order;
    for (int i = 0; i < num_order;i++){
        int st, et;
        cin >> st>> et;
        start.push_back(st);
        back.push_back(et);
    }
    for (int i = 1; i <= 24;i++){
        auto it1 = find(start.begin(), start.end(), i);
        auto it2 = find(back.begin(), back.end(), i);
        if(it1!= start.end()){
            //cout << "--" << i << " ++"<< endl;
            now_car++;}
        if(it2!= back.end()){
            //cout << "--" << i << " --"<< endl;
            now_car--;}
        if(now_car> max_car){
            max_car = now_car;
        }    
    }
    cout << max_car << endl;
}

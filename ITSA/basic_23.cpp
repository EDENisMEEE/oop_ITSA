#include<iostream>
using namespace std;
int main(){
    int tot, num_o, num_a, num_p;
    int c_one = 0, c_five = 0,c_fifty = 0;
    cin >> tot;
    cin.ignore();
    cin >> num_a;
    cin.ignore();
    cin >> num_o;
    cin.ignore();
    cin >> num_p;
    int cost = num_a * 15 + num_o * 20 + num_p * 30;
    int change = tot - cost;
    if(change<0){
        cout << "0" << endl;
        return 0;
    }
    while(change -50 >=0){
        change -= 50;
        c_fifty++;
    }
    while(change -5 >=0){
        change -= 50;
        c_five++;
    }
    while(change -1 >=0){
        change -= 1;
        c_one++;
    }
    cout << c_one << "," << c_five << "," << c_fifty << endl;
}
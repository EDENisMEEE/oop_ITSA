#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    while(!cin.eof()){
        int height, gender;
        double weight;
        cin >> height >> gender;
        if(gender == 1){
            weight = (height - 80) * 0.7;
            cout.precision(1);
            cout<<fixed<< weight << endl;
        }else{
            weight = (height - 70) * 0.6;
            cout.precision(1);
            cout<<fixed<< weight << endl;
        }
    }
}
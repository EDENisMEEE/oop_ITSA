#include<iostream>
using namespace std;

int main(){
    int month;
    cin >> month;
    if (3 <= month && month <= 5)
    {
        cout << "Spring" << endl;
        }
        else if(6<=month&&month<=8){
            cout << "Summer"<<endl;
        }
        else if(9<=month&&month<=11){
            cout << "Autumn"<<endl;
        }
        else if(month==12||month==1||month==2){
            cout << "Winter"<<endl;
        }
        return 0;
    }

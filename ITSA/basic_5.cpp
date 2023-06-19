#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int num;
    cin >> num;
    bitset<8> binary(num);
    cout << binary << endl;
}
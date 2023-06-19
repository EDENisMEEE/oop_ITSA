#include<iostream>
#include<math.h>
using namespace std;
int main(){
   
    int x, y;
    cin >> x >> y;
    double result = sqrt(pow(x, 2) + pow(y, 2));
    if(result<= 100){
        cout << "inside"<<endl;//if you need end of line just  fuvking tell me...
    }else{
        cout << "outside"<<endl;
    }
}
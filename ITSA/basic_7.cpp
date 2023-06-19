#include<iostream>
#include<utility>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        int a, b, c, d;
        char op;
        cin >> op;
        cin >> a >> b >> c >> d;
        if(op == '+'){
            cout << a + c << " " << b + d << endl;
        }else if(op == '-'){
            cout << a - c << " " << b - d << endl;
        }else if(op == '*'){
            cout << a * c -b*d<< " " << b*c +a*d<< endl;
        }
    }
    
}
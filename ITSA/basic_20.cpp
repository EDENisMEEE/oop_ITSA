#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void swap(int &a, int&b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    string num1;
    string num2;
    string rev_1 = {'0'}, rev_2 = {'0'};
    int numA[30] = {0}, numB[30] = {0}, numSum[30] = {0};
    cin >> num1 >> num2;
    rev_1 = num1;
    rev_2 = num2;
    int longer;
    int diff;
    if(num1.length()>=num2.length()){
        longer = 1;
        diff = num1.length() - num2.length();
    }else{
        longer = 2;
        diff = num2.length() - num1.length();
    }
    for (int i = 0; i < num1.length() / 2;i++){//reverse string(units digit at reverse[0])
        swap(rev_1[i], rev_1[num1.length() - i - 1]);
    }
     for (int i = 0; i < num2.length() / 2;i++){//reverse string(units digit at reverse[0])
        swap(rev_2[i], rev_2[num1.length() - i - 1]);
    }
    for (int i = 0; i < num1.length();i++){
        if(longer == 2&& i < diff){
            numA[i] = rev_1[i] - '0'; 
            
        }
        else{numA[i] = rev_1[i] - '0';} // char - '0' is the corresponding num
    }
    for (int i = 0; i < num2.length();i++){
        if(longer == 1&& i < diff){
            numB[i] = rev_2[i] ; 
        }
        else{
        numB[i] = rev_2[i] - '0'; // char - '0' is the corresponding num
    }}
    //cout << fixed<<"numa = " << numA << endl;
    //cout << fixed<<"numb = " << numB << endl;
    int carry = 0;
    for (int i = 0; i < 30;i++){
   
    cout << "a = " << numA[i] << " "
         << "b =" << numB[i] << endl;
    numSum[i] = numA[i] + numB[i] + carry;
    if (numSum[i] >= 10)
    {
        numSum[i] -= 10;
        carry = 1;
        }else
            carry = 0;
    }
    int start = 0;
    for (int i = 30; i >= 0;i--){
        if(numSum[i]!= 0){
            start = i;
            cout << "start = " << start << endl;
            break;
        }
    }
    for (int i = start;i >= 0;i--){
        cout << numSum[i];
    }
}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(double a, double b){
    return (a > b);
}
int main(){
    double num;
    vector<double> vec;
    while(cin>>num){
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end(), compare);
    cout.precision(2);
    cout <<fixed<< "maximum:" << vec[0] << endl;
    cout<<fixed <<"minimum:" << vec[vec.size() - 1] << endl;
}
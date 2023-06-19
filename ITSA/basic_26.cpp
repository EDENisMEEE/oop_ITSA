#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
class number{
    public:
        int num;
        int sum;
};
bool compare(number a, number b){
    if(a.sum != b.sum){
        return (a.sum < b.sum);
    }else{
        return (a.num < b.num);
    }
}

int main(){
    vector<number> vec;
    int num;
    cin >> num;
    for (int i = 0; i < num;i++){
        string temp;
        cin >> temp;
        number tem_num;
        tem_num.sum = 0;
        tem_num.num = stoi(temp);
        for (int i = 0; i < temp.length();i++){
            tem_num.sum += temp[i]-'0';
        }

        vec.push_back(tem_num);
    }
    sort(vec.begin(), vec.end(), compare);
    for (int i = 0; i < vec.size();i++){
        if(i!= vec.size()-1){
            cout << vec[i].num << " ";
        }else{
            cout << vec[i].num << endl;
        }
    }
    
}
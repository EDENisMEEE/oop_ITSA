#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class std_info{
    public:
    unsigned int id;
    unsigned int math;
    unsigned int eng;
};
bool compare(std_info a,std_info b){
    if(a.math != b.math){
        return (a.math > b.math);
    }else{
        return (a.eng > b.eng);
    }
}
int main(){
    unsigned int num_std;
    vector<std_info> list;
    cin >> num_std;
    for (int i = 0; i < num_std;i++){
        std_info info;
        cin >> info.id >> info.math >> info.eng;
        list.push_back(info);
    }
    sort(list.begin(), list.end(), compare);
    for(auto p:list){
        cout << p.id << " " << p.math << " " << p.eng
        << endl;
    }

    return 0;
}
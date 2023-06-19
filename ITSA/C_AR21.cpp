#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class grade{
    public:
        int chinese;
        int eng;
        int math;
};
int main(){
    vector<grade> students;
    int num;
    int chtot = 0, engtot = 0, mathtot = 0;
    double totavg, chavg, engavg, mathavg;
    int tot = 0;
    cin >> num;
    for (int i = 0; i < num;i++){
        grade temp;
        cin >> temp.chinese >> temp.eng >> temp.math;
        students.push_back(temp);
    }
    for (int i = 0; i < num;i++){
        chtot += students[i].chinese;
        engtot += students[i].eng;
        mathtot += students[i].math;
        tot += (students[i].chinese + students[i].eng + students[i].math);
    }
    totavg = round(((double)tot / (num * 3))*10)/10;
    cout << "num = " << (double)tot / (num * 3) << endl;
    chavg = round(((double)chtot / num)*10)/10;
    engavg = round(((double)engtot / num )*10)/10;
    mathavg = round(((double)mathtot /num)*10)/10;
    cout.precision(1);
    cout <<fixed<< totavg << " " <<fixed<< chavg << " " <<fixed<< engavg << " " <<fixed<< mathavg <<endl;
}

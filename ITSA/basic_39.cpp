#include<iostream>
using namespace std;
class grade{
    public:
    int listening;
    int reading;
    int oral;
};

int pass(grade student){//1:p, 0:m -1:f
    int num_fail = 0;
    if(student.listening < 60){
        num_fail++;
    }if(student.reading<60){
        num_fail++;
    }if(student.oral<60){
        num_fail++;
    }
    if (num_fail == 0){
        return 1;
    }
    else if(num_fail == 1 ){
        if(student.listening+student.reading+student.oral>=220)
            return 1;
        else{
            return 0;
        }
    }
    else if(num_fail == 2&&(student.reading>= 80||student.listening>=80||student.oral>=80)){
        return 0;
    }
    return -1;
}
int main(){
    int num;
    cin >> num;
    grade students[num];
    for (int i = 0; i < num;i++){
        cin >> students[i].listening >> students[i].reading >> students[i].oral;
    }
    for (int i = 0; i < num;i++){
        if (pass(students[i]) == 1){
            cout << "P" << endl;
        }else if(pass(students[i]) == 0){
            cout << "M" << endl;
        }else{
            cout << "F" << endl;
        }
    }
}

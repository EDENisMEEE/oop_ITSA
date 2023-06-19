#include <iostream>
#include<iomanip>
using namespace std;

int cl_x[4] = {0, 1, 0, -1};//右下左上[x][y](y is horizontal)
int cl_y[4] = {1, 0, -1, 0};
int count_x[4] = {1, 0, -1, 0};
int count_y[4] = {0, 1, 0, -1};//下右上左

void clockwise(int Matrix[30][30],int Size){
    int x,y;
    int temp_x, temp_y;
    int turn_count = 0;
    x = 0;//會先往右走，所以起始點是(0,-1)
    y = -1;
    for (int i = 0; i < Size * Size;i++){
       
        temp_x = x + cl_x[turn_count];//temp:test go next step or turn direction
        temp_y = y + cl_y[turn_count];
        if(temp_x<0||temp_x>Size-1||temp_y<0||temp_y>Size-1||Matrix[temp_x][temp_y]!=0){
            turn_count = (turn_count + 1) % 4;
        }
        x = x + cl_x[turn_count];
        y = y + cl_y[turn_count];
       
        Matrix[x][y] = i+1;
    }
    for (int i = 0; i < Size;i++){
        for (int j = 0; j < Size;j++){
            if(j==Size-1){
               cout<<setw(3)<<setfill('0')<< Matrix[i][j];
            }else
                cout<<setw(3)<<setfill('0')<< Matrix[i][j]<<",";
        }
        cout << endl;
    }
}
void counterclockwise(int Matrix[30][30],int Size){
    int x,y;
    int temp_x, temp_y;
    int turn_count = 0;
    x = -1;//會先往右走，所以起始點是(-1,0)
    y = 0;
    for (int i = 0; i < Size * Size;i++){
       
        temp_x = x + count_x[turn_count];//temp:test go next step or turn direction
        temp_y = y + count_y[turn_count];
        if(temp_x<0||temp_x>Size-1||temp_y<0||temp_y>Size-1||Matrix[temp_x][temp_y]!=0){
            turn_count = (turn_count + 1) % 4;
        }
        x = x + count_x[turn_count];
        y = y + count_y[turn_count];
       
        Matrix[x][y] = i+1;
    }
    for (int i = 0; i < Size;i++){
        for (int j = 0; j < Size;j++){
           if(j==Size-1){
               cout<<setw(3)<<setfill('0')<< Matrix[i][j];
            }else
                cout<<setw(3)<<setfill('0')<< Matrix[i][j]<<",";
        }
        cout<<endl;
    }
}
int main(){
    int size,type;
    cin >> size >> type;
    int matrix[30][30];
    for (int i = 0; i < size;i++){
        for (int j = 0; j < size;j++){
            matrix[i][j] = 0;
        }
    }
    if(type==1){
        clockwise(matrix, size);
    }else if(type==2){
        counterclockwise(matrix, size);
    }
}

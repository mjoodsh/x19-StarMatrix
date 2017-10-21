#include <iostream>
#include <vector>
 
using namespace std;
 
vector<vector<char> > x;


int input1;
int input2;

int main() {

cout<<"Enter rows and columns of stars:"<<endl;
cin>>input1;
cin>>input2;
if (input1 >0 && input2 >0){

x.resize(input1);


     for (int i = 0; i <x.size(); i ++) {
     	x[i].resize(input2);
        
        for (int j = 0; j <x[i].size(); j ++) {
            x[i][j]='*';
           
            cout << "*";
            
        }
        cout << endl;
    }
    }
   
return 0;
}

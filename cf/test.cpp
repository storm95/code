#include<iostream>
using namespace std;

class Test{
public:
    Test(){cout<<"constructor"<<endl;}
    ~Test(){cout<<"destructor"<<endl;}
};

int main(){
    try{
        Test t1;
        throw 10;
    }catch(int i){
        cout<<i<<endl;
    }
}

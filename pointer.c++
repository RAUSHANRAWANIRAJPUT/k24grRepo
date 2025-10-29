// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student{
    int age,rolln;
    public:
    
    void setdata(int a, int r){
    age=a;
    rolln=r;
    }
    
    void getdata(){
        cout<<"Age: "<<age <<" roll no: "<<rolln;
    }
    
};
int main() {
    student s;
    
    // s.setdata(12,151);
    // s.getdata();
    student *ptr=&s;
    (*ptr).setdata(12,15);
    (*ptr).getdata();
    cout<<endl;
    ptr->setdata(12,151);
    ptr->getdata();
    
}

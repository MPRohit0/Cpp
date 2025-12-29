#include <iostream> 
#include <string>
using namespace std;

class Teacher{
public:
    //properties or attributes
    string name;
    string dept;
    string subject;
    double salary;


    //methods or member functions
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t1;

    //using dot(.) operator
    t1.name = "Rohit";
    t1.subject = "C++";
    t1.dept = "CSE";
    t1.salary = 25000;

    cout << t1.name << endl;
    
    return 0;
}
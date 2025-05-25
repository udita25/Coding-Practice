#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    //by default private
    double salary;
    
    public:
    //non parameterized constructor
    Teacher(){
        // cout<< "Hi I am a Teacher Constructor.(non parameterized)\n";
        dept = "Computer Science";
    }
    //parameterized constructor
    Teacher(string teachername, string subject, string dept, double salary){
        // cout<< "Hi I am parameterized constructor.\n";
        //this points to object's properties
        this->teachername = teachername;
        this->subject = subject;
        this->dept = dept;
        this->salary = salary;
    }

    //copy constructor-custom
    Teacher(Teacher &orgobj){
        this->teachername = orgobj.teachername;
        this->subject = orgobj.subject;
        this->dept = orgobj.dept;
        this->salary = orgobj.salary;
    }

    string teachername;
    string subject;
    string dept;
    
    //methods/menber functions
    void changedeptname(string newdeptname){
        dept = newdeptname;
    }
    
    //setter
    void getsalary(double sal){
        salary = sal;
    }

    //getter
    double getsalary(){
        return salary;
    }

    void getinfo(){
        cout<<"Name: "<<teachername<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Student{
    public:
    string studname;
    string studrollno;
    double cgpa;

    Student(string studname, string studrollno, double cgpa){
        this->studname = studname;
        this->studrollno = studrollno;
        this->cgpa = cgpa;
    }

    void getinfo(){
        cout<<"Name: "<<studname<<endl;
        cout<<"Roll number: "<<studrollno<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }

};

int main(){
    //manually initiating object 
    Teacher t1;
    t1.teachername = "John";
    t1.subject = "Maths";
    t1.dept = "Science";
    t1.getsalary(50000);

    // cout<<"Salary: "<<t1.getsalary()<<endl;
    // cout<<"Department: "<<t1.dept<<endl;

    //initialize object from parameterized constructor
    Teacher t2("Udita", "Python", "Computer Science", 250000);
    // t2.getinfo();

   // Teacher t3(t1);//invoked default copy instructor without creating copy constructor
    //Teacher t4(t2);//invoked custom copy constructor
    // t3.getinfo();
    // t4.getinfo();

    Student s1("Neeraj","20BCS3342",9.2);

    Student s2(s1);
    s2.getinfo(); 



}

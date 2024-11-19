#include<iostream>
#include<string>
using namespace std;
class Employee{ 
private:
string name;
int employeeID;
double salary;
public:
Employee(string empName,int empID){
    name=empName;
    employeeID=empID;
    salary=0.0;
}
void setSalry(double performanceRating){
    if(performanceRating>=4.5){
        salary=50000;
    } else if(performanceRating>=3.0){
        salary=30000;
    } else{
        salary=20000;
    }
    }
    string getName(){
        return name;
    }
    void displayEmployee(){
        cout<<"Employee Name:"<<name<<endl;
        cout<<"Employee Id::"<<employeeID<<endl;
        cout<<"Salary:$" <<salary<<endl;
    }
    };
    int main()
    {
        Employee emp1("Saloni Aryal", 101);
        double performanceRating;
        cout<<"Enter the performance(1.0to 5.0) for"<<emp1.getName()<<":";
        cin>> performanceRating;
        emp1.setSalry(performanceRating);
        emp1.displayEmployee();

        return 0;
    }


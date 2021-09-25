#include <iostream>
using namespace std;
struct Student 
{
    int roll;
    float marks;
};
int main() {
	Student* student1 = new Student;
	cin>>student1->roll;
	cin>>student1->marks;
	cout<<"The Roll no. is: "<<student1->roll<<"\nThe Student mark is: "<<student1->marks;
}
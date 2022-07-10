// #include<iostream>
// #include<string>
// using namespace std;



// int main()
// {
//     float *ptr;
//     float *ptr1;
//     float f=3.4;
//     float f1=2.3;
//     ptr=&f;
//     ptr1=&f1;
//     cout<<ptr1<<endl;
//     ptr=ptr1;
//     cout<<ptr<<endl;
// }

#include <iostream>
using namespace std;
class Student {
      char* name;
      int rollNumber;
public:
      Student() {
           name = "AlanKay";;
           rollNumber = 1025;
      }
       
       void setNumber(int no) {
            rollNumber = no;
       }
       int getRollNumber() {
           return rollNumber;
      }
};
 
class AnualTest: Student {
          int mark1, mark2;
public:
         AnualTest(int m1, int m2)
                  :mark1(m1), mark2(m2) {
       }
       int getRollNumber() {
           return Student::getRollNumber();
       }
};
int main()
{
     AnualTest test1(92, 85);
     cout<< test1.getRollNumber();
}
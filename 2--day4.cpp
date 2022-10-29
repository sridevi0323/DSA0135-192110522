#include<iostream>
using namespace std;
class student
   {
      protected:
         int roll_number;
      public:
         void get_number(int);
         void put_number(void);
   };

void student :: get_number(int a)
   {
      roll_number = a;
   }

void student :: put_number()
   {
      cout << "Roll Number: " << roll_number << endl;
   }

class test : public student     
   {
      protected:
         float sub1;
         float sub2;
      public:
         void get_marks(float, float);
         void put_marks(void);
   };

void test :: get_marks(float x, float y)
   {
      sub1 = x;
      sub2 = y;
   }

void test :: put_marks()
   {
      cout << "Marks in Sub1 = " << sub1 << endl;
      cout << "Marks in Sub2 = " << sub2 << endl;
   }

class result : public test  
   {
         float total;     
      public:
         void display();
   };
   private:{
   }
    float total;      
   protected:
   	{
     int roll_number;   
     float sub1;        
     float sub; 
    };
    public:{
	}
     void get_number(int);         
     void put_number(void);        
     void get_marks(float, float); 
     void put_marks(void);         
     void display(void);
void result :: display(void)
   {
      total = sub1 + sub2 + sub3 + sub4;
      put_number();
      put_marks();
      cout << "Total = " << total << endl;
   }           
void main()
   {
      result student;   
      
      student1.get_number(786);
      student1.get_marks(71.5, 99.5, 86.3, 89.6);
      student1.display();  
   }


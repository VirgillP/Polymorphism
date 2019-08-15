// Example program
#include <iostream>
#include <string>


class Super_Class                                  //  Super class.  
{  
    protected:                          
  std::string Name;
  
 public: 
 Super_Class(std::string n){
     Name = n;
     }
virtual void display()  
 {   
 std::cout << Name << " Class A ";  
 }  
 }; 
 
class Class_B : public Super_Class                       //  Inherit class .  
{  
   
public:  
Class_B(std::string n) : Super_Class(n){}
void display()  
 {         std::cout<< Name << " chosen by Class B";  
 }  
};

 class Class_C : public Super_Class                       //  Inherit class.  
{  
  
public:  
Class_C(std::string n) : Super_Class(n){}
void display()  
 {         std::cout << Name << "chosen by Class C";  
 }
};

int main()
{
    
  Super_Class *obj, *obj2;
   
    Class_B *class_b;
    Class_C *class_c;
    
   obj =  class_b = new Class_B("This is B ");
   obj2 = class_c = new Class_C("This is C ");
    
    obj ->display();
    std::cout << std::endl;
    static_cast<Super_Class *>(class_c) ->display();
    std::cout << std::endl;
    obj2 ->display();
    std::cout << std::endl;
    static_cast<Super_Class *>(class_b) ->display();
 
    
 return 0;
}


    
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
     display();
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
 {         std::cout<< Name << " chosed by Class B";  
    }  
};

 class Class_C : public Super_Class                       //  Inherit class.  
{  
  
public:  
Class_C(std::string n) : Super_Class(n){}
void display()  
 {         std::cout << Name << " chosed by Class C";  
    }
};

int main()
{
    
    Class_B *class_b;
    Class_C *class_c;

    class_b = new Class_B("This is B ");
	std::cout << std::endl;
    class_c = new Class_C("This is C ");
  std::cout << std::endl;
    
    
 return 0;
}


// C++ program to explain  
// multiple inheritance 
#include <iostream> 
using namespace std; 
  
// first base class 
class Vehicle { 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
    
    ~Vehicle()
    {
      cout<< "Destructor of Vehicle" << endl;
    }

}; 
  
// second base class 
class FourWheeler { 
  public: 
    FourWheeler() 
    { 
      cout << "This is a 4 wheeler Vehicle" << endl; 
    } 
    ~FourWheeler()
    {
      cout<< "Destructor of FourWheeler" << endl;
    }


}; 
  
// sub class derived from two base classes 
class Car: public Vehicle, public FourWheeler { 
public:
    Car(){
      cout<< "This is a car" << endl;
    }
    
    ~Car()
    {
      cout<< "Destructor of Car" << endl;
    }



}; 
  
// main function 
int main() 
{    
    // creating object of sub class will 
    // invoke the constructor of base classes 
    Car obj; 
    return 0; 
} 

#include <iostream> 
using namespace std; 
#include <memory> 
  
class Rectangle { 
    int length; 
    int breadth; 
  
public: 
    Rectangle(int l, int b) 
    { 
        length = l; 
        breadth = b; 
    } 
  
    int area() 
    { 
        return length * breadth; 
    } 
}; 
  
int main() 
{ 
    // ---- UNIQUE POINTER ----
    unique_ptr<Rectangle> P1(new Rectangle(10, 5)); 
    cout << P1->area() << endl; // This'll print 50 
  
    // unique_ptr<Rectangle> P2(P1); 
  
    unique_ptr<Rectangle> P2; 
    P2 = move(P1); 
  
    // This'll print 50 
    cout << P2->area() << endl; 
   
    // below line wil give runtime error
    //cout<<P1->area()<<endl; 

    // ---- SHARED POINTER ----    
    shared_ptr<Rectangle> P3(new Rectangle(10,6));
    shared_ptr<Rectangle> P4;
    P4 = P3;

    // This'll print 60
    cout<<P3->area()<<endl;
    
    // Also prints 60
    cout<<P4->area()<<endl;

    // prints 2 (as there are two references to the object)
    // NOTICE THE USE OF "." and not "->"
    cout<<P3.use_count()<<endl;

    return 0; 
} 

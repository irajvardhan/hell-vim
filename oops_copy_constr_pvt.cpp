#include<iostream> 
using namespace std; 
  
class Point 
{ 
private: 
    int x, y; 
    int *q;

    // Copy constructor 
    Point(const Point &p2) {
	    x = p2.x; 
	    y = p2.y; 
	    q = new int;// deep copy =>future changes to p2 will not affect pointer of this object.
	    *q = *(p2.q);
    }

public: 
    Point(int x1, int y1, int z1) 
    { 
	    x = x1; 
	    y = y1; 
    	    q = new int;
	    *q = z1;
    } 
  
    void print(){
	    cout<<"x: "<<x<<" "<<"y: "<<y<<" "<<"*q= "<<*q<<endl;
    }  
}; 


int main() 
{ 
	Point p1(5, 10, 15); // Normal constructor is called here 
	Point p2 = p1; // Copy constructor is called here 
	p2.print(); 
	
	return 0; 
}

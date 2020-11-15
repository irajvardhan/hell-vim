#include<iostream> 
using namespace std; 
  
class Point 
{ 
private: 
    int x, y; 
    int *q;
	
public: 
    Point(int x1, int y1, int z1) 
    { 
	    x = x1; 
	    y = y1; 
    	    q = new int;
	    *q = z1;
    } 
  
    // Copy constructor 
    Point(const Point &p2) {
	    x = p2.x; 
	    y = p2.y; 
	    q = new int;// deep copy =>future changes to p2 will not affect pointer of this object.
	    *q = *(p2.q);
    } 

    void increment(){
	    x++;
	    y++;
	    (*q)++;
	
    }

    void print(){
	    cout<<"x: "<<x<<" "<<"y: "<<y<<" "<<"*q= "<<*q<<endl;
    }  
}; 

class Line{

	int m, c;
	int* p;
public:

	Line(int m1, int c1, int x1)
	{ 
		m = m1; 
		c = c1;
		p = new int;
		*p = x1;
	}	
	void increment(){
	       	m++; 
		c++;
		(*p)++;
	}
	void print()
	{ 
		cout<<m<<" "<<c<<" "<<*p<<endl;
	}

};
  
int main() 
{ 
	Point p1(5, 10, 15); // Normal constructor is called here 
	Point p2 = p1; // Copy constructor is called here 
	  
	p1.increment();
	// Let us access values assigned by constructors 
	cout<<"p1: "; p1.print();
	cout<<"p2: "; p2.print();
	
	/////////////
	
	Line l1(5,10,15);
	Line l2 = l1; //shallow copy as no user-defined copy constructor
	l1.increment(); // pointer of l2 will point to the same location as l1.

	cout<<"l1: "; l1.print();
	cout<<"l2: "; l2.print();

	return 0; 
}

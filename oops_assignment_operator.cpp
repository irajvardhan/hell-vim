#include<iostream>  
#include<stdio.h>  
  
using namespace std;  
  
class Test  
{  
    int x;   
public:  
    Test(int _x) {x=_x;}  
    Test(const Test &t)  
    {  
	x = t.x;
        cout<<"Copy constructor called "<<endl;  
    }  
      
    Test& operator = (const Test &t) 
    { 
	x = t.x;
        cout<<"Assignment operator called "<<endl; 
        return *this; 
    }  

    void increment(){x++;}
    void print(){cout<<x<<endl;}
};  
  
// Driver code 
int main()  
{  
    Test t1(10), t2(20);  
    t2 = t1;  //t2.x becomes 10 as well
    Test t3 = t1; //t3.x becomes 10 as well  
    
    t1.increment(); // member x in neither of t2 or t3 will change. Value of pointer members would have changed.
    cout<<"t1: "; t1.print(); cout<<endl;
    cout<<"t2 (using assignment): "; t2.print(); cout<<endl; 
    cout<<"t3 (using copy): "; t3.print(); cout<<endl;

    return 0;  
}  

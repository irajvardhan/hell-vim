#include <iostream>

using namespace std;

struct foo
{
    int x;
	
    // (a):
    void bar() { 
	    cout << "gman was here" << endl; 
    }

    // (b):
    void baz() { 
	    x = 5; 
    }

    
};

int main()
{
    foo* f = 0;

    f->bar(); // (a)
    f->baz(); // (b)
} 

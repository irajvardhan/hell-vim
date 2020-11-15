#include<iostream>
using namespace std;
 
class X 
{
public:
    int x;
};
 
int main()
{
    X a;

    // prints garbage value
    cout << a.x << endl;
    return 0;
}

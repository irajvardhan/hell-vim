#include <iostream>
using namespace std;

class Empty {};

int main()
{
    Empty e;
    cout << "size: " << sizeof(e) << endl;
    return 0;
}

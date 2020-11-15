#include <iostream>
using namespace std;

class Empty {
	int arr[0];
	char s[0];

public:
	void show(){
		cout<<"show called"<<endl;
	}

};


int main()
{
    Empty e;

    // prints 0
    cout << "size: " << sizeof(e) << endl;

    // if we remove all data members, it prints 1

    return 0;
}

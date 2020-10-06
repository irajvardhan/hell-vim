#include<iostream>
using namespace std;

int increment( ) {
    static int i = 0;
    return ++i;
}

int main(void) {
    printf("%d %d", increment( ), increment( ) );
}

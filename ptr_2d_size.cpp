#include<iostream>

using namespace std;

int main(){

	int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};	
	int (*ap)[3][3];

	ap = &arr;
	

	// ptr artithmatic for *ap
	// the second one will be 12bytes higher	
	cout<<"*ap: "<<*ap<<endl;
	cout<<"*ap+1: "<<*ap+1<<endl;

	// prints 8
	cout<<"sizeof(ap): "<<sizeof(ap)<<endl;
	
	// prints 36
	cout<<"sizeof(*ap): "<<sizeof(*ap)<<endl;
	
	// prints 12
	cout<<"sizeof(**ap): "<<sizeof(**ap)<<endl;

	// lets print arr[1][2] in different ways
	cout<<"arr[1][2]: "<<arr[1][2]<<endl;
	cout<<"*(*(arr+1)+2): "<<*(*(arr+1)+2)<<endl;
	cout<<"*(*(*ap+1)+2): "<<*(*(*ap+1)+2)<<endl;

	return 0;
}

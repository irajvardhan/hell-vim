#include<iostream>

using namespace std;

class Arr2d{

	int r;
	int c;
	int** arr;

public:
	Arr2d(int _r, int _c){
		r = _r;
		c = _c;

		arr = new int*[r];

		for(int i=0;i<r;i++)
			arr[i] = new int[c];
		
		int count=0;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				arr[i][j] = ++count;
	}

	void display(){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}

};


int main(){
	Arr2d arr2d(3,4);
	arr2d.display();
	return 0;


}

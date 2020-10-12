#include <iostream>
#include <vector>

using namespace std;

class CircularQueue{
	public:
		int capacity;
		
		// head points to element which will be popped. If no element exists it is -1.
		int head;

		// number of elements in CircularQueue
		int count;

		// circular queue
		// Note: We cant use array because the capacity is unknown at this point.
		vector<int> cq;
			
		CircularQueue(int _capacity){
			capacity = _capacity;
			head = 0;
			count = 0;
			
			// Note: We need to initialize the vector for the given capacity
			cq.assign(capacity,-1);
		}

		bool dequeue();

		bool enqueue(int x);
		
		// get element at front of circular queue
		int front();
		
		// get element at rear of circular queue	
		int rear();

		bool isEmpty();

		bool isFull();

};

bool CircularQueue::isEmpty(){
	if (count==0)
		return true;
	else
		return false;
}

bool CircularQueue::isFull(){
	if (count == capacity)
		return true;
	else
		return false;
}

int CircularQueue::front(){
	if (isEmpty())
		return -1;
	return cq[head];	
}

int CircularQueue::rear(){
	if (isEmpty())
		return -1;
	
	int tail;
	tail = (head + count - 1)%capacity;
	return cq[tail];
}

bool CircularQueue::enqueue(int x){
	if (isFull())
		return false;
	int index = (head + count)%capacity;
	cq[index] = x;
	count++;
	return true;
}

bool CircularQueue::dequeue(){
	if (isEmpty())
		return false;

	head = (head+1)%capacity;
	count--;
	return true;
}


int main(){

	CircularQueue qobj(5);
	qobj.enqueue(1);
	qobj.enqueue(2);
	qobj.enqueue(3);
	qobj.enqueue(4);
	qobj.enqueue(5);

	// 1 5
	cout<<qobj.front()<<endl;
	cout<<qobj.rear()<<endl;
	
	// true false
	cout<<qobj.isFull()<<endl;
	cout<<qobj.isEmpty()<<endl;
	
	qobj.dequeue();
	qobj.dequeue();

	// 3 5
	cout<<qobj.front()<<endl;
	cout<<qobj.rear()<<endl;
	
	qobj.enqueue(6);
	qobj.enqueue(7);

	// 3 7
	cout<<qobj.front()<<endl;
	cout<<qobj.rear()<<endl;
	
	qobj.dequeue();
	qobj.dequeue();
	qobj.dequeue();
	qobj.dequeue();
	
	// 7
	cout<<qobj.front()<<endl;

	return 0;

}





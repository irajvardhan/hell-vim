#include<iostream>

using namespace std;

typedef struct Node{
	struct Node* next;
	struct Node* prev;
	int key;
}Node;

Node* newNode(int key){
	Node* node = new Node();
	node->key = key;
	node->next = NULL;
	node->prev = NULL;
	return node;
}


class HashSet{
	// should be a prime no. to minimize potential collisions
	int NUM_BUCKETS;
	Node** buckets;
	
	void delete_node(Node* cur);


public:
	HashSet(int _num_buckets){
		NUM_BUCKETS = _num_buckets;
		// e.g., NUM_BUCKETS is say 10. Below will provide us memory to store 10 Node pointers.
		buckets = new Node*[NUM_BUCKETS];
		for(int i=0;i<NUM_BUCKETS;i++)
			buckets[i] = NULL;	
	}
	
	int hash(int key);
	bool contains(int key);
	void put(int key);
	void remove(int key);	

};

void HashSet::delete_node(Node* cur){
	if(cur->prev)
		cur->prev->next = cur->next;
	if(cur->next)
		cur->next->prev = cur->prev;
	delete cur;
}

int HashSet::hash(int key){
	return key%NUM_BUCKETS;
}

bool HashSet::contains(int key){
	int index = hash(key);
	Node* cur = buckets[index];
	while(cur!=NULL){
		if(cur->key == key)
			return true;
		else
			cur = cur->next;
	}
	return false;
}

void HashSet::put(int key){
	int index = hash(key);
	Node* cur = buckets[index];
	while(cur!=NULL){
		// key already present
		if(cur->key == key){
			return;
		} else
			cur = cur->next;
	}
 	
	// key not present => add a new Node
	Node* head = buckets[index];	
	Node* node = newNode(key);
	
	if(head == NULL){
		buckets[index] = node;
	}else{
		node->next = head;
		head->prev = node;
		buckets[index] = node;
	}	
}

void HashSet::remove(int key){
	int index = hash(key);
	Node* cur = buckets[index];
	while(cur!=NULL){
		if(cur->key == key){
			if(buckets[index] == cur)
				buckets[index] = cur->next;
			delete_node(cur);
			return;
		}else
			cur = cur->next;
	}
}


int main(){
		
	HashSet hset(7);
	hset.put(1);
	hset.put(1);
	hset.put(11);
	hset.put(1);
	hset.put(20);
	hset.put(45);
	hset.put(5);
	
	cout<<hset.contains(1)<<endl;
	cout<<hset.contains(11)<<endl;
	hset.remove(11);
	cout<<hset.contains(11)<<endl;

	return 0;
}

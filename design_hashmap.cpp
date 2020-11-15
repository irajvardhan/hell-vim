#include<iostream>

using namespace std;

typedef struct Node{
	struct Node* next;
	struct Node* prev;
	int key;
	int val;
}Node;

Node* newNode(int key, int val){
	Node* node = new Node();
	node->key = key;
	node->val = val;
	node->next = NULL;
	node->prev = NULL;
	return node;
}


class HashMap{
	// should be a prime no. to minimize potential collisions
	int NUM_BUCKETS;
	Node** buckets;
	
	void delete_node(Node* cur);


public:
	HashMap(int _num_buckets){
		NUM_BUCKETS = _num_buckets;
		// e.g., NUM_BUCKETS is say 10. Below will provide us memory to store 10 Node pointers.
		buckets = new Node*[NUM_BUCKETS];
		for(int i=0;i<NUM_BUCKETS;i++)
			buckets[i] = NULL;	
	}
	
	int hash(int key);
	int get(int key);
	void put(int key, int val);
	void remove(int key);	

};

void HashMap::delete_node(Node* cur){
	if(cur->prev)
		cur->prev->next = cur->next;
	if(cur->next)
		cur->next->prev = cur->prev;
	delete cur;
}

int HashMap::hash(int key){
	return key%NUM_BUCKETS;
}

int HashMap::get(int key){
	int index = hash(key);
	Node* cur = buckets[index];
	while(cur!=NULL){
		if(cur->key == key)
			return cur->val;
		else
			cur = cur->next;
	}
	return -1;
}

void HashMap::put(int key, int val){
	int index = hash(key);
	Node* cur = buckets[index];
	while(cur!=NULL){
		// key already present => update its val
		if(cur->key == key){
			cur->val = val;
			return;
		} else
			cur = cur->next;
	}
 	
	// key not present => add a new Node
	Node* head = buckets[index];	
	Node* node = newNode(key, val);
	
	if(head == NULL){
		buckets[index] = node;
	}else{
		node->next = head;
		head->prev = node;
		buckets[index] = node;
	}	
}

void HashMap::remove(int key){
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
		
	HashMap hmap(7);
	hmap.put(1,10);
	hmap.put(1,15);
	hmap.put(11,50);
	hmap.put(1,18);
	hmap.put(20,70);
	hmap.put(45,90);
	hmap.put(5,67);
	
	cout<<hmap.get(1)<<endl;
	cout<<hmap.get(11)<<endl;
	hmap.remove(11);
	cout<<hmap.get(1)<<endl;
	cout<<hmap.get(11)<<endl;
	cout<<hmap.get(5)<<endl;

	return 0;
}

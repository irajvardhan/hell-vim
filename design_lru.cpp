#include<iostream>
#include<map>
using namespace std;

typedef struct Node{
	struct Node*next;
	struct Node*prev;
	int key;
	int value;
}Node;

Node* newNode(int _key, int _value){
	Node* node = new Node();
  	node->next = NULL;
	node->prev = NULL;
	node->key = _key;
	node->value = _value;
	return node;
}


class LRUCache{
	
public:
	int capacity;
	int size;
	map<int, Node*> mymap;
	Node* head;
	Node* tail;

	LRUCache(int _capacity){
		capacity = _capacity;
		head = newNode(-1,-1);
		tail = newNode(-1,-1);

		head->next = tail;
		tail->prev = head;
	}

	int get(int key);
	void put(int key, int value);
	
private:
	void detach(Node*);
	void moveToFront(Node*);

};

void LRUCache::detach(Node* node){
	if(node == NULL)
		return;

	node->next->prev = node->prev;
	node->prev->next = node->next;

	node->next = NULL;
	node->prev = NULL;
	
}

void LRUCache::moveToFront(Node* node){
	if(node == NULL)
		return;

	node->next = head->next;
	node->prev = head;
	node->next->prev = node;
	node->prev->next = node;
	
}

int LRUCache::get(int key){
	cout<<"get("<<key<<")"<<endl;
	
	// Check if key isn't present 
	map<int, Node*>::iterator it;
	it = mymap.find(key);
	if (it == mymap.end()){
		// key not found
		return -1;
	}
	
	// Get pointer to node with this key
	Node* node = mymap[key];
	
	// detach it from the DLL
	detach(node);

	// move the node with this key to front
	moveToFront(node); 

	return node->value;

}

void LRUCache::put(int key, int value){
	cout<<"put("<<key<<","<<value<<")"<<endl;
	Node* node;
	
	// Check if key isn't present 
	map<int, Node*>::iterator it;
	it = mymap.find(key);
	if (it == mymap.end()){
		// key not found => add it
		node = newNode(key, value);
		
		// update map
		mymap[key] = node;		

		// check if we're at capacity
		if(size == capacity){
			Node* victim = tail->prev;
			int victim_key = victim->key;

			detach(victim);
			it = mymap.find(victim_key);
			mymap.erase(it);
			
			size--;
		}

		size++;
	}else{
		// update the value for node with this key
		node = mymap[key];
		node->value = value;
		detach(node);
	}
	
	moveToFront(node);
	
}

int main(){
	LRUCache lruCache(3);
	cout<<lruCache.get(1)<<endl;
	lruCache.put(1,10);
	lruCache.put(2,10);
	lruCache.put(3,10);
	cout<<lruCache.get(1)<<endl;
	lruCache.put(1,100);
	cout<<lruCache.get(1)<<endl;
	lruCache.put(4,10);
	cout<<lruCache.get(2)<<endl;
	return 0;
}

typedef struct Node{
  struct Node* next;
  struct Node* prev;
  int val;
}Node;

Node* newNode(int _val){
  Node* temp = new Node();
  temp->next = NULL;
  temp->prev = NULL;
  temp->val = _val;
  return temp;
}

class MyLinkedList {
  Node* head;
  Node* tail;
  int size;

  // add node after cur
  void addAfter(Node* cur, Node* node){
    node->next = cur->next;
    node->next->prev = node;
    cur->next = node;
    node->prev = cur;
  }

  // return pointer to node at this index
  Node* seek(int index){
    if(index<0 or index >= size)
      return NULL;
    Node* cur = NULL;
    if(index > size/2){
      cur = tail->prev;
      int pos = size-1;
      while(cur!=NULL and pos!=index){
        cur = cur->prev;
        --pos;
      }
    } else{
      cur = head->next;
      int pos = 0;
      while(cur!=NULL and pos!=index){
        cur = cur->next;
        ++pos;
      }
    }
    return cur;
  }

public:
  /** Initialize your data structure here. */
  MyLinkedList() {
    head = newNode(-1);
    tail = newNode(-1);
    head->next = tail;
    tail->prev = head;
    size = 0;
  }

  /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
  int get(int index) {
    // make cur point to node at this index
    Node* cur = seek(index);
    if(cur==NULL)
      return -1;
    return cur->val;
  }

  /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
  void addAtHead(int val) {
    Node* node = newNode(val);
    addAfter(head, node);
    ++size;
  }

  /** Append a node of value val to the last element of the linked list. */
  void addAtTail(int val) {
    Node* node = newNode(val);
    Node* last = tail->prev;
    addAfter(last, node);
    ++size;
  }

  /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
  void addAtIndex(int index, int val) {
    if(index<0 or index > size)
      return;

    if(index == 0){
      addAtHead(val);
      return;
    }
    else if(index == size){
      addAtTail(val);
      return;
    }

    Node* node = newNode(val);
    
    // Get cur to point to the preceeding node i.e. at index - 1
    Node* cur = seek(index - 1);
    addAfter(cur, node);
    ++size;
  }

  /** Delete the index-th node in the linked list, if the index is valid. */
  void deleteAtIndex(int index) {
    Node* victim = seek(index);

    if(victim == NULL)
      return;
    victim->next->prev = victim->prev;
    victim->prev->next = victim->next;
    delete victim;
    victim = NULL;
    --size;
  }
};

/**
* Your MyLinkedList object will be instantiated and called as such:
* MyLinkedList* obj = new MyLinkedList();
* int param_1 = obj->get(index);
* obj->addAtHead(val);
* obj->addAtTail(val);
* obj->addAtIndex(index,val);
* obj->deleteAtIndex(index);
*/

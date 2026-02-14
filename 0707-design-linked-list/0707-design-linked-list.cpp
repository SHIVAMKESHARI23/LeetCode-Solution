class MyLinkedList {
private:
    struct Node{
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = nullptr;
        }
    };

    Node* head;
    int size;

public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size){
            return -1;
        }

        Node* temp = head;
        for(int i = 0; i < index; i++){   
            temp = temp->next;
        }

        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newnode = new Node(val);

        if(head == nullptr){
            head = newnode;
        }
        else{
            Node* temp = head;              
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newnode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size) return;

        if(index == 0){
            addAtHead(val);
            return;
        }

        Node* temp = head;
        for(int i = 0; i < index - 1; i++){
            temp = temp->next;
        }

        Node* newnode = new Node(val);   
        newnode->next = temp->next;
        temp->next = newnode;
        size++;                          
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;

        if(index == 0){
            Node* del = head;
            head = head->next;
            delete del;
            size--;                     
            return;
        }

        Node* temp = head;
        for(int i = 0; i < index - 1; i++){
            temp = temp->next;
        }

        Node* del = temp->next;
        temp->next = del->next;
        delete del;
        size--;
    }
};

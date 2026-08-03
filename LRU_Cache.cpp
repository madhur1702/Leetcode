class Node {
public:
    int key, val;
    Node* next;
    Node* prev;
    Node(int keyelement, int valelement) {
        key = keyelement;
        val = valelement;
        next = nullptr;
        prev = nullptr;
    }
};
class LRUCache {
public:
    unordered_map<int, Node*> mpp;
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    int cap;
    void deletenode(Node* node)
    {
        Node* prevnode = node->prev;
        Node* nextnode = node->next;
        prevnode->next = nextnode;
        nextnode->prev = prevnode; 
    }
    void insertafterhead(Node* node)
    {
        Node* aftercur = head->next;
        head->next = node;
        node->prev = head;
        node->next = aftercur;
        aftercur->prev = node;
    }
    LRUCache(int capacity) {
        cap = capacity;
        mpp.clear();
        head->next = tail;
        tail->prev = head;
    }
    int get(int key) {
        if(mpp.find(key)== mpp.end())
        {
            return -1;
        }
        Node* node = mpp[key];
        deletenode(node);
        insertafterhead(node);
        return node->val;
    }

    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end())
        {
            Node* node = mpp[key];
            node->val = value;
            deletenode(node);
            insertafterhead(node);
        }
        else
        {
            if(mpp.size() == cap)
            {
                Node* node = tail->prev;
                mpp.erase(node->key);
                deletenode(node);
            }
            Node* node = new Node(key,value);
            mpp[key] = node;
            insertafterhead(node);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

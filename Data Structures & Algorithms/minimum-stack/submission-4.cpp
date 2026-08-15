class MinStack {

    struct Node{
        int val;
        int min;
        Node* next;

        Node(int v, int m) : val(v), min(m), next(nullptr){}
    };
    Node *end;
public:

    MinStack() {
        end = nullptr;
    }
    
    void push(int val) {
        int min;
        if(end == nullptr)
            min = val;
        else
            min = std::min(val, end->min);

        Node* node = new Node(val, min);
        node->next = end;
        end = node;
    }
    
    void pop() {
        Node* node = end;
        end = end->next;
        node->next = nullptr;
        delete node;
    }
    
    int top() {
        return end->val;
    }
    
    int getMin() {
        return end->min;
    }
};

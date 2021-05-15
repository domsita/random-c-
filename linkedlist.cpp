#include <iostream>

using namespace std;

class Node {
public:
    int val;
    Node * next;
};

Node * addNode(Node *, int);
void printList(Node *);
void printBackward(Node *);
Node * removeNode(Node *, int);
int listLength(Node *);
Node * insertNode(Node *, int, int);
int searchList(Node *, int);

int main() {
    Node *head = new Node;
    head->val = 1;
    head->next = nullptr;

    printList(head);
    cout << "Length: " << listLength(head) << endl;;
    head = addNode(head, 4);
    head = insertNode(head, 3, 2);
    printList(head);
    cout << "Length: " << listLength(head) << endl;;
    head = removeNode(head, 1);
    head = addNode(head, 3);
    head = addNode(head, 7);
    cout << "Node 7 at: " << searchList(head, 7) << endl;
    cout << "Node 3 at: " << searchList(head, 3) << endl;
    cout << "Node 4 at: " << searchList(head, 4) << endl;
    cout << "Node 18 at: " << searchList(head, 18) << endl;
    head = addNode(head, 12);
    head = insertNode(head, 6, 4);
    head = addNode(head, 14);
    cout << "Node 14 at: " << searchList(head, 14) << endl;
    printList(head);
    cout << "Length: " << listLength(head) << endl;;
    head = removeNode(head, 4);
    head = removeNode(head, 7);
    head = removeNode(head, 7);
    head = insertNode(head, 8, 0);
    printList(head);
    cout << "Length: " << listLength(head) << endl;

    return 0;
}

// adds a node at the end of the list
Node * addNode(Node * head, int val) {
    Node * node = head;
    Node * newNode = new Node;
    while (node->next != nullptr) {
        node = node->next;
    }
    newNode->val = val;
    newNode->next = nullptr;
    node->next = newNode;
    return head;
}


// Removes first instance of val in the list
Node * removeNode(Node * head, int val) {
    if (head->val == val) {
        head = head->next;
        return head;
    }
    Node * last = head;
    Node * curr = head->next;
    while (curr->next != nullptr) {
        if (curr->val == val) {
            last->next = curr->next;
        }
        curr = curr->next;
        last = last->next;
    }
    if (curr->val == val) {
        last->next = nullptr;
    }
    return head;
}

void printList(Node * head) {
    cout << "(";
    while (head->next != nullptr) {
        cout << head->val << ", ";
        head = head->next;
    }
    cout << head->val << ")" << endl;
    return;
}

int listLength(Node * head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}

Node * insertNode(Node * head, int val, int position) {
    int counter = 0;
    Node * newNode = new Node();
    newNode->val = val;
    if (position == 0) {
        newNode->next = head;
        return newNode;
    }
    Node * last = head;
    Node * curr = head->next;
    counter = 1;
    while (counter != position && curr != NULL) {
        counter++;
        curr = curr->next;
        last = last->next;
    }
    last->next = newNode;
    newNode->next = curr;

    return head;
}

int searchList(Node * head, int val) {
    int counter = 0;
    while (head->val != val && head != NULL) {
        counter++;
        head = head->next;
        if (head == NULL) {
            return -1;
        }
    }
    return counter;
}

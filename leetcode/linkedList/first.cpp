#include<bits/stdc++.h>
using namespace std;

int main() {

    //linked list implementation using loop
    struct Node {
        int data;
        Node* next;
    };
    Node* head = new Node();
    head->data = 1;
    head->next = nullptr;

    // Add more nodes
    for (int i = 2; i <= 5; i++) {
        Node* newNode = new Node();
        newNode->data = i;
        newNode->next = nullptr;

        // Insert the new node at the end
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Print the linked list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    //FINDING MID ELEMENT
    Node* temp1 = head;
    Node* temp2 = head->next;
    while(temp2 != nullptr) {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    cout << temp1->data;
    return 0;
}
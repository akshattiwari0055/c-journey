#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
public:
    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node *head;
    Node *tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val); //Dynamically allocated
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void insert(int val,int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0;i<pos-1;i++){
            if(temp == NULL){
                cout<<"Position is invalid"<<endl;
                return;
            }
            temp = temp->next;
        }
        //temp is now at pos-1;
        newNode->next = temp->next;
        temp->next = newNode;
    }
};
int main(){
List ll;
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
ll.display();
ll.push_back(5);
ll.push_back(6);
ll.display();
ll.insert(7,6);
ll.display();
}
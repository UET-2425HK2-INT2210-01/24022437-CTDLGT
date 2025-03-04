#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
typedef struct Node* node;
class Queue{
    node head;
    public:
    Queue() : head(NULL){};
    void enqueue(int x){
        node temp = new Node();
        temp->data=x;
        temp->next = NULL;
        if(head == NULL){
            temp = head;
            return;
        } else {
            node ptr = head;
            while( ptr->next!= NULL){
                ptr=ptr->next;
            }
            ptr->next=temp;
            return;
        }
    }
    void dequeue(){
        node temp = head;
        while (temp)
        {
            head=head->next;
            delete temp;
            return;
        }
    }
    void display(){
        node temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    Queue list;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string a;
        cin>>a;
        if(a == "enqueue"){
            int a;
            cin>>a;
            list.enqueue(a);
        } else if( a=="dequeue"){
            list.dequeue();
        }
    }
    list.display();
}

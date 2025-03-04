#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
};
typedef struct Node* node;
class linkedlist{
    Node* head;
    public:
    linkedlist() : head(NULL){};
    void insert(int a){
        node newNode = new Node();
        newNode->prev=NULL;
        newNode->data=a;
        newNode->next=head;
        if (!head) head->prev=newNode;
        head=newNode;
        return;
    }
    int count_triplets(){
        node temp;
        temp=head->next;
        int x=0;
        while (temp->next)
        {
            node nexttemp=temp->next;
            node prevtemp=temp->prev;
            if((int)nexttemp->data + (int)temp->data + (int)prevtemp->data == 0) x++;
            temp=temp->next;
        }
        return x;
    }
};
int main(){
    linkedlist list;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        list.insert(a);
    }
    cout<<list.count_triplets();
}
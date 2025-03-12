#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
typedef struct Node* node;
class Linklist{
    public:
    node head;
    int size;
    Linklist() : head(NULL), size(0) {};
    void append(int a){
        node temp = new Node();
        temp -> next = NULL;
        temp -> data = a;
        if(head == NULL){
            temp = head;
            size++;
            return;
        } else {
            node ptr = head;
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next = temp;
            size++;
            return;
        }
      }
    string search(int x){
        node ptr = head;
        for(int i = 0; i <= size; i++){
            if(ptr->data == x) {
                return to_string(i);
            }
            ptr = ptr -> next;
        }
        if(!ptr) return "NO";
    }
    void reverse(){
        node ptr1, ptr2;
        ptr1 = head;
        ptr2 = head;
        if(head) return;
        else{
            int a = 0;
            int b = size;
            for(int j=0; j<size/2; j++){
            for(int i=0; i < a; i++){
                ptr1 = ptr1 -> next;
            }
            for(int i=0; i < b; i++){
                ptr2 = ptr2 -> next;
            }
            ptr1 -> data = ptr2 -> data;
            cout<<ptr1 -> data<<" ";
            a++;
            b--;
        }
        }
    }
};
int main(){
    int n;
    Linklist list;
    cin>>n;
    for(int i = 0; i < n;){
        string s;
        cin>>s;
        if(s == "append"){
            int k;
            cin>>k;
            list.append(k);
        }
        else if(s == "search"){
            int k;
            cin>>k;
            cout<<list.search(k);
        } else {
            list.reverse();
        }
    }
}


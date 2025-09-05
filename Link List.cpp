#include<iostream>
#include<string>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    void insertathead(node* &head, int data){
        node* n = new node(data);
        n->next = head;
        head = n;
    }
    void insertattail(node* &head, int data){
        node* n = new node(data);
        if(head == NULL){
            head = n;
            return;
        }
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
    bool search(node* head, int key){
        node* temp = head;
        while(temp != NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    void display(node* head){
        node*temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};
int main(){
    node* head = NULL;
    head->insertattail(head, 1);
    head->insertattail(head, 2);
    head->insertattail(head, 3);
    cout << head->search(head, 5) << endl;
    head->display(head);
    return 0;
}
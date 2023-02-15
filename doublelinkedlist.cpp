#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

};
node* head;
void insertathead(int value){
    
    node* newNode=new node();
    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
    }
    
    
}
void insertatend(int value){
    node* newnode=new node();
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    node* last=head;
    while(last->next!=NULL){
        last=last->next;
    }
    newnode->prev=last;
    last->next=newnode;
    last=newnode;
}

void insertatpos(int value,int pos){
    node* newnode=new node();
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    node* temp=head;
    int i=1;
    while(i<pos-1 && temp !=NULL){
        temp=temp->next;
        i++;
    } 
    if(temp != NULL){
        newnode->next=temp->next;
        newnode->prev=temp;
        if(temp->next !=NULL){
            temp->next->prev=newnode;
        }
        temp->next=newnode;
    }
    else{
        cout<<"invalid postition"<<endl;
    }
    
}
void printing(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
    head=NULL;
    
    
    
    insertathead(20);
    insertathead(10); 
    insertatpos(30,3);
    insertatpos(40,4);
    insertatend(50);
    insertatend(60);
    
    printing();
}
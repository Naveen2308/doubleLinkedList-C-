void printingrev(){
    node* tail=head;
    while(tail->next  !=NULL){
        tail=tail->next;
    }
    while(tail != head){
        cout<<tail->data<<endl;
        tail=tail->prev;
    }
    cout<<tail->data<<endl;
}

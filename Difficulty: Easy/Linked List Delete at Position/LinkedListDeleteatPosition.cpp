
Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    int count=1;
    Node *temp=head;
    if(pos==1){
            head=head->next;
            delete temp;
            return head;
        }
    while(temp){
        if(count+1==pos){
            Node *x=temp->next->next;
            temp->next=x;
        }
        count++;
        temp=temp->next;
    }
    return head;
}

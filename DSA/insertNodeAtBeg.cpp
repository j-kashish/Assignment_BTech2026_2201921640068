struct node{
    int data;
    node*next;
    node (int x){
    data=x;
    next=null;
    }
}
node *insertbegin(node*head,int x){
    node*temp=new node(x);
    temp-> next=head;
    return temp;
}
int main(){
    node*head=null;
    head=insertbegin(head,30);
    head=insertbegin(head,20);
    head=insertbegin(head,10);
    return 0;
}
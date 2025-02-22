struct node{
int data;
node *next;
node(int x){
    data=x;
   next=null;
}
}
int main(){
node* head =new node(10);
head->next=new node(20);
head->next-> next =new node(30);
return 0;
}

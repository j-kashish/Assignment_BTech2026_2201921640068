void rprint(node*head){
    if(head==null)
    return ;
cout<<(head-> data)<<"";
rprint(head->next);
}
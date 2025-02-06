class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      
       queue<int>st1;
       queue<int>st2;
       while(l1){
        st1.push(l1->val);
        l1=l1->next;
       }
       while(l2){
        st2.push(l2->val);
        l2=l2->next;
       }
       int carry=0;
       ListNode* l3=NULL;
       ListNode* head=NULL;
       while(!st1.empty() || !st2.empty() || carry){
           int sum=carry;
           if(!st1.empty()){
            sum+=st1.front();
            st1.pop();
           }
           if(!st2.empty()){
            sum+=st2.front();
            st2.pop();
           }
           

            if(!l3){
              l3=new ListNode(sum%10);
              head=l3;

            }
            else{
                ListNode* temp=new ListNode(sum%10);
             
                head->next=temp;
                head=head->next;
            }
            carry=sum/10;
            
          
        }
        
        return l3;
        
    }
}
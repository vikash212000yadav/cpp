/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string a;
        string b;
        
        ListNode* la = l1;
        ListNode* lb = l2;
        
        while(la != NULL)
        {
            a = a + to_string(la->val);
            la = la->next;
        }
        
        while(lb != NULL)
        {
            b = b + to_string(lb->val);
            lb = lb->next;
        }
        
        ListNode* l = l1;
        if(a.size() < b.size()) 
        {
            l = l2;    
            swap(a, b);
        }
        
        int size_a = a.size();
        int size_b = b.size();
        
        int m = 0;
        int n = b.size()-1;
        for(int i = a.size()-1; i >= 0; i--)
        {
            int curr = (a[i]-'0')+ (n < 0 ? 0 : (b[n]-'0')) + m;
            a[i] = (curr%10+'0');
            if(curr >= 10) 
                m = 1;
            else 
                m = 0;
            n--;
        }
        
        int i = 0;
        
        ListNode* current = l;
        while(current != NULL)
        {
            current->val = a[i]-'0';
            current = current->next;
            i++;
        }
        if(m)
        {
            ListNode* tmp = new ListNode(1);
            tmp->next = l;
            return tmp;
        }
        return l;
    }
};

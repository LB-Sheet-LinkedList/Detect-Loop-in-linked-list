 bool detectLoop(Node* head)
    {
        // your code here
        
        /*
        LOGIC:
        >> Traverse linked list using two pointers.
        
        >> Move one pointer(slow_p) by one and another pointer(fast_p) by two.
        
        >> If these pointers meet at the same node then there is a loop. 
           If pointers do not meet then linked list doesn’t have a loop.
        */
        
        Node *slow_p = head, *fast_p = head;
 
    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            return true;
        }
    }
    return false;
        
    }

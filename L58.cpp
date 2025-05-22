#include<iostream>
#include<algorithm>

//LC - 142 
// Problem - Linked List Cycle II
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//       ListNode* slow = head;
//       ListNode* fast = head;
//       bool isCycle = false;

//       while(fast != NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast){
//             isCycle = true;
//             break;
//         }
//       }
      
//       if(!isCycle){
//         return NULL;
//       }

//       slow=head;
//       while(slow != fast){
//         slow = slow->next;
//         fast = fast->next;
//       }

//       while(fast->next != slow){
//         fast=fast->next;
//       }
//       fast->next = NULL;
      
//       return slow;
//     }
// };

using namespace std;



int main(){


    return 0;
}
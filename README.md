# Deletion-and-Reverse-in-Circular-Linked-List

## Difficulty: Medium
Given a Circular Linked List. The task is to delete the given node, key in the circular linked list, and then print the reverse of the circular linked list.

Examples:

Input: Linked List: 2->5->7->8->10, key = 8

Output: 10->7->5->2 

Explanation:
After deleting 8 from the given circular linked list, it has elements as 2, 5, 7, 10. Now, reversing this list will result in 10, 7, 5, 2.
Input: Linked List: 1->7->8->10, key = 8

Output: 10->7->1

Explanation: 
After deleting 8 from the given circular linked list, it has elements as 1, 7,10. Now, reversing this list will result in 10, 7, 1.
Expected Time Complexity: O(n)
Expected Auxillary Space: O(1)

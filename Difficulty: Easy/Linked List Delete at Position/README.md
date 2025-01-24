Linked List Delete at Position
Difficulty: EasyAccuracy: 50.06%Submissions: 13K+Points: 2
Given a linked list of size n, you have to delete the node at position pos of the linked list and return the new head. The position of initial node is 1.

Example 1:

Input:
LinkedList: 1->2->3->4->5
pos = 4
Output: 1 2 3 5
Example 2:

Input:
LinkedList: 2->5->7->8->99->100
pos = 6
Output: 2 5 7 8 99
Your Task:
The task is to complete the function deleteAtPosition() which takes head reference and pos as argument and returns reference to the new head node, which is then used to display the list. The printing is done automatically by the driver code.

Expected Time Complexity: O(pos).
Expected Auxiliary Space: O(1).

Constraints:
2 <= number of nodes <= 103
1 <= pos <= n

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
         ListNode dummy = new ListNode(-1), prev = dummy, current = head;
            dummy.next = head;
            while (current != null && current.next != null) {
                prev.next = current.next;
                current.next = current.next.next;
                prev.next.next = current;
                current = current.next;
                prev = prev.next.next;
            }

            return dummy.next;
        }
}

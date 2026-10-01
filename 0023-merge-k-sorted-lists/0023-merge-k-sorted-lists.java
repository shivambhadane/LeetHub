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
    public ListNode mergeKLists(ListNode[] lists) {
         if (lists == null || lists.length == 0) {
                return null;
        }
            int interval = 1;
            while (interval < lists.length) {
                for (int i = 0; i + interval < lists.length; i += interval * 2) {
                    lists[i] = merge(lists[i], lists[i + interval]);
                }
                interval *= 2;
            }
            return lists[0];
    }
    public ListNode merge(ListNode left, ListNode right) {
            ListNode temp = new ListNode(0);
            ListNode current = temp;
            while (left != null && right != null) {
                if (left.val <= right.val) {
                    current.next = left;
                    left = left.next;
                } else {
                    current.next = right;
                    right = right.next;
                }
                current = current.next;
            }
            while (left != null) {
                current.next = left;
                left = left.next;
                current = current.next;
            }
            while (right != null) {
                current.next = right;
                right = right.next;
                current = current.next;
            }
            return temp.next;
    }

}

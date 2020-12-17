class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        int i;
       PriorityQueue<ListNode> p1 = new PriorityQueue<>(new NodeComparator());
        for(ListNode l1:lists){
            ListNode l2=l1;
            while(l2!=null)
            {
                p1.add(l2);
                l2=l2.next;
            }
        }
        ListNode curr,head=null;
        head=p1.poll();
        curr=head;
        while(!p1.isEmpty())
        {
            ListNode t1=p1.poll();
            t1.next=null;
            curr.next=t1;
            curr=curr.next;
        }
        return head;
    }
}
class NodeComparator implements Comparator<ListNode>{
    @Override
    public int compare(ListNode l1,ListNode l2)
    {
        return l1.val-l2.val;
    }
}
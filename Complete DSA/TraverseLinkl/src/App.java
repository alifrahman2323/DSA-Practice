class Node {
    int data;
    Node next;

    Node(int data){
        this.data = data;
        this.next = null;
    }

}
public class App {
    static void printList(Node head, Node curr){
        if (head == null || curr == null) return;
        System.out.println(curr.data+" ");

       if (curr.next != head) {
            printList(head, curr.next);
        }
    }

    public static void main(String[] args) throws Exception {
       Node head = new Node(11);
        head.next = new Node(2);
        head.next.next = new Node(56);
        head.next.next.next = new Node(12);

        head.next.next.next.next = head;

        printList(head, head);
    }

}


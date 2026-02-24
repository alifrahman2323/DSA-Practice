import java.util.LinkedList;
import java.util.Iterator;
 public class App { 
    public static void main(String[] args) {
        LinkedList<String> l_list = new LinkedList<String>();
        l_list.add("Red");
        l_list.add("green");
        l_list.add("Black");
        l_list.add("orange");

        System.out.println("Original linked list: "+l_list);
        Iterator it = l_list.descendingIterator();

        System.out.println("Elements in reverse order: ");
        while (it.hasNext()){ 
            System.out.println(it.next());
        }
    }
 }
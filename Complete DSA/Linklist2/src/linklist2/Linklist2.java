/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package linklist2;

/**
 *
 * @author ALIF-2025
 */
import java.util.LinkedList;
public class Linklist2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        LinkedList<String> l_list = new LinkedList<String>();
        l_list.add("Red");
        l_list.add("Green");
        l_list.add("Black");
        
        System.out.println("Original linked list" +l_list);
        l_list.addFirst("White");
        l_list.addLast("Pink");
       
        System.out.println("Final Linked List : "+l_list);
    }
    
}

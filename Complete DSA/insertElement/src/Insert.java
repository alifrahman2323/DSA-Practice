import java.util.Scanner;
public class Insert {
    public static void main(String[] args) throws Exception {
       int len, p, ele;
       Scanner input = new Scanner(System.in);
       System.out.println("Enter the length of array : ");
       len  = input.nextInt();
      int arr[] = new int[len+1];
        System.out.println("Enter "+len+" elements:");
        for(int i = 0; i < len; i++)
        {
            arr[i] = input.nextInt();
        }
        System.out.print("Enter the element which you want to insert:");
        ele = input.nextInt();
        arr[len] = ele;
        System.out.print("After inserting : ");
        for(int i = 0; i <len; i++)
        {
            System.out.print(arr[i]+",");
        }
        System.out.print(arr[len]);
        
    }
}
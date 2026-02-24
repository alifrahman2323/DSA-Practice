import java.util.Arrays;
public class ArrDelete {
    public static void main(String[] args) throws Exception {
       int [] my_array = {25, 14, 56, 15, 10, 8, 12, 20};

       System.out.println("Original array: " +Arrays.toString(my_array));
       int removeIndex = 1;

        // Loop to remove the element at the specified index.
        for (int i = removeIndex; i < my_array.length - 1; i++) {
            my_array[i] = my_array[i + 1];
        }
        
        // Print the modified array after removing the second element.
        System.out.println("After removing the second element: " + Arrays.toString(my_array));
    }

    }


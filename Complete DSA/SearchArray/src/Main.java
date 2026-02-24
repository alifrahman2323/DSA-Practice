import java.util.OptionalInt;

public class Main {
    public static OptionalInt findIndex(int[] my_array, int t) {
        if (my_array == null)
            return OptionalInt.empty();

        int len = my_array.length;
        int i = 0;

        while (i < len) {
            if (my_array[i] == t)
                return OptionalInt.of(i);
            else
                i++; 
        }

        return OptionalInt.empty(); 
    }

    public static void main(String[] args) {
        int[] my_array = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};

        findIndex(my_array, 25).ifPresent(index -> System.out.println("Index position of 25 is: " + index));
        findIndex(my_array, 877).ifPresent(index -> System.out.println("Index position of 877 is: " + index));
        findIndex(my_array, 29).ifPresent(index -> System.out.println("Index position of 29 is: " + index));
    }
}

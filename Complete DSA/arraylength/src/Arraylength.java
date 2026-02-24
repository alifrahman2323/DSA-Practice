public class Arraylength {
    public static void main(String[] args)  {
        int [] arr;
        arr = new int [5];

        arr[0] = 15;
        arr[1] = 25;
        arr[2] = 79;
        arr[3] = 81;
        arr[4] = 96;

        for (int i =0; i < arr.length; i++){
            System.out.println("Element of  index " + i + " :" + arr[i]);
        } 
    }
}

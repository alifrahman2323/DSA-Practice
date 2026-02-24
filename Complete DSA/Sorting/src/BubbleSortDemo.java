import java.util.Arrays;
public class BubbleSortDemo {
    public static void main(String[] args) throws Exception {
        int[] sourceArray = {4,6,3,2,1,9,7};
      System.out.println("Input Array: " 
      + Arrays.toString(sourceArray));
      printline(50);
      System.out.println("Output Array: " 
      + Arrays.toString(bubbleSort(sourceArray)));
      printline(50);
   }    

   public static void printline(int count){
      for(int i=0;i <count-1;i++){
         System.out.print("=");
      }
      System.out.println("=");
   }

   public static int[] bubbleSort(int[] intArray){

      int temp;
      boolean swapped = false;       
      // loop through all numbers 
      for(int i=0; i < intArray.length-1; i++){ 
         swapped = false;
         // loop through numbers falling ahead 
         for(int j=1; j < intArray.length-i; j++){
            System.out.println("     Items compared: [ " 
            + intArray[j-1] + ", " + intArray[j] +" ]" ); 
            // check if next number is lesser than current no
            //   swap the numbers. 
            //  (Bubble up the highest number) 
            if(intArray[j-1] > intArray[j]){
               temp=intArray[j-1];
               intArray[j-1] = intArray[j];
               intArray[j] = temp;
               swapped = true;
            }           
         }
         // if no number was swapped that means 
         //   array is sorted now, break the loop. 
         if(!swapped){
            break;
         }
         System.out.println("Iteration "+(i+1) +"#: " 
                            + Arrays.toString(intArray));
         }            
      return intArray;
   }    
}

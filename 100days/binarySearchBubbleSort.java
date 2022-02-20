import java.io.File;
import java.util.*;

public class Main {
    public static void main(String args[] ) throws Exception {
        ArrayList<Integer> datalist = new ArrayList<Integer>();
        Scanner scanner = new Scanner(new File(args[0]));
		
		// Read from the input file
        while(scanner.hasNextInt())
        {
            datalist.add(scanner.nextInt());
        }

        // Sort
        sort(datalist);

        // Binary search
        int[] result = binarySearch(datalist,0,datalist.size()-1, Integer.parseInt(args[1]));

    	// Print results to STDOUT
    	System.out.println(result[0] + " " + result[1]);

    }
    public static int[] binarySearch(ArrayList<Integer> arr,int start, int end, int target) {

  		
	    if (end >= start) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
                return mid;
            if (arr[mid] > target)
                return binarySearch(arr, start, mid - 1, target);
            return binarySearch(arr, mid + 1, end, target);
        }
  		
    }

	// You can use bubble sort which will be implemented in the previous challenge
    public static void sort(ArrayList<Integer> arr) {
        
	
        int i=0;
	int j=0;

        for(i=arr.size()-1;i>=0;i--){
            for(j=0;j<i;j++){

                if(arr[j+1]>arr[j]){

                    continue;
                }
                else{

                    int temp= arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

            }

        }


       
    }
}

import java.io.File;
import java.util.*;

public class Main {
    public static void main(String args[]) throws Exception {
        ArrayList<Integer> inputData = new ArrayList<>();
        Scanner scanner = new Scanner(new File(args[0]));
        while (scanner.hasNextInt()) {
            inputData.add(scanner.nextInt());
        }

        // Call threeSum and print out the result
        System.out.println(threeSum(inputData));
    }
    
    public static int threeSum(ArrayList<Integer> inputData) {
        int count = 0;

        // Merge Sort instantiation
        MergeSort ms = new MergeSort(inputData);
        ms.mergeSortArray();
        inputData = ms.getSortedArray();

        // Binary search instantiation
        BinarySearch bs = new BinarySearch(inputData);

        // TODO: Your code here
	
	int i=0;
	int j=0;
	int size=inputData.size();
	for(i=0;i< size;i++) {
		for(j=i+1;j<size;j++){
			int counter=inputData.get(i) +inputData.get(j);
			if(counter != 0){
				counter=counter * -1;}
			if(bs.binarySearch(counter)!=-1){
				if(inputData.get(j)<counter && inputData.get(i) <inputData.get(j)){
					count+=counter;
				}
			}
	}
}
	
        // For each pair of numbers a[i] and a[j]
        //      binary search for -(a[i] + a[j])
        //      only count if a[i] < a[j] < -(a[i] + a[j]) to avoid double counting

        return count;
    }
}

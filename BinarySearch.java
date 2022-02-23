import java.util.ArrayList;

public class BinarySearch {
    private int numberOfLookups = 0;
    private ArrayList<Integer> inputArray;

    public BinarySearch(ArrayList<Integer> inputArray) {
        this.inputArray = inputArray;
    }

    public int getTargetIndexByBinarySearch(int target) {
        return binarySearch(target);
    }

    public int getNumberOfLookups() {
        return numberOfLookups;
    }

    public int binarySearch(int target) {

        //set the starting and ending indices
        int start = 0, ending = this.inputArray.size() - 1;
        int result = -1;

        while (start <= ending) {
            numberOfLookups++; // DO NOT DELETE THIS LINE!
	    int mid = start + (ending - start) / 2; 
	    if (inputArray.get(mid) == target)
                return mid; 
	    if (inputArray.get(mid) > target)
                ending=mid-1; 
	    if (inputArray.get(mid) < target)
                start=mid+1; 
	             

        }
        return result;
    }
}

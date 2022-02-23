import java.util.ArrayList;

public class MergeSort {
    private ArrayList<Integer> inputArray;
    private int numberOfMerges = 0;

    public ArrayList<Integer> getSortedArray() {
        return inputArray;
    }

    public int getNumberOfMerges() {
        return numberOfMerges;
    }

    public MergeSort(ArrayList<Integer> inputArray) {
        this.inputArray = inputArray;
    }

    public void mergeSortArray() {
        mergeSort(0, this.inputArray.size() - 1);
    }

    public void mergeSort(int startIndex, int endIndex) {

        if (startIndex < endIndex && (endIndex - startIndex) >= 1) {
            // TODO Your code below
            //Divide until array to sort has a single element
	    int mid= startIndex+ (endIndex-startIndex)/2;
	    mergeSort(startIndex,mid);
	    mergeSort(mid+1,endIndex);
            //Merge sorted arrays into one sorted array
            merge(startIndex, endIndex);
        }
    }

    public void merge(int startIndex, int endIndex) {

        // DO NOT DELETE THIS LINE!
        numberOfMerges++;
	int mid= startIndex+ (endIndex-startIndex)/2;
	int a=mid-startIndex+1;
	int b=endIndex-mid;
        // New merged array for merging sorteded arrays Array[i-midIndex], Array[(midIndex+1)-endIndex]
        ArrayList<Integer> mergedSortedArray = new ArrayList<Integer>();

        // TODO Your code below
        
	int x=0,y=0;
	for(x=0;x<a;++x){
		mergedSortedArray.add(x,startIndex+x);	
	}
	for(y=0;y<b;++y){
		mergedSortedArray.add(y,mid+1+y);
	}

        int i = 0;
        int j = startIndex;
	

        //Setting sorted array to original one
        while (i < mergedSortedArray.size()) {
            inputArray.set(j, mergedSortedArray.get(i++));
            j++;
        }
	
	

    }
}
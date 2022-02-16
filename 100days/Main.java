//online judge train swapping

import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner myScanner = new Scanner(System.in);
		
		// Reading inputs from STDIN
        int numTestCases = myScanner.nextInt();
        for (int i = 0; i < numTestCases; i++) {
            int numInputLines = myScanner.nextInt();
            if (numInputLines >= 0 && numInputLines <= 50) {
                int inputArrays[] = new int[numInputLines];
                for (int j = 0; j < numInputLines; j++) {
                    inputArrays[j] = myScanner.nextInt();
                }
                int numSwaps = operation(inputArrays, numInputLines);


                // Writing result to STDOUT
                System.out.printf("Optimal train swapping takes %d swaps.\n", numSwaps);
            }
        }
    }
    public static int operation(int[] inputArrays, int numInputLines){
        int swapResult=0;
        int i=0;
	int j=0;

        for(i=numInputLines-1;i>=0;i--){
            for(j=0;j<i;j++){

                if(inputArrays[j+1]>inputArrays[j]){

                    continue;
                }
                else{

                    int temp= inputArrays[j];
                    inputArrays[j]=inputArrays[j+1];
                    inputArrays[j+1]=temp;
                    swapResult++;
                }

            }

        }


        return swapResult;
    }

}
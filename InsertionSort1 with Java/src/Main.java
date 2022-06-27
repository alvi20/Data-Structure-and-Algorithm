import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        int[] Array={54,23,64,15,75,96,55};

        int j;

        for(j=1;j<=Array.length-1;j++) {

            int t = Array[j];
            int i = j - 1;


            while (i >= 0 && Array[i]>t) {

                Array[i + 1] = Array[i];
                i = i - 1;
            }

            Array[i+ 1] = t;

        }
        System.out.println("Sorted: "+Arrays.toString(Array));
        }

    }

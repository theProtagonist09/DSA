package Hashing;
import java.util.*;

public class hashingBasics {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int arr[]={1,4,5,6,7,1,2,3,5,6,7,9};
        
        int hash[]=new int[10];

        for(int i=0;i<=11;i++){
           hash[arr[i]] +=1 ;
        }

        System.out.println("Enter the no. of queries u want to ask");
        int n=sc.nextInt();
        while(n>0){
            n--;
            int m=sc.nextInt();
            System.out.println("No of times "+m+" Appears in the array arr is: "+hash[m]);
        }
    }
}

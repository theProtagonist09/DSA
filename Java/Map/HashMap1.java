import java.util.HashMap;
import java.util.*;
public class HashMap1{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();     //pre compute
        }

        HashMap<Integer,Integer> m=new Hashmap<>();
        for(int i=0;i<n;i++){
            m[arr[i]] ++;
        }
        int q=sc.nextInt();
        while(q-->0){
            int num=sc.nextInt();

        }
    }
}
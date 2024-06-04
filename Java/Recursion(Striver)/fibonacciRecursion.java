import java.util.*;
public class fibonacciRecursion{
    public static int fibonacci(int n){
        
        if(n<=1){
            return n;
        }
        return fibonacci(n-1)+fibonacci(n-2);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the term of fibonacci to be printed");
        int n=sc.nextInt();
        System.out.println(fibonacci(n));

        // time complexity= O(2^n)   . by recursion tree
    }
}
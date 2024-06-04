// calc sum of N natural no by Parameterised Recursion
public class sumOfNaturalNo{
    public static void printSum(int i,int n,int sum){
        if(i>n){
            System.out.println(sum);
            return;
        }

        printSum(i+1, n, sum+i);
    }
    public static void main(String args[]){
        int n=10;
        printSum(1, n, 0);
    }
}
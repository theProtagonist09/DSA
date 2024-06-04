// print n to 1,by using f(i+1,n) instead of f(i-1,n)
public class backTrackingPrintNto1{
    public static void print(int i,int n){
        if(i>n){
            return;
        }
        print(i+1, n);
        System.out.println(i);
    }
    public static void main(String args[]){
        int n=3;
        print(1, n);
    }

}
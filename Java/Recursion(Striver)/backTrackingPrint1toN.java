// print 1 to n,by using f(i-1,n) instead of f(i+1,n)
public class backTrackingPrint1toN{
    public static void print(int i,int n){
        if(i<1){
            return;
        }
        print(i-1, n);
        System.out.println(i);
    }
    public static void main(String args[]){
        int n=3;
        print(n,n);
    }
}
// /print N to 1 using recursion
public class printNto1{

    public static void printRev(int i,int n){
        if(i<1){
            return;
        }
        System.out.println(i);
        printRev(i-1, n);
    }
    public static void main(String args[]){
        int n=10;
        printRev(n,n);
    }
}
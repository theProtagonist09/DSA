// print name n times using recursion
public class printName{
    public static void namePrint(int i,int n){
        if(i>n){
            return;
        }
        System.out.println("Mrinal");
        namePrint(i+1, n);
    }
public static void main(String args[]){
    int n=3;
    namePrint(1, n);
}
}
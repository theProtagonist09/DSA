import java.util.*;
public class checkPalindrome {

    public static Boolean checkingPalindrome(String str,int i){
        if(i>=str.length()/2){
            return true;
        }
        if(str.charAt(i)!=str.charAt(str.length()-i-1)){
            return false;
        }
        return checkingPalindrome(str, i+1);
    }
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        System.out.println(checkingPalindrome(str, 0));
    }
}

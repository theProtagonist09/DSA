import java.util.*;
public class hashingInString{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();    //only lower case alphabets
        int []hash=new int[26];      //creating the hash array

        for(int i=0;i<str.length();i++){          //populating the hash array,with the frequency of each char
            hash[str.charAt(i)-'a'] +=1;
        }

        int n=sc.nextInt();         //no. of queries
        while(n>0){
            n--;
            System.out.println("Enter the char,whose frequency u want to know");
            char c=sc.next().charAt(0);        //in java there's no sc.nextChar(), that's why 🫠
            System.out.println("The frequency of inputted char is: "+hash[c-'a']);
        }
    }
}
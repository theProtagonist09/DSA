public class array2{
    public static void main(String args[]){
        // print the second largest element
        // better code
        int arr[]={3,2,2,5,7,10,12};   /*assuming all elements to be positive, if any -ve element is there,just tkae the least no */
        int largest=arr[0],slargest=-1; /*only when elements are +ve */

        // getting the largest
        for(int i=0;i<arr.length;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }

        // getting the secondlargest
        for(int i=0;i<arr.length;i++){
            if(arr[i]>slargest && arr[i] != largest){
                slargest=arr[i];
            }
        }
        System.out.println(slargest);
        // time complexity: O(2n)

    }
}
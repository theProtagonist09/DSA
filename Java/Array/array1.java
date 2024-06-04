public class array1{
    public static void main(String args[]){
        int arr[]= {3,2,1,2,5};
        /*  for finding the largest element assume that arr[0] is largest and iterate thru
        the array , if arr[i]>arr[0], then assign largest=arr[i] and then print it*/
        int largest=arr[0];
        for(int i=0;i<arr.length;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
         System.out.println(largest);
    }
}
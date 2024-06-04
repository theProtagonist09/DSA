public class array3{
    public static void main(String args[]){
        // optimal soln for checking second largest element
        int arr[]={3,4,7,1,5};
        int largest=arr[0];
        int slargest=-1;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>largest){
                slargest=largest;
                largest=arr[i];
            }else if(arr[i]<largest && arr[i]>slargest){
                slargest=arr[i];
            }
        }
        System.out.println(slargest);
    }
}
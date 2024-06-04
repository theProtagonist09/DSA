public class swppingArray2{

    public static void swapArray(int[]arr,int i){
        if(i>=5/2){
            return;
        }
        int temp=arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=temp;

        swapArray(arr, i+1);
    }
    public static void main(String args[]){
        int []arr={1,2,3,4,5};
        swapArray(arr, 0);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        }
}
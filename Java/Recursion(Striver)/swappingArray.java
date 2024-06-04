public class swappingArray{

    // with two hands i.e l and r
    public static void swapArray(int []arr,int l,int r){
        if(l>=r){
            return;
        }
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        swapArray(arr, l+1, r-1);
    }
    public static void main(String args[]){
        int arr[]={1,2,3,4,5};
        swapArray(arr,0, 4);
        for (int index = 0; index < arr.length; index++) {
            System.out.print(arr[index]+" ");
        }
    }
}
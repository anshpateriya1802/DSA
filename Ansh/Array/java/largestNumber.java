class largestNumber {
    public int largestElement(int[] nums) {
        int max=nums[0];
        for(int i:nums){
            if (i>max){
                max=i;
            }
        }
        return max;
    
    }
    public static void main(String[]args){
        largestNumber s=new largestNumber();
        int[]arr={1,4,2,5,3,6,9,11,7,8};
        int result=s.largestElement(arr);
        System.out.println(result);
    }
}

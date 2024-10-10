class LinearSearch{
    public int LinearSearch(int[] nums,int target){
        
        for(int i=0;i<nums.length;i++){
            if (nums[i]==target){return i;}
            
        }
        return -1;

    }
    public static void main(String[]args){
        int[]nums={1,2,3,4,5,6};
        int target=5;
        LinearSearch sol=new LinearSearch();
        int result=sol.LinearSearch(nums, target);
        System.out.println(result);
        System.out.println("Hello");
    }

}
import java.util.Scanner;

class Sol2{
    public int max(int nums[]){

        int max, flag1, flag2;

        max = flag1 = flag2 = 0;

        for(int i=0; i<nums.length; i++){
           if(nums[i]>0){
                flag1 = 1;
                for(int j=0; j<nums.length; j++){
                    if(nums[i]-(nums[i]*2) == nums[j]){
                        flag2 = 1;
                        if(nums[i]>max){
                            max=nums[i];
                        }
                    }
                }
           }
        }

        if(flag1 == 0 || flag2 == 0){
            return -1;
        }

        return max;
    }
}

public class FindMax {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter array size: ");
        int n = sc.nextInt();

        int[] nums = new int[n];

        System.out.println("Enter array elements: ");

        for(int i=0;i<n;i++){
            nums[i]= sc.nextInt();
        }

        Sol2 s1 = new Sol2();
        int max = s1.max(nums);

        System.out.println(max);

    }
}

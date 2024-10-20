//greedy algorithm

public class MaxHapp {
    public static void main(String[] args) {
        
        int happiness[] = {1,1,1,1,1};

        int k = 2;

        int[] max = new int[2];

        for(int i = 0; i<k; i++){
            max[i] = 0;
        }

        int j = 0;

        while(j<k){

            int max_index = 0;

            for(int i = 0; i<happiness.length; i++){
                if(max[j] < happiness[i]){
                    max[j] = happiness[i];
                    max_index = i;
                }
            }

            happiness[max_index] = 0;
        
            for(int i=0; i<happiness.length; i++){
                if(happiness[i] > 0){
                    happiness[i] = happiness[i] - 1;
                }
            }

            j++;
        }

        long sum = 0;

        for(int i = 0; i<k; i++){
            sum += max[i];
        }

        System.out.println("\n" + sum);
    }
}

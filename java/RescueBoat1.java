public class RescueBoat1 {
    public static void main(String[] args) {
        
        int limit = 8;

        int people[] = {7,3,2};

        int temp;

        for (int i = 0; i < people.length; i++) {
            temp = people[i];
            int j = i - 1;

            while (j >= 0 && people[j] > temp) {
                people[j + 1] = people[j];
                j--;
            }

            people[j + 1] = temp;
        }

        for(int i=0; i<people.length; i++){
            System.out.print(people[i] + " ");
        }

        int count = 0;

        for (int i = 0; i < people.length; i++) {
            if (people[i] == limit) {
                people[i] = -1;
                count++;
            }
        }

        for (int i = 0; i < people.length; i++) {
            for (int j = people.length-1; j >= 0; j--) {
                if(i == j){
                    break;
                }
                if (people[i] != -1 && people[j] != -1) {
                    if (people[i] + people[j] <= limit) {
                        people[i] = people[j] = -1;
                        count++;
                        break;
                    }
                }
            }
        }

        for(int i = 0; i<people.length; i++){
            if(people[i] != -1){
                count++;
                people[i] = -1;
            }
        }
        
        System.out.println("\n" + count);
        
    }
}

public class RescueBoat {
    public static void main(String[] args) {

        int arr[] = { 3,5,3,4 };

        int max = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        System.out.println("limit: " + max);

        int temp;

        for (int i = 0; i < arr.length; i++) {
            temp = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = temp;
        }

        // arr[] = {3,3,4}

        int count = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == max) {
                arr[i] = -1;
                count++;
            }
        }

        System.out.println(count);

        for (int i = 0; i < arr.length - count; i++) {
            System.out.print(arr[i] + " ");
        }

        // arr[] - count = {1,2,2}
        // arr[].length - count = 3 

        for (int i = 0; i < arr.length - count; i++) {
            for (int j = arr.length - count - 1; j >= 0; j++) {
                if(i == j){
                    break;
                }
                if (arr[i] != -1 && arr[j] != -1) {
                    if (arr[i] + arr[j] <= max) {
                        arr[i] = arr[j] = -1;
                        count++;
                    }
                    break;
                }
            }
        }


        for(int i = 0; i<arr.length-count; i++){
            if(arr[i] != -1){
                count++;
            }
        }

        System.out.println("\n");
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i] + " ");
        }

        System.out.println("\n" + count);

    }
}

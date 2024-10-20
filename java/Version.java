public class test33 {
    public static void main(String[] args) {

        String version1 = "0.1";
        String version2 = "1.0";

        version1= version1 + ".";
        version2 = version2 + ".";

        int r=0;
        int s=0;

        for (int i = 0; i < version1.length(); i++){
            if(version1.charAt(i) == '.'){
                r++;
            }
        }  

        for (int i = 0; i < version2.length(); i++){
            if(version2.charAt(i) == '.'){
                s++;
            }
        } 
        
        System.out.println("No. of revisions of version1: " + r);
        System.out.println("No. of revisions of version2: " + s);  

        int[] num1 = new int[r];
        int[] num2 = new int[s];

        StringBuffer s1 = new StringBuffer();
        StringBuffer s2 = new StringBuffer();        

        int j=0;
        int k=0;

        for (int i = 0; i < version1.length() ; i++) {

                if (version1.charAt(i) != '.') {
                    s1.append(version1.charAt(i));
                }
                else{                
                    num1[j] = Integer.valueOf(s1.toString());
                    s1.delete(0, s1.length());
                    j++;
                }
            }

        for (int i = 0; i < version2.length() ; i++) {

                if (version2.charAt(i) != '.') {
                    s2.append(version2.charAt(i));
                }
                else{                
                    num2[k] = Integer.valueOf(s2.toString());
                    s2.delete(0, s2.length());
                    k++;
                }
            }

        for(int i = 0; i<r ; i++){
            System.out.println(num1[i]);
        }

        for(int i = 0; i<s ; i++){
            System.out.println(num2[i]);
        }


        if(r<s){
            int flag = 0;
            int flag1 = 0;

            int i = 0;
            for(i=0; i<r; i++){
                if(num1[i] != num2[i]){
                    flag = 1;

                    if(num1[i] < num2[i]){
                        System.out.println(-1);
                    }
                    
                    else{
                        System.out.println(1);

                    }
                    break;
                }
            }

            if (flag == 0){

                while(i<s){
                    flag1 = 0;
                    if(num2[i] == 0){
                        flag1 = 1;
                    }

                    else{
                        System.out.println(-1);
                        break;
                    }
                    i++;
                }

                if(flag1 == 1){
                    System.out.println(0);
                }
            }

        }
        
        else if(r>s){
            int flag = 0;
            int flag1 = 0;

            int i = 0;
            for(i=0; i<s; i++){
                if(num1[i] != num2[i]){
                    flag = 1;

                    if(num1[i] < num2[i]){
                        System.out.println(-1);
                    }
                    
                    else{
                        System.out.println(1);
                    }
                    break;
                }
            }

            if (flag == 0){

                while(i<r){
                    flag1 = 0;
                    if(num1[i] == 0){
                        flag1 = 1;
                    }

                    else{
                        System.out.println(1);
                        break;
                    }
                    i++;
                }

                if(flag1 == 1){
                    System.out.println(0);
                }
            }

            
        }

        else{
            int flag = 0;

            for(int i = 0; i<r; i++){
                if(num1[i] != num2[i]){
                    flag = 1;
                    if(num1[i] < num2[i]){
                        System.out.println(-1);
                    }
                    else{
                        System.out.println(1);
                    }
                    break;
                }
            }

            if(flag == 0){
                System.out.println(0);
            }
        }


    }
}

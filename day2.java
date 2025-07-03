public class day2 {
    public static void main(String[] args) {
        int[] arr1 = { 1, 2, 3, 4, 5, 6 };
        int[] arr2 = { 5, 6, 7, 8, 9, 10, 11 };
        // int sum1 = 0;
        // int sum2 = 0;

        // for (int i = 0; i < arr1.length; i++) {
        // sum1 += arr1[i];
        // }
        // System.out.println(sum1);
        // for (int i = 0; i < arr2.length; i++) {
        // sum2 += arr2[i];
        // }
        // System.out.println(sum2);

        int[] merge = new int[arr1.length + arr2.length];
        for (int i = 0; i < merge.length; i++) {
            if (i < arr1.length) {
                merge[i] = arr1[i];
            } else {
                merge[i] = arr2[i - arr1.length];
            }
        }

        // for (int i = 0; i < arr1.length + arr2.length; i++) {
        // System.out.println(merge[i]);
        // }

        // MAX VALUE
        // int max = merge[0];
        // for (int i = 0; i < merge.length; i++) {
        //     if (max < merge[i]) {
        //         max = merge[i];
        //     }
        // }
        // System.out.println(max);

        // INTERSECTION
        // for (int i = 0; i < arr1.length; i++) {
        //     for (int j = 0; j < arr2.length; j++) {
        //         if (arr1[i] == arr2[j]) {
        //             System.out.println(arr1[i]); 
        //         }
        //     }
        // }

        // UNIQUE ELEMENTS
        for (int i = 0; i < arr1.length; i++) {
            boolean flag = false; 
            for (int j = 0; j < arr2.length; j++) {
                if (arr1[i] == arr2[j]) {
                    flag = true;
                    break;
                    // System.out.println(arr2[j]); 
                }
            }

            if(!flag) {
                System.out.println(arr1[i]);
                System.out.println(arr2[i]);
            }
        }

    }
}

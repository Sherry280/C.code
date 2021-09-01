package Test09.Test0831;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Solution2 {
    public static int maxBox(int[] array,int c){
        //装入数组中的最大数量
        Arrays.sort(array);
        int sum=0;
        int i=0;
        for(;i<array.length;i++){
            if((sum+array[i])<=c){
                sum+=array[i];
            }
        }
        return i-1;
    }
    /**-1
     * 将一个数组里面的元素都变成独一无二的
     */
    public static int minCountArray(int[] array){
        int count=0;
        Set<Integer> set=new HashSet<>();
        for(int i=0;i<array.length;i++){
            while(set.contains(array[i])){
                array[i]++;
                count++;
            }
            //遍历每一个数字，如果set种存在，那么就+1再去判断
            if(!set.contains(array[i])){
                set.add(array[i]);
            }else{
                break;

            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext()){
            String s=sc.nextLine();
            int n=sc.nextInt();
            String[] split = s.split(",");
            int[] array=new int[split.length];
            for(int i=0;i<split.length;i++){
                array[i]=Integer.parseInt(split[i]);
            }
            System.out.println(maxBox(array,n));
        }

    }
}

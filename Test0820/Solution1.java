package Test0813.Test0820;

public class Solution1 {
    /**
     *判断一个数字是否是4的幂次方
     */
    public static boolean isPrise(int n){
        return n>0&&(n&n-1)==0&&(n&0x55555555)==n;
    }
    public static boolean isPrise2(int n){
        return n>0&&(n&n-1)==0&&(n&0xaaaaaaaa)==0;
    }
    public static boolean isPrise3(int n){
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        if(n%4!=0){
            return false;
        }
        return n>0&&isPrise3(n/4);
    }
    public static boolean isPrise4(int n){
        return n>0&&(n&n-1)==0&&(n-1)%3==0;
    }
    public static void main(String[] args) {
        System.out.println(isPrise4(18));

    }
}

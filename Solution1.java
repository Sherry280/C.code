package Test09.Test0831;

import java.util.ArrayList;
import java.util.List;

public class Solution1 {
    /**
     * 将字符串进行翻转
     * 将整个字符串按照每个单词进行分割，分割之后再进行翻转
     * "MyNameIsTom"  "yMemaNsImoT"
     * 思路：1.大写65-90  小写是97-122
     */
    public static String reverse_word (String words) {
        if(words==null||words.length()==0){
            return null;
        }
        List<String> list=new ArrayList<>();
        int left=0;
        int right=0;
        char[] chars = words.toCharArray();
        for(int i=0;i<chars.length-1;i++){
            if(chars[i]>=65&&chars[i]<=90){
                //不断向后后，直到找到下一个大写字母
                left=i;
                right=i;
            }else{//MyNameIsTom
                //此处为小写字母
                right++;

            }
            if(chars[i+1]>=65&&chars[i+1]<=90){
                list.add(words.substring(left,right+1));

            }
            if(right==chars.length-2){
                list.add(words.substring(left,right+2));
            }


        }
        String ret="";
        for(String s:list){
            for(int i=s.length()-1;i>=0;i--){
                ret+=s.charAt(i);
            }

        }
        return ret;


    }

    public static void main(String[] args) {
        String s="MyNameIsTom";
        System.out.println(reverse_word(s));
    }
}

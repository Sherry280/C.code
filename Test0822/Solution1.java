package Test0813.Test0822;

import Tree.TreeNode;

import java.util.*;

public class Solution1 {
    /**
     * 二叉树的层序打印
     */
    public ArrayList<ArrayList<Integer>> Print(TreeNode root) {
        ArrayList<ArrayList<Integer>> res=new ArrayList<>();
        if(root==null){
            return res;
        }
        int level=0;
        Queue<TreeNode> queue=new LinkedList<>();
        queue.add(root);
        while(!queue.isEmpty()){
            level++;
            int size=queue.size();
            int[] array=new int[size];
            ArrayList<Integer> list=new ArrayList<>();
            for(int i=0;i<size;i++){
                TreeNode node=queue.poll();
                array[i]=node.val;
                if(node.left!=null){
                    queue.add(node.left);
                }
                if(node.right!=null){
                    queue.add(node.right);
                }
            }
            if(level%2!=0){
                //正着打印
                for(int i=0;i<size;i++){
                    list.add(array[i]);
                }
            }else{
                for(int i=size-1;i>=0;i--){
                    list.add(array[i]);
                }
            }
            res.add(list);

        }
        return res;


    }
    public static void main(String[] args) {
        HashMap<Integer,Integer> map=new HashMap<>();
        map.put(1,1);
        map.put(2,2);
        int value=0;
        for(Map.Entry<Integer,Integer> m:map.entrySet()){
            if(m.getKey()==3){
                value=m.getValue();
            }
        }

    }
}

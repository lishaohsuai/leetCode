/*
 * @Author: hduwyx
 * @Date: 2021-08-20 15:24:35
 * @LastEditTime: 2021-08-20 15:31:56
 * @Descripttion: your project
 * @FilePath: /JTest/src/Solution.java
 */
import java.util.*;
class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> s = new HashSet<Integer>();
        for(int it : nums) {
            if(s.contains(it)) {
                return true;
            }else{
                s.add(it);
            }
        }
        return false;
    }
    private static void main() {
        
    }
}
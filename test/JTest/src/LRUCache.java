/*
 * @Author: hduwyx
 * @Date: 2021-08-20 16:50:27
 * @LastEditTime: 2021-08-20 17:26:18
 * @Descripttion: your project
 * @FilePath: /JTest/src/LRUCache.java
 */
import java.util.*;
class LRUCache {
    private int cap;
    private Map<Integer, Integer> map = new LinkedHashMap<>();

    public LRUCache(int cap_) {
        cap = cap_;
    }

    public int get(int key) {
        if(map.keySet().contains(key)) {
            int value = map.get(key);
            map.remove(key);
            map.put(key, value);
            return value;
        }
        return -1;
    }
    public void put(int key, int value) {
        if(map.keySet().contains(key)) {
            map.remove(key);
        }
        else if(map.size() == cap) {
            map.remove(map.entrySet().iterator().next().getKey());
        }
        map.put(key, value);
        //System.out.println(map.entrySet().iterator().next().getKey());
    }
    private static void main() {
        
    }
};
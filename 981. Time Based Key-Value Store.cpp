/*


Input
["TimeMap", "set", "get", "get", "set", "get", "get"]
[[], ["foo", "bar", 1], ["foo", 1], ["foo", 3], ["foo", "bar2", 4], ["foo", 4], ["foo", 5]]
Output
[null, null, "bar", "bar", null, "bar2", "bar2"]

Explanation
TimeMap timeMap = new TimeMap();
timeMap.set("foo", "bar", 1);  // store the key "foo" and value "bar" along with timestamp =1. timeMap.get("foo", 1);         // return "bar"
timeMap.get("foo", 3);         // return "bar",
since there is no value corresponding to foo at timestamp 3 and timestamp 2, then the only value is at timestamp 1 is "bar".
timeMap.set("foo", "bar2", 4); // store the key "foo" and value "bar2" along with timestamp = 4.
timeMap.get("foo", 4);         // return "bar2"
timeMap.get("foo", 5);


*/


class TimeMap {
public:
    /** Initialize your data structure here. */
    TimeMap() {
        ;
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if( !mp.count( key ) ) return "";
        auto it = mp[key].upper_bound( timestamp );
        if( it == mp[key].begin() ) return "";
        --it;
        return it->second;
    }
private:
    map<string, map<int, string>> mp;
};
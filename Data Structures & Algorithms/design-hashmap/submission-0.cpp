class MyHashMap {
   public:
    vector<vector<int>> mp;
    MyHashMap() {}

    void put(int key, int value) {
        for (auto& p : mp) {
            if (p[0] == key) {
                p[1] = value;
                return;
            }
        }
        mp.push_back({key, value});
    }

    int get(int key) {
        int val = -1;
        for (int i = 0; i < mp.size(); i++) {
            if (mp[i][0] == key) {
                val = mp[i][1];
            }
        }
        return val;
    }

    void remove(int key) {
        int index = 0;
        for (int i = 0; i < mp.size(); i++) {
            if (mp[i][0] != key) {
                mp[index++] = mp[i];
            }
        }
         mp.resize(index);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
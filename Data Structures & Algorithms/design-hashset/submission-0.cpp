class MyHashSet {
public:
    vector<int> hash;
    MyHashSet() {
    }
    
    void add(int key) {
        hash.push_back(key);
    }
    
    void remove(int key) {
        int index = 0;
        for(int i = 0;i<hash.size();i++)
        {
            if(hash[i] != key)
            {
                hash[index++] = hash[i];
            }
        }
        while(index<hash.size())
        {
            hash.pop_back();
        }
    }
    
    bool contains(int key) {
        for(int i = 0;i<hash.size();i++)
        {
            if(hash[i]==key)
            {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
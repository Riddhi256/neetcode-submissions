class DynamicArray {
public:

    vector<int> array;
    DynamicArray(int capacity) {
        array.reserve(capacity);
    }

    int get(int i) {
        return array[i];
    }

    void set(int i, int n) {
        array[i] = n;
    }

    void pushback(int n) {
        array.push_back(n);
    }

    int popback() {
        int val = array.back();
        array.pop_back();
        return val;
    }

    void resize() {
        int n = array.size();
        array.resize(n*2);
    }

    int getSize() {
        return array.size();
    }

    int getCapacity() {
        return array.capacity();
    }
};

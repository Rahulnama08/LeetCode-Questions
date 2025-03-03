class RecentCounter {
    queue<int>Queue;
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        Queue.push(t);
        while(!Queue.empty() && t - 3000 > Queue.front()){
            Queue.pop();
        }
        return Queue.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
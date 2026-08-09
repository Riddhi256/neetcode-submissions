class MyCalendar {
public:
vector<vector<int>> calendar;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        if(calendar.size()==0)
        {
            calendar.push_back({startTime,endTime});
            return true;
        }
        else{
            // sort(calendar.begin(),calendar.end());
            for(auto &it : calendar)
            {
                int start = it[0];
                int end = it[1];
                if(startTime<end && endTime>start)
                {
                    return false;
                }
            }
            calendar.push_back({startTime, endTime});
            return true;
        }
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */
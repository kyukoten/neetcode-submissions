class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> map;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        vector<pair<int,string>> &temp  = map[key];
        if (temp.size()==0)
            return "";
        int l=0;
        int r=temp.size()-1;
        int mid;
        while(l<=r)
        {
            mid = l + ((r-l)/2);    
            if (temp[mid].first==timestamp)
                return temp[mid].second;
            else if (temp[mid].first>timestamp)
                r = mid-1;
            else
                l = mid+1;
        }
        if (temp[mid].first<timestamp)
            return temp[mid].second;    
        else if(mid-1>=0)
            return temp[mid-1].second;    
        return "";  
    }
};
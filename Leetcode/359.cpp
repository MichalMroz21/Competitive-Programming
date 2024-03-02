class Logger {
public:

    unordered_map<string, int> timestampMap{};

    Logger() {}
    
    bool shouldPrintMessage(int timestamp, string message) {
        
        bool shouldPrint = timestampMap.find(message) == timestampMap.end() ||
            timestamp >= timestampMap[message];

        if(shouldPrint) timestampMap[message] = timestamp + 10;

        return shouldPrint;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */
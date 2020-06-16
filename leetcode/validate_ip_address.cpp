class Solution {
public:
    string validIPAddress(string IP) {
        istringstream is(IP);
        string s = "";
        int a = 0;
        if (IP.find(':') == string::npos) 
        {
            while (getline(is, s, '.')) 
            {
                ++a;
                if (a > 4 || s.empty() || (s.size() > 1 && s[0] == '0') || s.size() > 3) 
                    return "Neither";
                for (char c : s) 
                {
                    if (c < '0' || c > '9') 
                        return "Neither";
                }
                int v = stoi(s);
                if (v < 0 || v > 255) 
                    return "Neither";
            }
            return (a == 4 && IP.back() != '.') ? "IPv4" : "Neither";
        } 
        else 
        {
            while (getline(is, s, ':')) {
                ++a;
                if (a > 8 || s.empty() || s.size() > 4) 
                    return "Neither";
                for (char c : s) 
                {
                    if (!(c >= '0' && c <= '9') && !(c >= 'a' && c <= 'f') && !(c >= 'A' && c <= 'F')) 
                        return "Neither";
                }
            }
            return (a == 8 && IP.back() != ':') ? "IPv6" : "Neither";
        }
    }
};

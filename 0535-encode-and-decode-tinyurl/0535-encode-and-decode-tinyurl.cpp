class Solution {
public:

 map<string, string> mp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrlPrefix = "http://tinyurl.com/";
        string shortUrlPostfix = to_string(rand());
        string shortUrl = shortUrlPrefix + shortUrlPostfix;
        mp[shortUrl] = longUrl;
        return shortUrl;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string longUrl = mp[shortUrl];
        return longUrl;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
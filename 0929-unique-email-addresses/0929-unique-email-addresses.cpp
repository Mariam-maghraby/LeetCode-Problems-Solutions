class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        for(auto& email : emails){
            size_t pos = email.find('@');
             if(email.find('+')<pos){
                size_t posPluse = email.find('+');
                email.erase(email.begin()+posPluse, email.begin()+pos);
            }
            pos = email.find('@');
            if(email.find('.')<pos){
                email.erase(remove(email.begin(), email.begin()+pos, '.'),email.begin()+pos);
            }
        }
        sort(emails.begin(), emails.end());
        int uniqueCount = unique(emails.begin(), emails.end()) - emails.begin();
        return uniqueCount;

    }
};
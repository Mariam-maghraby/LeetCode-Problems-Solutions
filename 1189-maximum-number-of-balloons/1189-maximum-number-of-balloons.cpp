class Solution {
public:
    int maxNumberOfBalloons(string text) {
       vector<float> count(5);
        for(int i=0; i<text.size(); i++){
            if(text[i] == 'b'){
                count[0]++;
            }
            else{
                if(text[i] == 'a')
                count[1]++;

                else {
                    if (text[i] == 'l')
                        count[2] = count[2] + 0.5;

                    else {
                        if (text[i] == 'o')
                            count[3] = count[3] + 0.5;

                        else {
                            if (text[i] == 'n')
                                count[4]++;

                        }

                    }
                }
            }
        }
        return int(*min_element(count.begin(), count.end()));
    }
};
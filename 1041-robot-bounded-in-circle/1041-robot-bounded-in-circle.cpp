class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<char> dirs = {'N','E', 'S', 'W'};
        int x = 0;
        int y = 0;
        char dir = 'N';
        pair<int, int> pos ={x, y};
        bool res= false;

        for(int i=0; i<instructions.size(); i++){
            auto it = find(dirs.begin(), dirs.end(), dir);
            int indx = it - dirs.begin();
            switch(instructions[i]){
                case 'R':
                    indx = (indx+1) % dirs.size();
                    dir=dirs[indx];
                    break;
                case 'L':
                    indx= (indx + dirs.size() - 1) % dirs.size();
                    dir= dirs[indx];
                    break;
                case 'G':
                    switch(dir){
                        case 'E':
                            pos.first++;
                            break;
                        case 'W':
                            pos.first--;
                            break;
                        case 'S':
                            pos.second--;
                            break;
                        case 'N':
                            pos.second++;
                            break;
                            
                    }
                    break;
                default:
                    break;
                
            }
        }
        if(pos == pair<int, int>{0, 0}|| dir!='N'){
            res= true;
            return res;
        };
    
    return res;
    }
};
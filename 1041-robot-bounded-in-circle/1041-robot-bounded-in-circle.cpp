class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<char> dirs = {'N','E', 'S', 'W'};

        int x = 0;
        int y = 0;
        char dir = 'N';
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
                            x++;
                            break;
                        case 'W':
                            x--;
                            break;
                        case 'S':
                            y--;
                            break;
                        case 'N':
                            y++;
                            break;
                            
                    }
                    break;
                default:
                    break;
                
            }
        }
        if((x==0 && y==0)|| dir!='N'){
            res= true;
            return res;
        };
    
    return res;
    }
};
class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<char> dirs = {'N','E', 'S', 'W'};

        int x_1 = 0;
        int y_1 = 0;
        char dir_1 = 'N';
        bool res= false;

        for(int i=0; i<instructions.size(); i++){
            auto it = find(dirs.begin(), dirs.end(), dir_1);
            int indx = it - dirs.begin();
            switch(instructions[i]){
                case 'R':
                    indx = (indx+1) % dirs.size();
                    dir_1=dirs[indx];
                    break;
                case 'L':
                    indx= (indx + dirs.size() - 1) % dirs.size();
                    dir_1= dirs[indx];
                    break;
                case 'G':
                    switch(dir_1){
                        case 'E':
                            x_1++;
                            break;
                        case 'W':
                            x_1--;
                            break;
                        case 'S':
                            y_1--;
                            break;
                        case 'N':
                            y_1++;
                            break;
                            
                    }
                    break;
                default:
                    break;
                
            }
        }
        if((x_1==0 && y_1==0)|| dir_1!='N'){
            res= true;
            return res;
        };
    
    return res;
    }
};
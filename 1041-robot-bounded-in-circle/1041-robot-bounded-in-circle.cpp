class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<char> dirs = {'N','E', 'S', 'W'};
        int x = 0;
        int y = 0;
        char dir = 'N';
        pair<int, int> pos ={x, y};
        static int dx[255]={0};
        static int dy[255]={0};
        dx['E']=1;
        dx['W']=-1;
        dy['N']=1;
        dy['S']=-1;
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
                    pos.first += dx[dir];
                    pos.second += dy[dir];
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
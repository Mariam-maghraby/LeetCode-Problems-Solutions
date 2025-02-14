class Solution {
public:
string addBinary(string a, string b) {
        string res;
        int acc = 0;
        int maxSz = a.size()> b.size()? a.size(): b.size();
        int aSz = a.size();
        int bSz = b.size();
        if(a.size()> b.size()){
            for(int i=0; i<maxSz-bSz; i++){
                b.insert(i, "0");
            }
        }if(a.size()< b.size()){
            for(int i=0; i<maxSz-aSz; i++){
                a.insert(i, "0");
            }
        }
        for(int i=0; i<maxSz; i++){
            res.insert(i, "0");
        }
        while(maxSz){
            if(a[maxSz-1]== b[maxSz-1]&& a[maxSz-1] == '0'){
                    res[maxSz-1]= '0';
            }
            if(a[maxSz-1]== b[maxSz-1]&& a[maxSz-1] == '1'){
                if(maxSz-1 ==0){
                    acc++;
                }else{
                    if(a[maxSz-2] == '0'){
                        if(acc>=1) {
                            res[maxSz - 1] = '1';
                            acc--;
                        }
                        a[maxSz-2] = '1';

                    }else{
                        if(b[maxSz-2] == '0'){
                            if(acc>=1) {
                                res[maxSz - 1] = '1';
                                acc--;
                            }
                            b[maxSz-2] = '1';
                        }else{
                            if(acc>=1){
                                res[maxSz-1] ='1';
                            }else{
                                res[maxSz-1] ='0';
                                acc++;
                            }
                        }

                    }
                }

            }
            if(a[maxSz-1] != b[maxSz-1]){
                    res[maxSz-1] ='1';
            }
            maxSz--;
        }

        int i =0;
        while(acc>1){
            res[i] = '1';
            i++;
            acc--;
        }
        if(acc){
            res.insert(i, "1");
            acc--;
        }
        for(int i=0; i< res.size(); i++){
            if(res[i] == '1'){
                res = res.substr(i);
                break;
            }
        }

        return res;
    }
};
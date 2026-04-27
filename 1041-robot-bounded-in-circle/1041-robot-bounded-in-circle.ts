function isRobotBounded(instructions: string): boolean {
    const dirs = ["N","E", "S", "W"]

    const x_0 = 0;
    const y_0 = 0;
    const dir_0 = "N";

    let x_1 = x_0;
    let y_1 = y_0;
    let dir_1 = dir_0;

    let move= "";
    let res= false;

        for(let i=0; i<instructions.length; i++){
            let indx = dirs.indexOf(dir_1);
            if(instructions[i] === "R"){
                if(indx === 3){
                    indx = 0;
                }else{
                    indx= indx+1;
                }
                dir_1=dirs[indx];
            }else{
                if(instructions[i] === "L"){
                    if(indx ===0){
                        dir_1= dirs[dirs.length-1];
                    }else{
                        indx= indx-1;
                        dir_1= dirs[indx];
                    }
                }else{
                    if(dir_1==="E"){
                        x_1++;
                    }else{
                        if(dir_1==="W"){
                            x_1--;
                        }else{
                            if(dir_1==="S"){
                                y_1--;
                            }else{
                                y_1++;
                            }
                        }
                    }
                }
            }
        }
        if((x_1===0 && y_1===0)|| dir_1!="N"){
            res= true;
            return res;
        };
    
    return res;
};
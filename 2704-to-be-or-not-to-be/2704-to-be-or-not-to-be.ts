type ToBeOrNotToBe = {
    toBe: (val: any) => boolean;
    notToBe: (val: any) => boolean;
};

function expect(val: any): ToBeOrNotToBe {
    return {
        toBe: (v: any) => {
            if(v === val)
                return true;
            else {
                throw new Error("Not Equal") 
            }
        },
        notToBe: (v: any) => {
            if(v !== val)
                return true;
            else {
                throw new Error("Equal") 
            }
        }
    }
    
    
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
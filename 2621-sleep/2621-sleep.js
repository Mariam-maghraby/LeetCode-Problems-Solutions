/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
   const start = new Date();
   while(new Date()- start < millis){

   }
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */
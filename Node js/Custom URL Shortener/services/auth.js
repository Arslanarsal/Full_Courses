const sessionId  = new Map();

const setId  = function(id , user){
    sessionId.set(id  , user);
}

const getId  = function(id){
   return sessionId.get(id);
}

module.exports = {
    setId , 
    getId
}
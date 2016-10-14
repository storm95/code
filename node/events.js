var EventEmitter = require('events').EventEmitter;

var logger = new EventEmitter();

logger.on('error', function(message){
    console.log('ERR: ' + message);
});


logger.on("warn", function(msg){
    console.log("WARNING! " + msg);
});

logger.on("info" , function(msg){
    console.log("Info : " + msg );
});


logger.emit('info', "milk arrived");

logger.emit('warn', "milk spells different! ");


logger.emit('error' , 'Eggs cracked ' );
logger.emit('error' , 'Spilled Mil ' );



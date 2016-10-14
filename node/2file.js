var fs = require('fs');

fs.readFile('/home/shrey/code/node/hello.js', function(err,data){
    document.write(data);
});

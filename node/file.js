var fs = require('fs');
var http = require('http');

http.createServer(function(request,response){
    response.writeHead(200);
    
    fs.readFile('/home/shrey/code/node/hello.js', function(err,data){
        response.write(data);
        response.end();
    });
}).listen(8080);

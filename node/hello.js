#!/home/shrey/.nvm/versions/node/v4.4.2/bin/node

var http = require('http'); //way to include modules

http.createServer(function(request, response){
    response.writeHead(200); //status code in header
    response.write("Hello, this is dog"); // reposnse body 
    response.end();
}).listen(8080);

console.log("listening on port 8080 ... ");




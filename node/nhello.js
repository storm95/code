var http   = require('http');

http.createServer(function(request,response){
    response.writeHead(200);
    console.log("request sent");
    response.write("Hello, this is dog .. running ... ");
    setTimeout(function(){
        response.write("Dog is done");
        response.end();
    }, 5000);
}).listen(8080);
console.log("listening on port 8080... ");


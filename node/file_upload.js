var fs = require('fs');
var http = require('http');

http.createServer(function(request,response){
    var newfile = fs.createWriteStream("readme_copy.md");
    request.pipe(newfile);

    request.on("end",function(){
        response.end("uploaded your file!");
    });
}).listen(8080);


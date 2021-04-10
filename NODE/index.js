var http = require("http");

http.createServer(function (request, response) {

    response.writeHead(200, {
        'content-Type':

            'text/plain'
    });

    response.end('Hello World And This Is From My Own Sever\n');

}).listen(2000);

console.log('server running at 2000');

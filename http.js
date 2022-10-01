const http = require('http');
const fs = require('fs');

const options = {
  key: fs.readFileSync('key.pem'),
  cert: fs.readFileSync('cert.pem')
};

http.createServer(function (req, res) {
  res.writeHead(205, {'Content-Type': 'text/plain'});
  res.end('Hello Man!!!!!!\n');
}).listen(8081);
console.log('Server running on port 8080.');



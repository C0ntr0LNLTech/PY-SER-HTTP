# NLTech.nology
# Author :: C0ntr0L
# SHTTPServer v1.0
#
#
#
# Developer's Commnets :: 
# This is the best that i can to keep it simple an clean 
# for sure i have to add some powershell commands (in the 
# Windows section) for desable the firewall before run the
# server. You may have to change the RPORT .

import SimpleHTTPServer 
import SocketServer 
import platform 



def linux():
    PORT = 8000 #OPTIONALY I use 8000
    Handler = SimpleHTTPServer.SimpleHTTPRequestHandler 
    httpd = SocketServer.TCPServer(('', PORT), Handler) 
    httpd.serve_forever()   

def win():
    PORT = 8000 #I have the filling that Windows already use this port 
    Handler = SimpleHTTPServer.SimpleHTTPRequestHandler 
    httpd = SocketServer.TCPServer(('', PORT), Handler) 
    httpd.serve_forever()

def osx():
    # I have no comments for MacOS
    PORT = 8000
    Handler = SimpleHTTPServer.SimpleHTTPRequestHandler 
    httpd = SocketServer.TCPServer(('', PORT), Handler) 
    httpd.serve_forever()

if platform.system() == "Linux" :
    linux() 
else:
    if platform.system() == "Windows" :
        win()
    else :
       if platform.system() == "Darwin" :
           osx()
       else :
            print ("something gone wrong ")
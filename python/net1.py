#!/usr/bin/python2

import socket 

ip = "192.168.156.233"
portno = 1994
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM, 0)
s.bind((ip,portno))
while True:
    x= s.recvfrom(100)
    print "Friend : " +  x[0] 



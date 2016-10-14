#!/usr/bin/python2
import socket

ip = "192.168.156.233"
portno = 1994
s=socket.socket(socket.AF_INET, socket.SOCK_DGRAM, 0)
while True:
    data = raw_input("ME : ")
    s.sendto(data,(ip,portno))
    #print "data sent"

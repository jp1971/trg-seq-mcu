#include <WProgram.h>

//Configuration settings for your WiFly and WiFi network

//WLAN settings
char auth[2] = "3";
char *key = "sweetberrywine3.0";
char *ssid = "Roomies$3.0";

//IP settings
char *proto = "2";          //set IP protocol
char *host = "10.0.1.13";    //IP address of remote host
char *remote = "2000";      //set the remote port number on which the host is listening
char *local = "2000";      //set the port number on which the WiFly module will listen

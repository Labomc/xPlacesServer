xPlacesServer
=============

Primary application to create an xPlaces network. It works as a rendez-vous server and it announce that a new node joined the network to the others. Available in C++ pure code and as Qt project.

# Files and folders structure:

  * Cpp
  * Qt
  * Tutorials

***
## Cpp 
It contains the application code as Cpp project.
## Qt 
It contains the application code as Qt project.
## Tutorials 
It contains some tutorials about how to compile the project.

# Short guide
  * Compile a project, any version.
  * Run the compiled application, passing few parameters, as explained in the following template:<BR>
    *./xpServerApp -s [LOCAL_IP:SERVICE_PORT] -i [ANNOUNCE_INTERVAL_TIME] -p [SERVICE_PORT] -n [NODE_NAME]*<BR>
<b>SERVICE_PORT</b> is an integer, user defined, that indicates the UDP port where the application runs.<BR>
<b>LOCAL_IP:SERVICE_PORT</b> is the couple of running machine local IP and the SERVICE_PORT, user defined and typically is 4444.<BR> 
<b>ANNOUNCE_INTERVAL_TIME</b> is an integer that indicates how many seconds the announce service of the application forwards the node list to the network.<BR>
<b>NODE_NAME</b> is a string that indicates the name used by the application to announce itself on the xPlaces network.
  * The server is running and its service is available at the address LOCAL_IP:PORT. Run the other nodes of the network usign LOCAL_IP:PORT as server address. 

# Other infos
To well understand how xPlaces protol works, refer to the documentation contained on the <i>Documentation</i> folder on the repository https://github.com/Labomc/libxplaces.

*Gian Maria Simbula*
simbula@crs4.it

*Simone Kalb*
kalb@crs4.it

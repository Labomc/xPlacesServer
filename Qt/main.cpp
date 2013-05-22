/*
 * main.cpp
 *
 *  Created on: May 28, 2010
 *      Author: Gian Maria Simbula
 *      Email: simbula@sardegnaricerche.it
 */

#include "MyServer.h"
#include <stdlib.h>
#include <sstream>

int main(int argc, char **argv)
{
//    int port;
//    int announceInterval;
//    std::string serverAddress = xpNetwork::getInstance()->getIpPort();
//    serverAddress.erase(serverAddress.length()-1);
//
//    if (argc == 3) {
//    	port = atoi(argv[1]);
//    	announceInterval = atoi(argv[2]);
//    	serverAddress.append(argv[1]);
//    }
//    else {
//    	port = 18000;
//    	announceInterval = 5;
//    	std::ostringstream v;
//    	v << port;
//    	serverAddress.append(v.str());
//    }

	fprintf(stdout, "Endianess: %s\n", xpToolSet::testBigEndian() == 1 ? "BIG ENDIAN" : "LITTLE ENDIAN");

    xpInitParameters * parameters = xpNetwork::getInstance()->parseInitParameters(argc, argv);

	fprintf(stderr, "\n!!! ---> xPlaces Server Address %s <--- !!!\n\n", parameters->serverIpPort.c_str());

    xpDescriptor *desc = new xpDescriptor(parameters->nodeName, "APP", xpPropertyList());
    MyServer *server = new MyServer(desc);

	xpNetwork::getInstance()->init(parameters->nodePort, parameters->serverIpPort, parameters->announceInterval);
	xpNetwork::getInstance()->publish(server);

	while(1) {
		sleep(10000);
	}

    return 1;

    return 1;
}

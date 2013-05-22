#include "MyServer.h"
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    xpInitParameters * parameters = xpNetwork::getInstance()->parseInitParameters(argc, argv);

	fprintf(stderr, "\n!!! ---> xPlaces Server Address %s <--- !!!\n\n", parameters->serverIpPort.c_str());

    xpDescriptor *desc = new xpDescriptor(parameters->nodeName, "APP", xpPropertyList());
    MyServer *server = new MyServer(desc);

	xpNetwork::getInstance()->init(parameters->nodePort, parameters->serverIpPort, parameters->announceInterval);
	xpNetwork::getInstance()->publish(server);

	fprintf(stdout, "Big Endiand: %d\n", xpToolSet::testBigEndian());


	while(1) {
		sleep(10000);
	}

    return 1;

	return 0;
}

/*
 * MyActuatorImpl.h
 *
 *  Created on: Apr 27, 2010
 *      Author: Gian Maria Simbula
 *      Email: simbula@sardegnaricerche.it
 */

#ifndef MYSERVER_H_
#define MYSERVER_H_

#include <xpApplication.h>
#include <xpNetwork.h>

//!  MyServer is the xPlaces announces server, it extends the basic xpApplication defined in libxplaces.
/*!
 * This application is the first announce dispatcher of an xPlaces Network.
 * It sends announces over an xPlaces Network checking local ip on start and using the specified port and announceInterval, if defined.
 * To start the server just type on a console:
 * \code
 * [pathToExecutable]/xpWebServerApplication [name] [serverAddress] [port] [announceInterval]
 * \endcode
 */
class MyServer: public xpApplication {
public:
	/*! MyServer(xpDescriptor *descriptor)
	    \brief Constructor for the xpAction class.
	    \param descriptor The properties of the server as xpDescriptor
		\details Base constructor for the MyServer class.
		\return An instanced MyServer object.
	*/
	MyServer(xpDescriptor *descriptor);

	/*! ~MyServer()
	    \brief Destructor for the MyServer class.
	*/
	virtual ~MyServer();
};

#endif /* MYSERVER_H_ */

/*
 * SmartPointer.h
 *
 *  Created on: 19-05-2013
 *      Author: Micha�
 */

#ifndef SMARTPOINTER_H_
#define SMARTPOINTER_H_

namespace shs {

/*NEED TO USE BOOST INSTEAD*/

template < typename T > class SmartPointer {
private:
   T*    pData; // Generic pointer to be stored
public:
	SmartPointer(T* pValue);

	virtual ~SmartPointer();

	T& operator*();

	T* operator->();


};

} /* namespace ShootSpacer */


#endif /* SMARTPOINTER_H_ */


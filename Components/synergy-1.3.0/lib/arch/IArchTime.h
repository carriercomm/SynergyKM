/*
 * synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2002 Chris Schoeneman
 * 
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file COPYING that should have accompanied this file.
 * 
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef IARCHTIME_H
#define IARCHTIME_H

#include "IInterface.h"

//! Interface for architecture dependent time operations
/*!
This interface defines the time operations required by
synergy.  Each architecture must implement this interface.
*/
class IArchTime : public IInterface {
public:
	//! @name manipulators
	//@{

	//! Get the current time
	/*!
	Returns the number of seconds since some arbitrary starting time.
	This should return as high a precision as reasonable.
	*/
	virtual double		time() = 0;

	//@}
};

#endif

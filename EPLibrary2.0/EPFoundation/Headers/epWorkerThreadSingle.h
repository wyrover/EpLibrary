/*! 
@file epWorkerThreadSingle.h
@author Woong Gyu La a.k.a Chris. <juhgiyo@gmail.com>
@date July 07, 2010
@brief A Worker Thread Class Interface with single job.
@version 2.0

@section LICENSE

Copyright (C) 2012  Woong Gyu La <juhgiyo@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

@section DESCRIPTION

A Interface for Single Job Worker Thread Class.

*/
#ifndef __EP_WORKER_THREAD_SINGLE_H__
#define __EP_WORKER_THREAD_SINGLE_H__

#include "epWorkerThreadFactory.h"
#include "epBaseJobProcessor.h"

namespace epl
{

	/*! 
	@class WorkerThreadSingle epWorkerThreadSingle.h
	@brief A class that implements single-job Worker Thread Class.
	*/
	class EP_FOUNDATION WorkerThreadSingle:public BaseWorkerThread
	{
	public:
		/*!
		Default Constructor

		Initializes the thread class
		@param[in] policy the life policy of this worker thread.
		*/
		WorkerThreadSingle(const ThreadLifePolicy policy):BaseWorkerThread(policy)
		{}
		
		/*!
		Default Destructor

		Destroy the Thread Class
		*/
		virtual ~WorkerThreadSingle(){}

	protected:
		/*!
		Actual single-job Thread Code.
		*/
		virtual void execute();

		
	};

}

#endif //__EP_WORKER_THREAD_SINGLE_H__
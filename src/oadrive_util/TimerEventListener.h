// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This program is free software licensed under the CDDL
// (COMMON DEVELOPMENT AND DISTRIBUTION LICENSE Version 1.0).
// You can find a copy of this license in LICENSE in the top
// directory of the source code.
//
// © Copyright 2017 FZI Forschungszentrum Informatik, Karlsruhe, Germany
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author Micha Pfeiffer <ueczz@student.kit.edu>
 * \date    2016-02-01
 *
 */
//----------------------------------------------------------------------


#ifndef OADRIVE_UTIL_TIMEREVENTLISTENER_H
#define OADRIVE_UTIL_TIMEREVENTLISTENER_H

#include "TimerTypes.h"
#include <boost/shared_ptr.hpp>

namespace oadrive{
namespace util{




class TimerEventListener
{

public:
  TimerEventListener() {};
  ~TimerEventListener() {};

  //! is called when timer is up
  virtual void eventTimerFired( timerType type, unsigned long timerID ) = 0;

  typedef boost::shared_ptr<TimerEventListener> TimerEventListenerPtr;
  typedef boost::shared_ptr<const TimerEventListener> ConstTimerEventListenerPtrPtr;
  typedef std::list<TimerEventListenerPtr> TimerEventListenerPtrList;
};
}
}

#endif // OADRIVE_UTIL_TIMEREVENTLISTENER_H

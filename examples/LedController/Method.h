// ----------------------------------------------------------------------------
// Method.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef _METHOD_H_
#define _METHOD_H_
#include "Functor.h"


class Method
{
public:
  Method();
  void attachCallback(const Functor0 & callback);
  void callback();
protected:
  Functor0 callback_;
  bool callback_is_attached_;
};

#endif

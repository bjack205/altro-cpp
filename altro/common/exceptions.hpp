//
// Created by Brian Jackson on 9/24/22.
// Copyright (c) 2022 Robotic Exploration Lab. All rights reserved.
//

#pragma once

#include <stdexcept>
#include <string>

#ifdef ALTRO_ENABLE_RUNTIME_EXCEPTIONS
#define ALTRO_THROW(x) throw(x)
#else
#define ALTRO_THROW(x) return ((x).Errno());
#endif

namespace altro {

enum class AltroErrorCodes {
  NoError,
  DimensionUnknown,
  BadIndex,
  DimensionMismatch,
  SolverNotInitialized,
  SolverAlreadyInitialized,
  NonPositive,
  FileError,
};

class AltroException : public std::runtime_error {
 public:
  AltroException(std::string msg, AltroErrorCodes code) : std::runtime_error(msg.c_str()), code_(code) {}
  virtual AltroErrorCodes Errno() { return code_; }
  virtual ~AltroException(){};

 private:
  AltroErrorCodes code_;
};

}  // namespace altro
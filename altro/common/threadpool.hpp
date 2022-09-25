// Copyright [2021] Optimus Ride Inc.

#pragma once

#ifdef ALTRO_USE_MULTITHREADING
#include "threadpool_impl.hpp"
#else
#include "threadpool_mock.hpp"
#endif
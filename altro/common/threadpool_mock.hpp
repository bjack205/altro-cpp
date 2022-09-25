//
// Created by Brian Jackson on 9/24/22.
// Copyright (c) 2022 Robotic Exploration Lab. All rights reserved.
//

#pragma once
#include "fmt/core.h"

namespace altro {

class ThreadPool {
 public:
  ThreadPool() {}
  int NumThreads() const { return 0; }

  template <class Task>
  void AddTask(const Task& task) { (void)task; }

  bool IsRunning() const { return false; }
  void StopThreads() {}
  void Wait() {}
  void LaunchThreads(int nthreads) {
    if (nthreads > 1) {
      fmt::print(
          "WARNING: Cannot open more than one thread without enabling multithreading. Using only "
          "one.");
    }
    (void)nthreads;
  }
};

}  // namespace altro
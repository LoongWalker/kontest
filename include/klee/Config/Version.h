//===-- Version.h -----------------------------------------------*- C++ -*-===//
//
//                     The KLEE Symbolic Virtual Machine
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef KLEE_CONFIG_VERSION_H
#define KLEE_CONFIG_VERSION_H

#include "klee/Config/config.h"

#define LLVM_VERSION(major, minor) (((major) << 8) | (minor))
#define LLVM_VERSION_CODE LLVM_VERSION(LLVM_VERSION_MAJOR, LLVM_VERSION_MINOR)

#if LLVM_VERSION_CODE >= LLVM_VERSION(3, 7)
#  define KLEE_LLVM_GEP_TYPE(x) (x),
#else
#  define KLEE_LLVM_GEP_TYPE(x)
#endif

#endif

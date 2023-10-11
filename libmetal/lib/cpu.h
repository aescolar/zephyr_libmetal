/*
 * Copyright (c) 2015, Xilinx Inc. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	cpu.h
 * @brief	CPU primitives for libmetal.
 */

#ifndef __METAL_CPU__H__
#define __METAL_CPU__H__

#if defined(METAL_PROCESSOR_HEADERS_ON_SYSTEM)
# include <metal/system/@PROJECT_SYSTEM@/cpu.h>
#else
# include <metal/processor/@PROJECT_PROCESSOR@/cpu.h>
#endif

#endif /* __METAL_CPU__H__ */

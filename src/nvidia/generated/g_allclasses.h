/*
 * SPDX-FileCopyrightText: Copyright (c) 2021-2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

/*
 * g_allclasses.h
 *
 * Pull in all class headers or class number declarations.
 * The class list is generated by chip-config from Classes.pm
 *
 * NOTE: this file may be included multiple times
 *
 */

#if defined(SDK_ALL_CLASSES_INCLUDE_FULL_HEADER)

#include <class/cl0000.h>               // NV01_ROOT
#include <class/cl0001.h>               // NV01_ROOT_NON_PRIV
#include <class/cl0041.h>               // NV01_ROOT_CLIENT
#include <class/cl000f.h>               // FABRIC_MANAGER_SESSION
#include <class/cl0020.h>               // NV0020_GPU_MANAGEMENT
#include <class/cl0080.h>               // NV01_DEVICE_0
#include <class/cl2080.h>               // NV20_SUBDEVICE_0
#include <class/cl2081.h>               // NV2081_BINAPI
#include <class/cl2082.h>               // NV2082_BINAPI_PRIVILEGED
#include <class/cl208f.h>               // NV20_SUBDEVICE_DIAG
#include <class/cl0002.h>               // NV01_CONTEXT_DMA
#include <class/cl003e.h>               // NV01_MEMORY_SYSTEM
#include <class/cl003f.h>               // NV01_MEMORY_LOCAL_PRIVILEGED
#include <class/cl0040.h>               // NV01_MEMORY_LOCAL_USER
#include <class/cl0042.h>               // NV_MEMORY_EXTENDED_USER
#include <class/cl0070.h>               // NV01_MEMORY_VIRTUAL
#include <class/cl00fe.h>               // NV_MEMORY_MAPPER
#include <class/cl00c2.h>               // NV01_MEMORY_LOCAL_PHYSICAL
#include <class/cl00c3.h>               // NV01_MEMORY_SYNCPOINT
#include <class/cl0071.h>               // NV01_MEMORY_SYSTEM_OS_DESCRIPTOR
#include <class/cl90ce.h>               // NV01_MEMORY_DEVICELESS
#include <class/cl0076.h>               // NV01_MEMORY_FRAMEBUFFER_CONSOLE
#include <class/cl00b1.h>               // NV01_MEMORY_HW_RESOURCES
#include <class/cl84a0.h>               // NV01_MEMORY_LIST_SYSTEM
#include <class/cl84a0.h>               // NV01_MEMORY_LIST_FBMEM
#include <class/cl84a0.h>               // NV01_MEMORY_LIST_OBJECT
#include <class/cl00f1.h>               // NV_IMEX_SESSION
#include <class/cl00f3.h>               // NV01_MEMORY_FLA
#include <class/cl00e0.h>               // NV_MEMORY_EXPORT
#include <class/cl0050.h>               // NV_CE_UTILS
#include <class/cl00f8.h>               // NV_MEMORY_FABRIC
#include <class/cl00f9.h>               // NV_MEMORY_FABRIC_IMPORT_V2
#include <class/cl00fb.h>               // NV_MEMORY_FABRIC_IMPORTED_REF
#include <class/cl00fc.h>               // FABRIC_VASPACE_A
#include <class/cl00fd.h>               // NV_MEMORY_MULTICAST_FABRIC
#include <class/cl00f2.h>               // IO_VASPACE_A
#include <class/cl0030.h>               // NV01_NULL
#include <class/cl0005.h>               // NV01_EVENT
#include <nvos.h>                       // NV01_EVENT_KERNEL_CALLBACK
#include <nvos.h>                       // NV01_EVENT_OS_EVENT
#include <nvos.h>                       // NV01_EVENT_KERNEL_CALLBACK_EX
#include <class/cl0004.h>               // NV01_TIMER
#include <class/cl0090.h>               // KERNEL_GRAPHICS_CONTEXT
#include <class/cl0100.h>               // LOCK_STRESS_OBJECT
#include <class/cl0101.h>               // LOCK_TEST_RELAXED_DUP_OBJECT
#include <class/cl506f.h>               // NV50_CHANNEL_GPFIFO
#include <class/cl906f.h>               // GF100_CHANNEL_GPFIFO
#include <class/cla06f.h>               // KEPLER_CHANNEL_GPFIFO_A
#include <class/clc574.h>               // UVM_CHANNEL_RETAINER
#include <class/cla16f.h>               // KEPLER_CHANNEL_GPFIFO_B
#include <class/clb06f.h>               // MAXWELL_CHANNEL_GPFIFO_A
#include <class/clc06f.h>               // PASCAL_CHANNEL_GPFIFO_A
#include <class/clc36f.h>               // VOLTA_CHANNEL_GPFIFO_A
#include <class/clc46f.h>               // TURING_CHANNEL_GPFIFO_A
#include <class/clc56f.h>               // AMPERE_CHANNEL_GPFIFO_A
#include <class/clc86f.h>               // HOPPER_CHANNEL_GPFIFO_A
#include <class/clc96f.h>               // BLACKWELL_CHANNEL_GPFIFO_A
#include <class/clca6f.h>               // BLACKWELL_CHANNEL_GPFIFO_B
#include <class/cl007d.h>               // NV04_SOFTWARE_TEST
#include <class/cl30f1.h>               // NV30_GSYNC
#include <class/clc361.h>               // VOLTA_USERMODE_A
#include <class/clc461.h>               // TURING_USERMODE_A
#include <class/clc561.h>               // AMPERE_USERMODE_A
#include <class/clc661.h>               // HOPPER_USERMODE_A
#include <class/clc761.h>               // BLACKWELL_USERMODE_A
#include <class/clc371.h>               // NVC371_DISP_SF_USER
#include <class/clc372sw.h>             // NVC372_DISPLAY_SW
#include <class/clc573.h>               // NVC573_DISP_CAPABILITIES
#include <class/clc673.h>               // NVC673_DISP_CAPABILITIES
#include <class/clc773.h>               // NVC773_DISP_CAPABILITIES
#include <class/clc973.h>               // NVC973_DISP_CAPABILITIES
#include <class/clca73.h>               // NVCA73_DISP_CAPABILITIES
#include <class/clcb73.h>               // NVCB73_DISP_CAPABILITIES
#include <class/cl0073.h>               // NV04_DISPLAY_COMMON
#include <class/cl5080.h>               // NV50_DEFERRED_API_CLASS
#include <class/cl900e.h>               // MPS_COMPUTE
#include <class/clc570.h>               // NVC570_DISPLAY
#include <class/clc57a.h>               // NVC57A_CURSOR_IMM_CHANNEL_PIO
#include <class/clc57b.h>               // NVC57B_WINDOW_IMM_CHANNEL_DMA
#include <class/clc57d.h>               // NVC57D_CORE_CHANNEL_DMA
#include <class/clc57e.h>               // NVC57E_WINDOW_CHANNEL_DMA
#include <class/clc670.h>               // NVC670_DISPLAY
#include <class/clc671.h>               // NVC671_DISP_SF_USER
#include <class/clc67a.h>               // NVC67A_CURSOR_IMM_CHANNEL_PIO
#include <class/clc67b.h>               // NVC67B_WINDOW_IMM_CHANNEL_DMA
#include <class/clc67d.h>               // NVC67D_CORE_CHANNEL_DMA
#include <class/clc67e.h>               // NVC67E_WINDOW_CHANNEL_DMA
#include <class/clc77f.h>               // NVC77F_ANY_CHANNEL_DMA
#include <class/clc770.h>               // NVC770_DISPLAY
#include <class/clc771.h>               // NVC771_DISP_SF_USER
#include <class/clc77d.h>               // NVC77D_CORE_CHANNEL_DMA
#include <class/clc970.h>               // NVC970_DISPLAY
#include <class/clc971.h>               // NVC971_DISP_SF_USER
#include <class/clc97a.h>               // NVC97A_CURSOR_IMM_CHANNEL_PIO
#include <class/clc97b.h>               // NVC97B_WINDOW_IMM_CHANNEL_DMA
#include <class/clc97d.h>               // NVC97D_CORE_CHANNEL_DMA
#include <class/clc97e.h>               // NVC97E_WINDOW_CHANNEL_DMA
#include <class/clca70.h>               // NVCA70_DISPLAY
#include <class/clca71.h>               // NVCA71_DISP_SF_USER
#include <class/clca7a.h>               // NVCA7A_CURSOR_IMM_CHANNEL_PIO
#include <class/clca7b.h>               // NVCA7B_WINDOW_IMM_CHANNEL_DMA
#include <class/clca7d.h>               // NVCA7D_CORE_CHANNEL_DMA
#include <class/clca7e.h>               // NVCA7E_WINDOW_CHANNEL_DMA
#include <class/clcb70.h>               // NVCB70_DISPLAY
#include <class/clcb71.h>               // NVCB71_DISP_SF_USER
#include <class/clcb7a.h>               // NVCB7A_CURSOR_IMM_CHANNEL_PIO
#include <class/clcb7b.h>               // NVCB7B_WINDOW_IMM_CHANNEL_DMA
#include <class/clcb7d.h>               // NVCB7D_CORE_CHANNEL_DMA
#include <class/clcb7e.h>               // NVCB7E_WINDOW_CHANNEL_DMA
#include <class/cl9010.h>               // NV9010_VBLANK_CALLBACK
#include <class/cl90cc.h>               // GF100_PROFILER
#include <class/clb0cc.h>               // MAXWELL_PROFILER
#include <class/clb1cc.h>               // MAXWELL_PROFILER_CONTEXT
#include <class/clb2cc.h>               // MAXWELL_PROFILER_DEVICE
#include <class/cl90e6.h>               // GF100_SUBDEVICE_MASTER
#include <class/cl90e7.h>               // GF100_SUBDEVICE_INFOROM
#include <class/cl9096.h>               // GF100_ZBC_CLEAR
#include <class/cl9072.h>               // GF100_DISP_SW
#include <class/cl9074.h>               // GF100_TIMED_SEMAPHORE_SW
#include <class/cl844c.h>               // G84_PERFBUFFER
#include <class/cl50a0.h>               // NV50_MEMORY_VIRTUAL
#include <class/cl503b.h>               // NV50_P2P
#include <class/cl503c.h>               // NV50_THIRD_PARTY_P2P
#include <class/cl902d.h>               // FERMI_TWOD_A
#include <class/cl90f1.h>               // FERMI_VASPACE_A
#include <class/clcba2.h>               // HOPPER_SEC2_WORK_LAUNCH_A
#include <class/cl90ec.h>               // GF100_HDACODEC
#include <class/clb8b0.h>               // NVB8B0_VIDEO_DECODER
#include <class/clc4b0.h>               // NVC4B0_VIDEO_DECODER
#include <class/clc6b0.h>               // NVC6B0_VIDEO_DECODER
#include <class/clc7b0.h>               // NVC7B0_VIDEO_DECODER
#include <class/clc9b0.h>               // NVC9B0_VIDEO_DECODER
#include <class/clcdb0.h>               // NVCDB0_VIDEO_DECODER
#include <class/clcfb0.h>               // NVCFB0_VIDEO_DECODER
#include <class/clc4b7.h>               // NVC4B7_VIDEO_ENCODER
#include <class/clb4b7.h>               // NVB4B7_VIDEO_ENCODER
#include <class/clc7b7.h>               // NVC7B7_VIDEO_ENCODER
#include <class/clc9b7.h>               // NVC9B7_VIDEO_ENCODER
#include <class/clcfb7.h>               // NVCFB7_VIDEO_ENCODER
#include <class/clb8d1.h>               // NVB8D1_VIDEO_NVJPG
#include <class/clc4d1.h>               // NVC4D1_VIDEO_NVJPG
#include <class/clc9d1.h>               // NVC9D1_VIDEO_NVJPG
#include <class/clcdd1.h>               // NVCDD1_VIDEO_NVJPG
#include <class/clcfd1.h>               // NVCFD1_VIDEO_NVJPG
#include <class/clb8fa.h>               // NVB8FA_VIDEO_OFA
#include <class/clc6fa.h>               // NVC6FA_VIDEO_OFA
#include <class/clc7fa.h>               // NVC7FA_VIDEO_OFA
#include <class/clc9fa.h>               // NVC9FA_VIDEO_OFA
#include <class/clcdfa.h>               // NVCDFA_VIDEO_OFA
#include <class/clcffa.h>               // NVCFFA_VIDEO_OFA
#include <class/cla140.h>               // KEPLER_INLINE_TO_MEMORY_B
#include <class/cl9067.h>               // FERMI_CONTEXT_SHARE_A
#include <class/cla06c.h>               // KEPLER_CHANNEL_GROUP_A
#include <class/clc0b5.h>               // PASCAL_DMA_COPY_A
#include <class/clc5b5.h>               // TURING_DMA_COPY_A
#include <class/clc6b5.h>               // AMPERE_DMA_COPY_A
#include <class/clc7b5.h>               // AMPERE_DMA_COPY_B
#include <class/clc8b5.h>               // HOPPER_DMA_COPY_A
#include <class/clc9b5.h>               // BLACKWELL_DMA_COPY_A
#include <class/clcab5.h>               // BLACKWELL_DMA_COPY_B
#include <class/clb0b5.h>               // MAXWELL_DMA_COPY_A
#include <class/clc365.h>               // ACCESS_COUNTER_NOTIFY_BUFFER
#include <class/clc369.h>               // MMU_FAULT_BUFFER
#include <class/clc763.h>               // MMU_VIDMEM_ACCESS_BIT_BUFFER
#include <class/clc597.h>               // TURING_A
#include <class/clc5c0.h>               // TURING_COMPUTE_A
#include <class/clc697.h>               // AMPERE_A
#include <class/clc6c0.h>               // AMPERE_COMPUTE_A
#include <class/clc797.h>               // AMPERE_B
#include <class/clc7c0.h>               // AMPERE_COMPUTE_B
#include <class/clc997.h>               // ADA_A
#include <class/clc9c0.h>               // ADA_COMPUTE_A
#include <class/clc637.h>               // AMPERE_SMC_PARTITION_REF
#include <class/clc638.h>               // AMPERE_SMC_EXEC_PARTITION_REF
#include <class/clc639.h>               // AMPERE_SMC_CONFIG_SESSION
#include <class/cl0092.h>               // NV0092_RG_LINE_CALLBACK
#include <class/clc640.h>               // AMPERE_SMC_MONITOR_SESSION
#include <class/clcb97.h>               // HOPPER_A
#include <class/clcbc0.h>               // HOPPER_COMPUTE_A
#include <class/clcd97.h>               // BLACKWELL_A
#include <class/clcdc0.h>               // BLACKWELL_COMPUTE_A
#include <class/clce97.h>               // BLACKWELL_B
#include <class/clcec0.h>               // BLACKWELL_COMPUTE_B
#include <class/clcd40.h>               // BLACKWELL_INLINE_TO_MEMORY_A
#include <class/cl00db.h>               // NV40_DEBUG_BUFFER
#include <class/cl00de.h>               // RM_USER_SHARED_DATA
#include <class/cl83de.h>               // GT200_DEBUGGER
#include <class/cl402c.h>               // NV40_I2C
#include <class/cla080.h>               // KEPLER_DEVICE_VGPU
#include <class/cla081.h>               // NVA081_VGPU_CONFIG
#include <class/cla084.h>               // NVA084_KERNEL_HOST_VGPU_DEVICE
#include <class/cl0060.h>               // NV0060_SYNC_GPU_BOOST
#include <class/clc076.h>               // GP100_UVM_SW
#include <class/cla0bc.h>               // NVENC_SW_SESSION
#include <class/cl90cd.h>               // NV_EVENT_BUFFER
#include <class/cla0bd.h>               // NVFBC_SW_SESSION
#include <class/clcb33.h>               // NV_CONFIDENTIAL_COMPUTE
#include <class/clcbca.h>               // NV_COUNTER_COLLECTION_UNIT
#include <class/cl00da.h>               // NV_SEMAPHORE_SURFACE


#else // defined(SDK_ALL_CLASSES_INCLUDE_FULL_HEADER)


#ifndef NV01_ROOT
#define NV01_ROOT                                (0x00000000)
#endif
#ifndef NV1_ROOT
#define NV1_ROOT                                 (0x00000000) // alias
#endif
#ifndef NV01_NULL_OBJECT
#define NV01_NULL_OBJECT                         (0x00000000) // alias
#endif
#ifndef NV1_NULL_OBJECT
#define NV1_NULL_OBJECT                          (0x00000000) // alias
#endif

#ifndef NV01_ROOT_NON_PRIV
#define NV01_ROOT_NON_PRIV                       (0x00000001)
#endif
#ifndef NV1_ROOT_NON_PRIV
#define NV1_ROOT_NON_PRIV                        (0x00000001) // alias
#endif

#ifndef NV01_ROOT_CLIENT
#define NV01_ROOT_CLIENT                         (0x00000041)
#endif

#ifndef FABRIC_MANAGER_SESSION
#define FABRIC_MANAGER_SESSION                   (0x0000000f)
#endif

#ifndef NV0020_GPU_MANAGEMENT
#define NV0020_GPU_MANAGEMENT                    (0x00000020)
#endif

#ifndef NV01_DEVICE_0
#define NV01_DEVICE_0                            (0x00000080)
#endif

#ifndef NV20_SUBDEVICE_0
#define NV20_SUBDEVICE_0                         (0x00002080)
#endif

#ifndef NV2081_BINAPI
#define NV2081_BINAPI                            (0x00002081)
#endif

#ifndef NV2082_BINAPI_PRIVILEGED
#define NV2082_BINAPI_PRIVILEGED                 (0x00002082)
#endif

#ifndef NV20_SUBDEVICE_DIAG
#define NV20_SUBDEVICE_DIAG                      (0x0000208f)
#endif

#ifndef NV01_CONTEXT_DMA
#define NV01_CONTEXT_DMA                         (0x00000002)
#endif

#ifndef NV01_MEMORY_SYSTEM
#define NV01_MEMORY_SYSTEM                       (0x0000003e)
#endif
#ifndef NV1_MEMORY_SYSTEM
#define NV1_MEMORY_SYSTEM                        (0x0000003e) // alias
#endif

#ifndef NV01_MEMORY_LOCAL_PRIVILEGED
#define NV01_MEMORY_LOCAL_PRIVILEGED             (0x0000003f)
#endif
#ifndef NV1_MEMORY_LOCAL_PRIVILEGED
#define NV1_MEMORY_LOCAL_PRIVILEGED              (0x0000003f) // alias
#endif
#ifndef NV01_MEMORY_PRIVILEGED
#define NV01_MEMORY_PRIVILEGED                   (0x0000003f) // alias
#endif
#ifndef NV1_MEMORY_PRIVILEGED
#define NV1_MEMORY_PRIVILEGED                    (0x0000003f) // alias
#endif

#ifndef NV01_MEMORY_LOCAL_USER
#define NV01_MEMORY_LOCAL_USER                   (0x00000040)
#endif
#ifndef NV1_MEMORY_LOCAL_USER
#define NV1_MEMORY_LOCAL_USER                    (0x00000040) // alias
#endif
#ifndef NV01_MEMORY_USER
#define NV01_MEMORY_USER                         (0x00000040) // alias
#endif
#ifndef NV1_MEMORY_USER
#define NV1_MEMORY_USER                          (0x00000040) // alias
#endif

#ifndef NV_MEMORY_EXTENDED_USER
#define NV_MEMORY_EXTENDED_USER                  (0x00000042)
#endif

#ifndef NV01_MEMORY_VIRTUAL
#define NV01_MEMORY_VIRTUAL                      (0x00000070)
#endif
#ifndef NV01_MEMORY_SYSTEM_DYNAMIC
#define NV01_MEMORY_SYSTEM_DYNAMIC               (0x00000070) // alias
#endif
#ifndef NV1_MEMORY_SYSTEM_DYNAMIC
#define NV1_MEMORY_SYSTEM_DYNAMIC                (0x00000070) // alias
#endif

#ifndef NV_MEMORY_MAPPER
#define NV_MEMORY_MAPPER                         (0x000000fe)
#endif

#ifndef NV01_MEMORY_LOCAL_PHYSICAL
#define NV01_MEMORY_LOCAL_PHYSICAL               (0x000000c2)
#endif

#ifndef NV01_MEMORY_SYNCPOINT
#define NV01_MEMORY_SYNCPOINT                    (0x000000c3)
#endif

#ifndef NV01_MEMORY_SYSTEM_OS_DESCRIPTOR
#define NV01_MEMORY_SYSTEM_OS_DESCRIPTOR         (0x00000071)
#endif

#ifndef NV01_MEMORY_DEVICELESS
#define NV01_MEMORY_DEVICELESS                   (0x000090ce)
#endif

#ifndef NV01_MEMORY_FRAMEBUFFER_CONSOLE
#define NV01_MEMORY_FRAMEBUFFER_CONSOLE          (0x00000076)
#endif

#ifndef NV01_MEMORY_HW_RESOURCES
#define NV01_MEMORY_HW_RESOURCES                 (0x000000b1)
#endif

#ifndef NV01_MEMORY_LIST_SYSTEM
#define NV01_MEMORY_LIST_SYSTEM                  (0x00000081)
#endif

#ifndef NV01_MEMORY_LIST_FBMEM
#define NV01_MEMORY_LIST_FBMEM                   (0x00000082)
#endif

#ifndef NV01_MEMORY_LIST_OBJECT
#define NV01_MEMORY_LIST_OBJECT                  (0x00000083)
#endif

#ifndef NV_IMEX_SESSION
#define NV_IMEX_SESSION                          (0x000000f1)
#endif

#ifndef NV01_MEMORY_FLA
#define NV01_MEMORY_FLA                          (0x000000f3)
#endif

#ifndef NV_MEMORY_EXPORT
#define NV_MEMORY_EXPORT                         (0x000000e0)
#endif

#ifndef NV_CE_UTILS
#define NV_CE_UTILS                              (0x00000050)
#endif

#ifndef NV_MEMORY_FABRIC
#define NV_MEMORY_FABRIC                         (0x000000f8)
#endif

#ifndef NV_MEMORY_FABRIC_IMPORT_V2
#define NV_MEMORY_FABRIC_IMPORT_V2               (0x000000f9)
#endif

#ifndef NV_MEMORY_FABRIC_IMPORTED_REF
#define NV_MEMORY_FABRIC_IMPORTED_REF            (0x000000fb)
#endif

#ifndef FABRIC_VASPACE_A
#define FABRIC_VASPACE_A                         (0x000000fc)
#endif

#ifndef NV_MEMORY_MULTICAST_FABRIC
#define NV_MEMORY_MULTICAST_FABRIC               (0x000000fd)
#endif

#ifndef IO_VASPACE_A
#define IO_VASPACE_A                             (0x000000f2)
#endif

#ifndef NV01_NULL
#define NV01_NULL                                (0x00000030)
#endif
#ifndef NV1_NULL
#define NV1_NULL                                 (0x00000030) // alias
#endif

#ifndef NV01_EVENT
#define NV01_EVENT                               (0x00000005)
#endif
#ifndef NV1_EVENT
#define NV1_EVENT                                (0x00000005) // alias
#endif

#ifndef NV01_EVENT_KERNEL_CALLBACK
#define NV01_EVENT_KERNEL_CALLBACK               (0x00000078)
#endif
#ifndef NV1_EVENT_KERNEL_CALLBACK
#define NV1_EVENT_KERNEL_CALLBACK                (0x00000078) // alias
#endif

#ifndef NV01_EVENT_OS_EVENT
#define NV01_EVENT_OS_EVENT                      (0x00000079)
#endif
#ifndef NV1_EVENT_OS_EVENT
#define NV1_EVENT_OS_EVENT                       (0x00000079) // alias
#endif
#ifndef NV01_EVENT_WIN32_EVENT
#define NV01_EVENT_WIN32_EVENT                   (0x00000079) // alias
#endif
#ifndef NV1_EVENT_WIN32_EVENT
#define NV1_EVENT_WIN32_EVENT                    (0x00000079) // alias
#endif

#ifndef NV01_EVENT_KERNEL_CALLBACK_EX
#define NV01_EVENT_KERNEL_CALLBACK_EX            (0x0000007e)
#endif
#ifndef NV1_EVENT_KERNEL_CALLBACK_EX
#define NV1_EVENT_KERNEL_CALLBACK_EX             (0x0000007e) // alias
#endif

#ifndef NV01_TIMER
#define NV01_TIMER                               (0x00000004)
#endif
#ifndef NV1_TIMER
#define NV1_TIMER                                (0x00000004) // alias
#endif

#ifndef KERNEL_GRAPHICS_CONTEXT
#define KERNEL_GRAPHICS_CONTEXT                  (0x00000090)
#endif

#ifndef LOCK_STRESS_OBJECT
#define LOCK_STRESS_OBJECT                       (0x00000100)
#endif

#ifndef LOCK_TEST_RELAXED_DUP_OBJECT
#define LOCK_TEST_RELAXED_DUP_OBJECT             (0x00000101)
#endif

#ifndef NV50_CHANNEL_GPFIFO
#define NV50_CHANNEL_GPFIFO                      (0x0000506f)
#endif

#ifndef GF100_CHANNEL_GPFIFO
#define GF100_CHANNEL_GPFIFO                     (0x0000906f)
#endif

#ifndef KEPLER_CHANNEL_GPFIFO_A
#define KEPLER_CHANNEL_GPFIFO_A                  (0x0000a06f)
#endif

#ifndef UVM_CHANNEL_RETAINER
#define UVM_CHANNEL_RETAINER                     (0x0000c574)
#endif

#ifndef KEPLER_CHANNEL_GPFIFO_B
#define KEPLER_CHANNEL_GPFIFO_B                  (0x0000a16f)
#endif

#ifndef MAXWELL_CHANNEL_GPFIFO_A
#define MAXWELL_CHANNEL_GPFIFO_A                 (0x0000b06f)
#endif

#ifndef PASCAL_CHANNEL_GPFIFO_A
#define PASCAL_CHANNEL_GPFIFO_A                  (0x0000c06f)
#endif

#ifndef VOLTA_CHANNEL_GPFIFO_A
#define VOLTA_CHANNEL_GPFIFO_A                   (0x0000c36f)
#endif

#ifndef TURING_CHANNEL_GPFIFO_A
#define TURING_CHANNEL_GPFIFO_A                  (0x0000c46f)
#endif

#ifndef AMPERE_CHANNEL_GPFIFO_A
#define AMPERE_CHANNEL_GPFIFO_A                  (0x0000c56f)
#endif

#ifndef HOPPER_CHANNEL_GPFIFO_A
#define HOPPER_CHANNEL_GPFIFO_A                  (0x0000c86f)
#endif

#ifndef BLACKWELL_CHANNEL_GPFIFO_A
#define BLACKWELL_CHANNEL_GPFIFO_A               (0x0000c96f)
#endif

#ifndef BLACKWELL_CHANNEL_GPFIFO_B
#define BLACKWELL_CHANNEL_GPFIFO_B               (0x0000ca6f)
#endif

#ifndef NV04_SOFTWARE_TEST
#define NV04_SOFTWARE_TEST                       (0x0000007d)
#endif
#ifndef NV4_SOFTWARE_TEST
#define NV4_SOFTWARE_TEST                        (0x0000007d) // alias
#endif

#ifndef NV30_GSYNC
#define NV30_GSYNC                               (0x000030f1)
#endif

#ifndef VOLTA_USERMODE_A
#define VOLTA_USERMODE_A                         (0x0000c361)
#endif

#ifndef TURING_USERMODE_A
#define TURING_USERMODE_A                        (0x0000c461)
#endif

#ifndef AMPERE_USERMODE_A
#define AMPERE_USERMODE_A                        (0x0000c561)
#endif

#ifndef HOPPER_USERMODE_A
#define HOPPER_USERMODE_A                        (0x0000c661)
#endif

#ifndef BLACKWELL_USERMODE_A
#define BLACKWELL_USERMODE_A                     (0x0000c761)
#endif

#ifndef NVC371_DISP_SF_USER
#define NVC371_DISP_SF_USER                      (0x0000c371)
#endif

#ifndef NVC372_DISPLAY_SW
#define NVC372_DISPLAY_SW                        (0x0000c372)
#endif

#ifndef NVC573_DISP_CAPABILITIES
#define NVC573_DISP_CAPABILITIES                 (0x0000c573)
#endif

#ifndef NVC673_DISP_CAPABILITIES
#define NVC673_DISP_CAPABILITIES                 (0x0000c673)
#endif

#ifndef NVC773_DISP_CAPABILITIES
#define NVC773_DISP_CAPABILITIES                 (0x0000c773)
#endif

#ifndef NVC973_DISP_CAPABILITIES
#define NVC973_DISP_CAPABILITIES                 (0x0000c973)
#endif

#ifndef NVCA73_DISP_CAPABILITIES
#define NVCA73_DISP_CAPABILITIES                 (0x0000ca73)
#endif

#ifndef NVCB73_DISP_CAPABILITIES
#define NVCB73_DISP_CAPABILITIES                 (0x0000cb73)
#endif

#ifndef NV04_DISPLAY_COMMON
#define NV04_DISPLAY_COMMON                      (0x00000073)
#endif

#ifndef NV50_DEFERRED_API_CLASS
#define NV50_DEFERRED_API_CLASS                  (0x00005080)
#endif

#ifndef MPS_COMPUTE
#define MPS_COMPUTE                              (0x0000900e)
#endif

#ifndef NVC570_DISPLAY
#define NVC570_DISPLAY                           (0x0000c570)
#endif

#ifndef NVC57A_CURSOR_IMM_CHANNEL_PIO
#define NVC57A_CURSOR_IMM_CHANNEL_PIO            (0x0000c57a)
#endif

#ifndef NVC57B_WINDOW_IMM_CHANNEL_DMA
#define NVC57B_WINDOW_IMM_CHANNEL_DMA            (0x0000c57b)
#endif

#ifndef NVC57D_CORE_CHANNEL_DMA
#define NVC57D_CORE_CHANNEL_DMA                  (0x0000c57d)
#endif

#ifndef NVC57E_WINDOW_CHANNEL_DMA
#define NVC57E_WINDOW_CHANNEL_DMA                (0x0000c57e)
#endif

#ifndef NVC670_DISPLAY
#define NVC670_DISPLAY                           (0x0000c670)
#endif

#ifndef NVC671_DISP_SF_USER
#define NVC671_DISP_SF_USER                      (0x0000c671)
#endif

#ifndef NVC67A_CURSOR_IMM_CHANNEL_PIO
#define NVC67A_CURSOR_IMM_CHANNEL_PIO            (0x0000c67a)
#endif

#ifndef NVC67B_WINDOW_IMM_CHANNEL_DMA
#define NVC67B_WINDOW_IMM_CHANNEL_DMA            (0x0000c67b)
#endif

#ifndef NVC67D_CORE_CHANNEL_DMA
#define NVC67D_CORE_CHANNEL_DMA                  (0x0000c67d)
#endif

#ifndef NVC67E_WINDOW_CHANNEL_DMA
#define NVC67E_WINDOW_CHANNEL_DMA                (0x0000c67e)
#endif

#ifndef NVC77F_ANY_CHANNEL_DMA
#define NVC77F_ANY_CHANNEL_DMA                   (0x0000c77f)
#endif

#ifndef NVC770_DISPLAY
#define NVC770_DISPLAY                           (0x0000c770)
#endif

#ifndef NVC771_DISP_SF_USER
#define NVC771_DISP_SF_USER                      (0x0000c771)
#endif

#ifndef NVC77D_CORE_CHANNEL_DMA
#define NVC77D_CORE_CHANNEL_DMA                  (0x0000c77d)
#endif

#ifndef NVC970_DISPLAY
#define NVC970_DISPLAY                           (0x0000c970)
#endif

#ifndef NVC971_DISP_SF_USER
#define NVC971_DISP_SF_USER                      (0x0000c971)
#endif

#ifndef NVC97A_CURSOR_IMM_CHANNEL_PIO
#define NVC97A_CURSOR_IMM_CHANNEL_PIO            (0x0000c97a)
#endif

#ifndef NVC97B_WINDOW_IMM_CHANNEL_DMA
#define NVC97B_WINDOW_IMM_CHANNEL_DMA            (0x0000c97b)
#endif

#ifndef NVC97D_CORE_CHANNEL_DMA
#define NVC97D_CORE_CHANNEL_DMA                  (0x0000c97d)
#endif

#ifndef NVC97E_WINDOW_CHANNEL_DMA
#define NVC97E_WINDOW_CHANNEL_DMA                (0x0000c97e)
#endif

#ifndef NVCA70_DISPLAY
#define NVCA70_DISPLAY                           (0x0000ca70)
#endif

#ifndef NVCA71_DISP_SF_USER
#define NVCA71_DISP_SF_USER                      (0x0000ca71)
#endif

#ifndef NVCA7A_CURSOR_IMM_CHANNEL_PIO
#define NVCA7A_CURSOR_IMM_CHANNEL_PIO            (0x0000ca7a)
#endif

#ifndef NVCA7B_WINDOW_IMM_CHANNEL_DMA
#define NVCA7B_WINDOW_IMM_CHANNEL_DMA            (0x0000ca7b)
#endif

#ifndef NVCA7D_CORE_CHANNEL_DMA
#define NVCA7D_CORE_CHANNEL_DMA                  (0x0000ca7d)
#endif

#ifndef NVCA7E_WINDOW_CHANNEL_DMA
#define NVCA7E_WINDOW_CHANNEL_DMA                (0x0000ca7e)
#endif

#ifndef NVCB70_DISPLAY
#define NVCB70_DISPLAY                           (0x0000cb70)
#endif

#ifndef NVCB71_DISP_SF_USER
#define NVCB71_DISP_SF_USER                      (0x0000cb71)
#endif

#ifndef NVCB7A_CURSOR_IMM_CHANNEL_PIO
#define NVCB7A_CURSOR_IMM_CHANNEL_PIO            (0x0000cb7a)
#endif

#ifndef NVCB7B_WINDOW_IMM_CHANNEL_DMA
#define NVCB7B_WINDOW_IMM_CHANNEL_DMA            (0x0000cb7b)
#endif

#ifndef NVCB7D_CORE_CHANNEL_DMA
#define NVCB7D_CORE_CHANNEL_DMA                  (0x0000cb7d)
#endif

#ifndef NVCB7E_WINDOW_CHANNEL_DMA
#define NVCB7E_WINDOW_CHANNEL_DMA                (0x0000cb7e)
#endif

#ifndef NV9010_VBLANK_CALLBACK
#define NV9010_VBLANK_CALLBACK                   (0x00009010)
#endif

#ifndef GF100_PROFILER
#define GF100_PROFILER                           (0x000090cc)
#endif

#ifndef MAXWELL_PROFILER
#define MAXWELL_PROFILER                         (0x0000b0cc)
#endif

#ifndef MAXWELL_PROFILER_CONTEXT
#define MAXWELL_PROFILER_CONTEXT                 (0x0000b1cc)
#endif

#ifndef MAXWELL_PROFILER_DEVICE
#define MAXWELL_PROFILER_DEVICE                  (0x0000b2cc)
#endif

#ifndef GF100_SUBDEVICE_MASTER
#define GF100_SUBDEVICE_MASTER                   (0x000090e6)
#endif

#ifndef GF100_SUBDEVICE_INFOROM
#define GF100_SUBDEVICE_INFOROM                  (0x000090e7)
#endif

#ifndef GF100_ZBC_CLEAR
#define GF100_ZBC_CLEAR                          (0x00009096)
#endif

#ifndef GF100_DISP_SW
#define GF100_DISP_SW                            (0x00009072)
#endif

#ifndef GF100_TIMED_SEMAPHORE_SW
#define GF100_TIMED_SEMAPHORE_SW                 (0x00009074)
#endif

#ifndef G84_PERFBUFFER
#define G84_PERFBUFFER                           (0x0000844c)
#endif

#ifndef NV50_MEMORY_VIRTUAL
#define NV50_MEMORY_VIRTUAL                      (0x000050a0)
#endif

#ifndef NV50_P2P
#define NV50_P2P                                 (0x0000503b)
#endif

#ifndef NV50_THIRD_PARTY_P2P
#define NV50_THIRD_PARTY_P2P                     (0x0000503c)
#endif

#ifndef FERMI_TWOD_A
#define FERMI_TWOD_A                             (0x0000902d)
#endif

#ifndef FERMI_VASPACE_A
#define FERMI_VASPACE_A                          (0x000090f1)
#endif

#ifndef HOPPER_SEC2_WORK_LAUNCH_A
#define HOPPER_SEC2_WORK_LAUNCH_A                (0x0000cba2)
#endif

#ifndef GF100_HDACODEC
#define GF100_HDACODEC                           (0x000090ec)
#endif

#ifndef NVB8B0_VIDEO_DECODER
#define NVB8B0_VIDEO_DECODER                     (0x0000b8b0)
#endif

#ifndef NVC4B0_VIDEO_DECODER
#define NVC4B0_VIDEO_DECODER                     (0x0000c4b0)
#endif

#ifndef NVC6B0_VIDEO_DECODER
#define NVC6B0_VIDEO_DECODER                     (0x0000c6b0)
#endif

#ifndef NVC7B0_VIDEO_DECODER
#define NVC7B0_VIDEO_DECODER                     (0x0000c7b0)
#endif

#ifndef NVC9B0_VIDEO_DECODER
#define NVC9B0_VIDEO_DECODER                     (0x0000c9b0)
#endif

#ifndef NVCDB0_VIDEO_DECODER
#define NVCDB0_VIDEO_DECODER                     (0x0000cdb0)
#endif

#ifndef NVCFB0_VIDEO_DECODER
#define NVCFB0_VIDEO_DECODER                     (0x0000cfb0)
#endif

#ifndef NVC4B7_VIDEO_ENCODER
#define NVC4B7_VIDEO_ENCODER                     (0x0000c4b7)
#endif

#ifndef NVB4B7_VIDEO_ENCODER
#define NVB4B7_VIDEO_ENCODER                     (0x0000b4b7)
#endif

#ifndef NVC7B7_VIDEO_ENCODER
#define NVC7B7_VIDEO_ENCODER                     (0x0000c7b7)
#endif

#ifndef NVC9B7_VIDEO_ENCODER
#define NVC9B7_VIDEO_ENCODER                     (0x0000c9b7)
#endif

#ifndef NVCFB7_VIDEO_ENCODER
#define NVCFB7_VIDEO_ENCODER                     (0x0000cfb7)
#endif

#ifndef NVB8D1_VIDEO_NVJPG
#define NVB8D1_VIDEO_NVJPG                       (0x0000b8d1)
#endif

#ifndef NVC4D1_VIDEO_NVJPG
#define NVC4D1_VIDEO_NVJPG                       (0x0000c4d1)
#endif

#ifndef NVC9D1_VIDEO_NVJPG
#define NVC9D1_VIDEO_NVJPG                       (0x0000c9d1)
#endif

#ifndef NVCDD1_VIDEO_NVJPG
#define NVCDD1_VIDEO_NVJPG                       (0x0000cdd1)
#endif

#ifndef NVCFD1_VIDEO_NVJPG
#define NVCFD1_VIDEO_NVJPG                       (0x0000cfd1)
#endif

#ifndef NVB8FA_VIDEO_OFA
#define NVB8FA_VIDEO_OFA                         (0x0000b8fa)
#endif

#ifndef NVC6FA_VIDEO_OFA
#define NVC6FA_VIDEO_OFA                         (0x0000c6fa)
#endif

#ifndef NVC7FA_VIDEO_OFA
#define NVC7FA_VIDEO_OFA                         (0x0000c7fa)
#endif

#ifndef NVC9FA_VIDEO_OFA
#define NVC9FA_VIDEO_OFA                         (0x0000c9fa)
#endif

#ifndef NVCDFA_VIDEO_OFA
#define NVCDFA_VIDEO_OFA                         (0x0000cdfa)
#endif

#ifndef NVCFFA_VIDEO_OFA
#define NVCFFA_VIDEO_OFA                         (0x0000cffa)
#endif

#ifndef KEPLER_INLINE_TO_MEMORY_B
#define KEPLER_INLINE_TO_MEMORY_B                (0x0000a140)
#endif

#ifndef FERMI_CONTEXT_SHARE_A
#define FERMI_CONTEXT_SHARE_A                    (0x00009067)
#endif

#ifndef KEPLER_CHANNEL_GROUP_A
#define KEPLER_CHANNEL_GROUP_A                   (0x0000a06c)
#endif

#ifndef PASCAL_DMA_COPY_A
#define PASCAL_DMA_COPY_A                        (0x0000c0b5)
#endif

#ifndef TURING_DMA_COPY_A
#define TURING_DMA_COPY_A                        (0x0000c5b5)
#endif

#ifndef AMPERE_DMA_COPY_A
#define AMPERE_DMA_COPY_A                        (0x0000c6b5)
#endif

#ifndef AMPERE_DMA_COPY_B
#define AMPERE_DMA_COPY_B                        (0x0000c7b5)
#endif

#ifndef HOPPER_DMA_COPY_A
#define HOPPER_DMA_COPY_A                        (0x0000c8b5)
#endif

#ifndef BLACKWELL_DMA_COPY_A
#define BLACKWELL_DMA_COPY_A                     (0x0000c9b5)
#endif

#ifndef BLACKWELL_DMA_COPY_B
#define BLACKWELL_DMA_COPY_B                     (0x0000cab5)
#endif

#ifndef MAXWELL_DMA_COPY_A
#define MAXWELL_DMA_COPY_A                       (0x0000b0b5)
#endif

#ifndef ACCESS_COUNTER_NOTIFY_BUFFER
#define ACCESS_COUNTER_NOTIFY_BUFFER             (0x0000c365)
#endif

#ifndef MMU_FAULT_BUFFER
#define MMU_FAULT_BUFFER                         (0x0000c369)
#endif

#ifndef MMU_VIDMEM_ACCESS_BIT_BUFFER
#define MMU_VIDMEM_ACCESS_BIT_BUFFER             (0x0000c763)
#endif

#ifndef TURING_A
#define TURING_A                                 (0x0000c597)
#endif

#ifndef TURING_COMPUTE_A
#define TURING_COMPUTE_A                         (0x0000c5c0)
#endif

#ifndef AMPERE_A
#define AMPERE_A                                 (0x0000c697)
#endif

#ifndef AMPERE_COMPUTE_A
#define AMPERE_COMPUTE_A                         (0x0000c6c0)
#endif

#ifndef AMPERE_B
#define AMPERE_B                                 (0x0000c797)
#endif

#ifndef AMPERE_COMPUTE_B
#define AMPERE_COMPUTE_B                         (0x0000c7c0)
#endif

#ifndef ADA_A
#define ADA_A                                    (0x0000c997)
#endif

#ifndef ADA_COMPUTE_A
#define ADA_COMPUTE_A                            (0x0000c9c0)
#endif

#ifndef AMPERE_SMC_PARTITION_REF
#define AMPERE_SMC_PARTITION_REF                 (0x0000c637)
#endif

#ifndef AMPERE_SMC_EXEC_PARTITION_REF
#define AMPERE_SMC_EXEC_PARTITION_REF            (0x0000c638)
#endif

#ifndef AMPERE_SMC_CONFIG_SESSION
#define AMPERE_SMC_CONFIG_SESSION                (0x0000c639)
#endif

#ifndef NV0092_RG_LINE_CALLBACK
#define NV0092_RG_LINE_CALLBACK                  (0x00000092)
#endif

#ifndef AMPERE_SMC_MONITOR_SESSION
#define AMPERE_SMC_MONITOR_SESSION               (0x0000c640)
#endif

#ifndef HOPPER_A
#define HOPPER_A                                 (0x0000cb97)
#endif

#ifndef HOPPER_COMPUTE_A
#define HOPPER_COMPUTE_A                         (0x0000cbc0)
#endif

#ifndef BLACKWELL_A
#define BLACKWELL_A                              (0x0000cd97)
#endif

#ifndef BLACKWELL_COMPUTE_A
#define BLACKWELL_COMPUTE_A                      (0x0000cdc0)
#endif

#ifndef BLACKWELL_B
#define BLACKWELL_B                              (0x0000ce97)
#endif

#ifndef BLACKWELL_COMPUTE_B
#define BLACKWELL_COMPUTE_B                      (0x0000cec0)
#endif

#ifndef BLACKWELL_INLINE_TO_MEMORY_A
#define BLACKWELL_INLINE_TO_MEMORY_A             (0x0000cd40)
#endif

#ifndef NV40_DEBUG_BUFFER
#define NV40_DEBUG_BUFFER                        (0x000000db)
#endif

#ifndef RM_USER_SHARED_DATA
#define RM_USER_SHARED_DATA                      (0x000000de)
#endif

#ifndef GT200_DEBUGGER
#define GT200_DEBUGGER                           (0x000083de)
#endif

#ifndef NV40_I2C
#define NV40_I2C                                 (0x0000402c)
#endif

#ifndef KEPLER_DEVICE_VGPU
#define KEPLER_DEVICE_VGPU                       (0x0000a080)
#endif

#ifndef NVA081_VGPU_CONFIG
#define NVA081_VGPU_CONFIG                       (0x0000a081)
#endif

#ifndef NVA084_KERNEL_HOST_VGPU_DEVICE
#define NVA084_KERNEL_HOST_VGPU_DEVICE           (0x0000a084)
#endif

#ifndef NV0060_SYNC_GPU_BOOST
#define NV0060_SYNC_GPU_BOOST                    (0x00000060)
#endif

#ifndef GP100_UVM_SW
#define GP100_UVM_SW                             (0x0000c076)
#endif

#ifndef NVENC_SW_SESSION
#define NVENC_SW_SESSION                         (0x0000a0bc)
#endif

#ifndef NV_EVENT_BUFFER
#define NV_EVENT_BUFFER                          (0x000090cd)
#endif

#ifndef NVFBC_SW_SESSION
#define NVFBC_SW_SESSION                         (0x0000a0bd)
#endif

#ifndef NV_CONFIDENTIAL_COMPUTE
#define NV_CONFIDENTIAL_COMPUTE                  (0x0000cb33)
#endif

#ifndef NV_COUNTER_COLLECTION_UNIT
#define NV_COUNTER_COLLECTION_UNIT               (0x0000cbca)
#endif

#ifndef NV_SEMAPHORE_SURFACE
#define NV_SEMAPHORE_SURFACE                     (0x000000da)
#endif


#endif // defined(SDK_ALL_CLASSES_INCLUDE_FULL_HEADER)

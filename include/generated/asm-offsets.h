#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 *
 */

#define TSK_ACTIVE_MM 960 /* offsetof(struct task_struct, active_mm)	// */

#define TI_FLAGS 0 /* offsetof(struct thread_info, flags)	// */
#define TI_PREEMPT 80 /* offsetof(struct thread_info, preempt_count)	// */
#define TI_ADDR_LIMIT 8 /* offsetof(struct thread_info, addr_limit)	// */
#define TI_TASK 16 /* offsetof(struct thread_info, task)	// */
#define TI_EXEC_DOMAIN 24 /* offsetof(struct thread_info, exec_domain)	// */
#define TI_CPU 84 /* offsetof(struct thread_info, cpu)	// */

#define THREAD_CPU_CONTEXT 1520 /* offsetof(struct task_struct, thread.cpu_context)	// */

#define S_X0 0 /* offsetof(struct pt_regs, regs[0])	// */
#define S_X1 8 /* offsetof(struct pt_regs, regs[1])	// */
#define S_X2 16 /* offsetof(struct pt_regs, regs[2])	// */
#define S_X3 24 /* offsetof(struct pt_regs, regs[3])	// */
#define S_X4 32 /* offsetof(struct pt_regs, regs[4])	// */
#define S_X5 40 /* offsetof(struct pt_regs, regs[5])	// */
#define S_X6 48 /* offsetof(struct pt_regs, regs[6])	// */
#define S_X7 56 /* offsetof(struct pt_regs, regs[7])	// */
#define S_X15 120 /* offsetof(struct pt_regs, regs[15])	// */
#define S_X16 128 /* offsetof(struct pt_regs, regs[16])	// */
#define S_X29 232 /* offsetof(struct pt_regs, regs[29])	// */
#define S_LR 240 /* offsetof(struct pt_regs, regs[30])	// */
#define S_SP 248 /* offsetof(struct pt_regs, sp)	// */
#define S_COMPAT_SP 104 /* offsetof(struct pt_regs, compat_sp)	// */
#define S_PSTATE 264 /* offsetof(struct pt_regs, pstate)	// */
#define S_PC 256 /* offsetof(struct pt_regs, pc)	// */
#define S_ORIG_X0 272 /* offsetof(struct pt_regs, orig_x0)	// */
#define S_SYSCALLNO 280 /* offsetof(struct pt_regs, syscallno)	// */
#define S_FRAME_SIZE 288 /* sizeof(struct pt_regs)	// */

#define MM_CONTEXT_ID 688 /* offsetof(struct mm_struct, context.id)	// */

#define VMA_VM_MM 64 /* offsetof(struct vm_area_struct, vm_mm)	// */
#define VMA_VM_FLAGS 80 /* offsetof(struct vm_area_struct, vm_flags)	// */

#define VM_EXEC 4 /* VM_EXEC	// */

#define PAGE_SZ 4096 /* PAGE_SIZE	// */

#define CPU_INFO_SZ 24 /* sizeof(struct cpu_info)	// */
#define CPU_INFO_SETUP 16 /* offsetof(struct cpu_info, cpu_setup)	// */

#define DMA_BIDIRECTIONAL 0 /* DMA_BIDIRECTIONAL	// */
#define DMA_TO_DEVICE 1 /* DMA_TO_DEVICE	// */
#define DMA_FROM_DEVICE 2 /* DMA_FROM_DEVICE	// */

#define CLOCK_REALTIME 0 /* CLOCK_REALTIME	// */
#define CLOCK_MONOTONIC 1 /* CLOCK_MONOTONIC	// */
#define CLOCK_REALTIME_RES 1 /* MONOTONIC_RES_NSEC	// */
#define CLOCK_REALTIME_COARSE 5 /* CLOCK_REALTIME_COARSE	// */
#define CLOCK_MONOTONIC_COARSE 6 /* CLOCK_MONOTONIC_COARSE	// */
#define CLOCK_COARSE_RES 10000000 /* LOW_RES_NSEC	// */
#define NSEC_PER_SEC 1000000000 /* NSEC_PER_SEC	// */

#define VDSO_CS_CYCLE_LAST 0 /* offsetof(struct vdso_data, cs_cycle_last)	// */
#define VDSO_XTIME_CLK_SEC 8 /* offsetof(struct vdso_data, xtime_clock_sec)	// */
#define VDSO_XTIME_CLK_NSEC 16 /* offsetof(struct vdso_data, xtime_clock_nsec)	// */
#define VDSO_XTIME_CRS_SEC 24 /* offsetof(struct vdso_data, xtime_coarse_sec)	// */
#define VDSO_XTIME_CRS_NSEC 32 /* offsetof(struct vdso_data, xtime_coarse_nsec)	// */
#define VDSO_WTM_CLK_SEC 40 /* offsetof(struct vdso_data, wtm_clock_sec)	// */
#define VDSO_WTM_CLK_NSEC 48 /* offsetof(struct vdso_data, wtm_clock_nsec)	// */
#define VDSO_TB_SEQ_COUNT 56 /* offsetof(struct vdso_data, tb_seq_count)	// */
#define VDSO_CS_MULT 60 /* offsetof(struct vdso_data, cs_mult)	// */
#define VDSO_CS_SHIFT 64 /* offsetof(struct vdso_data, cs_shift)	// */
#define VDSO_TZ_MINWEST 68 /* offsetof(struct vdso_data, tz_minuteswest)	// */
#define VDSO_TZ_DSTTIME 72 /* offsetof(struct vdso_data, tz_dsttime)	// */
#define VDSO_USE_SYSCALL 76 /* offsetof(struct vdso_data, use_syscall)	// */

#define TVAL_TV_SEC 0 /* offsetof(struct timeval, tv_sec)	// */
#define TVAL_TV_USEC 8 /* offsetof(struct timeval, tv_usec)	// */
#define TSPEC_TV_SEC 0 /* offsetof(struct timespec, tv_sec)	// */
#define TSPEC_TV_NSEC 8 /* offsetof(struct timespec, tv_nsec)	// */

#define TZ_MINWEST 0 /* offsetof(struct timezone, tz_minuteswest)	// */
#define TZ_DSTTIME 4 /* offsetof(struct timezone, tz_dsttime)	// */

#define CPU_SUSPEND_SZ 96 /* sizeof(struct cpu_suspend_ctx)	// */
#define CPU_CTX_SP 88 /* offsetof(struct cpu_suspend_ctx, sp)	// */
#define MPIDR_HASH_MASK 0 /* offsetof(struct mpidr_hash, mask)	// */
#define MPIDR_HASH_SHIFTS 8 /* offsetof(struct mpidr_hash, shift_aff)	// */
#define SLEEP_SAVE_SP_SZ 16 /* sizeof(struct sleep_save_sp)	// */
#define SLEEP_SAVE_SP_PHYS 8 /* offsetof(struct sleep_save_sp, save_ptr_stash_phys)	// */
#define SLEEP_SAVE_SP_VIRT 0 /* offsetof(struct sleep_save_sp, save_ptr_stash)	// */

#endif

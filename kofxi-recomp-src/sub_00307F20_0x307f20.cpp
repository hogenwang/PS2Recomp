#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00307F20
// Address: 0x307f20 - 0x307fc0
void sub_00307F20_0x307f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307F20_0x307f20");
#endif

    switch (ctx->pc) {
        case 0x307f68u: goto label_307f68;
        default: break;
    }

    ctx->pc = 0x307f20u;

    // 0x307f20: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x307f20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307f24: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x307f24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x307f28: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x307F28u;
    {
        const bool branch_taken_0x307f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F28u;
        // 0x307f2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f28) {
            ctx->pc = 0x307F4Cu;
            goto label_307f4c;
        }
    }
    ctx->pc = 0x307F30u;
    // 0x307f30: 0x3c0801d3  lui         $t0, 0x1D3
    ctx->pc = 0x307f30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)467 << 16));
    // 0x307f34: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307f38: 0x25086280  addiu       $t0, $t0, 0x6280
    ctx->pc = 0x307f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25216));
    // 0x307f3c: 0xac6847a4  sw          $t0, 0x47A4($v1)
    ctx->pc = 0x307f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18340), GPR_U32(ctx, 8));
    // 0x307f40: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307f44: 0xac6a6288  sw          $t2, 0x6288($v1)
    ctx->pc = 0x307f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25224), GPR_U32(ctx, 10));
    // 0x307f48: 0x254a0064  addiu       $t2, $t2, 0x64
    ctx->pc = 0x307f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 100));
label_307f4c:
    // 0x307f4c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x307f4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x307f50: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x307F50u;
    {
        const bool branch_taken_0x307f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f50) {
            ctx->pc = 0x307F98u;
            goto label_307f98;
        }
    }
    ctx->pc = 0x307F58u;
    // 0x307f58: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x307f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x307f5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x307f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f60: 0x24c66280  addiu       $a2, $a2, 0x6280
    ctx->pc = 0x307f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25216));
    // 0x307f64: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x307f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_307f68:
    // 0x307f68: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x307f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x307f6c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x307f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x307f70: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x307f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x307f74: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x307f74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x307f78: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x307f78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x307f7c: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x307f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x307f80: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x307f80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x307f84: 0x254a0064  addiu       $t2, $t2, 0x64
    ctx->pc = 0x307f84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 100));
    // 0x307f88: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x307f88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x307f8c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x307F8Cu;
    {
        const bool branch_taken_0x307f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x307F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F8Cu;
        // 0x307f90: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f8c) {
            ctx->pc = 0x307F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307f68;
        }
    }
    ctx->pc = 0x307F94u;
    // 0x307f94: 0x0  nop
    ctx->pc = 0x307f94u;
    // NOP
label_307f98:
    // 0x307f98: 0x2d2301d6  sltiu       $v1, $t1, 0x1D6
    ctx->pc = 0x307f98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)470) ? 1 : 0);
    // 0x307f9c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x307F9Cu;
    {
        const bool branch_taken_0x307f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307f9c) {
            ctx->pc = 0x307FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307F9Cu;
            // 0x307fa0: 0x25430004  addiu       $v1, $t2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307FB4u;
            goto label_307fb4;
        }
    }
    ctx->pc = 0x307FA4u;
    // 0x307fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307fa8: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x307fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x307fac: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x307facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x307fb0: 0x25430004  addiu       $v1, $t2, 0x4
    ctx->pc = 0x307fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_307fb4:
    // 0x307fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x307FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FB4u;
        // 0x307fb8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307FBCu;
    // 0x307fbc: 0x0  nop
    ctx->pc = 0x307fbcu;
    // NOP
}

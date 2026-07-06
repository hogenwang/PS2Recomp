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

// Function: sub_00299EE8
// Address: 0x299ee8 - 0x299fc0
void sub_00299EE8_0x299ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299EE8_0x299ee8");
#endif

    switch (ctx->pc) {
        case 0x299f2cu: goto label_299f2c;
        case 0x299f58u: goto label_299f58;
        case 0x299f64u: goto label_299f64;
        default: break;
    }

    ctx->pc = 0x299ee8u;

    // 0x299ee8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x299ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x299eec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x299eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299ef0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x299ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x299ef4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x299ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ef8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x299ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x299efc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x299efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f00: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x299f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x299f04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x299f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f08: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x299f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x299f0c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x299F0Cu;
    {
        const bool branch_taken_0x299f0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F0Cu;
        // 0x299f10: 0xffb30040  sd          $s3, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f0c) {
            ctx->pc = 0x299F34u;
            goto label_299f34;
        }
    }
    ctx->pc = 0x299F14u;
    // 0x299f14: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x299f14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x299f18: 0x8e625308  lw          $v0, 0x5308($s3)
    ctx->pc = 0x299f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21256)));
    // 0x299f1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299F1Cu;
    {
        const bool branch_taken_0x299f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299f1c) {
            ctx->pc = 0x299F3Cu;
            goto label_299f3c;
        }
    }
    ctx->pc = 0x299F24u;
    // 0x299f24: 0xc0a670a  jal         func_299C28
    ctx->pc = 0x299F24u;
    SET_GPR_U32(ctx, 31, 0x299F2Cu);
    ctx->pc = 0x299C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299C28u, 0x299F24u, 0x299F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F2Cu;
label_299f2c:
    // 0x299f2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299F2Cu;
    {
        const bool branch_taken_0x299f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299f2c) {
            ctx->pc = 0x299F3Cu;
            goto label_299f3c;
        }
    }
    ctx->pc = 0x299F34u;
label_299f34:
    // 0x299f34: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x299F34u;
    {
        const bool branch_taken_0x299f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F34u;
        // 0x299f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f34) {
            ctx->pc = 0x299FA0u;
            goto label_299fa0;
        }
    }
    ctx->pc = 0x299F3Cu;
label_299f3c:
    // 0x299f3c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x299f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x299f40: 0x32148000  andi        $s4, $s0, 0x8000
    ctx->pc = 0x299f40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
    // 0x299f44: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x299f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x299f48: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x299f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x299f4c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x299f4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x299f50: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x299f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x299f54: 0x0  nop
    ctx->pc = 0x299f54u;
    // NOP
label_299f58:
    // 0x299f58: 0x8e645308  lw          $a0, 0x5308($s3)
    ctx->pc = 0x299f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21256)));
    // 0x299f5c: 0xc0a6246  jal         func_298918
    ctx->pc = 0x299F5Cu;
    SET_GPR_U32(ctx, 31, 0x299F64u);
    ctx->pc = 0x299F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F5Cu;
    // 0x299f60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298918u, 0x299F5Cu, 0x299F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F64u;
label_299f64:
    // 0x299f64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x299f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f68: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x299F68u;
    {
        const bool branch_taken_0x299f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F68u;
        // 0x299f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f68) {
            ctx->pc = 0x299FA0u;
            goto label_299fa0;
        }
    }
    ctx->pc = 0x299F70u;
    // 0x299f70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x299f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x299f74: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x299F74u;
    {
        const bool branch_taken_0x299f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299f74) {
            ctx->pc = 0x299F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299F74u;
            // 0x299f78: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299FA0u;
            goto label_299fa0;
        }
    }
    ctx->pc = 0x299F7Cu;
    // 0x299f7c: 0x56800008  bnel        $s4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x299F7Cu;
    {
        const bool branch_taken_0x299f7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x299f7c) {
            ctx->pc = 0x299F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299F7Cu;
            // 0x299f80: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299FA0u;
            goto label_299fa0;
        }
    }
    ctx->pc = 0x299F84u;
    // 0x299f84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x299f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x299f88: 0x2a22000b  slti        $v0, $s1, 0xB
    ctx->pc = 0x299f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x299f8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x299F8Cu;
    {
        const bool branch_taken_0x299f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299f8c) {
            ctx->pc = 0x299F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299F8Cu;
            // 0x299f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299FA0u;
            goto label_299fa0;
        }
    }
    ctx->pc = 0x299F94u;
    // 0x299f94: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x299f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x299f98: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x299F98u;
    {
        const bool branch_taken_0x299f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F98u;
        // 0x299f9c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f98) {
            ctx->pc = 0x299F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299f58;
        }
    }
    ctx->pc = 0x299FA0u;
label_299fa0:
    // 0x299fa0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x299fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299fa4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x299fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299fa8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x299fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299fac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299fb0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x299fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299fb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x299fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x299FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FB8u;
        // 0x299fbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299FC0u;
}

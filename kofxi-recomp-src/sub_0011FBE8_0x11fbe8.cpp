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

// Function: sub_0011FBE8
// Address: 0x11fbe8 - 0x11fc68
void sub_0011FBE8_0x11fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FBE8_0x11fbe8");
#endif

    switch (ctx->pc) {
        case 0x11fc08u: goto label_11fc08;
        default: break;
    }

    ctx->pc = 0x11fbe8u;

    // 0x11fbe8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11fbec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11fbecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbf0: 0x244bb9e8  addiu       $t3, $v0, -0x4618
    ctx->pc = 0x11fbf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949352));
    // 0x11fbf4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11fbf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11fbf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11fbfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc04: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x11fc04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_11fc08:
    // 0x11fc08: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11fc08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11fc0c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x11fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x11fc10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11fc10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11fc14: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x11fc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x11fc18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FC18u;
    {
        const bool branch_taken_0x11fc18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC18u;
        // 0x11fc1c: 0x1034026  xor         $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc18) {
            ctx->pc = 0x11FC2Cu;
            goto label_11fc2c;
        }
    }
    ctx->pc = 0x11FC20u;
    // 0x11fc20: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x11fc20u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x11fc24: 0x1465026  xor         $t2, $t2, $a2
    ctx->pc = 0x11fc24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 6));
    // 0x11fc28: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x11fc28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
label_11fc2c:
    // 0x11fc2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11fc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11fc30: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x11fc30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x11fc34: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11FC34u;
    {
        const bool branch_taken_0x11fc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fc34) {
            ctx->pc = 0x11FC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC34u;
            // 0x11fc38: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11fc08;
        }
    }
    ctx->pc = 0x11FC3Cu;
    // 0x11fc3c: 0x81027  nor         $v0, $zero, $t0
    ctx->pc = 0x11fc3cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x11fc40: 0x92027  nor         $a0, $zero, $t1
    ctx->pc = 0x11fc40u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x11fc44: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x11fc44u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x11fc48: 0x30420077  andi        $v0, $v0, 0x77
    ctx->pc = 0x11fc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)119);
    // 0x11fc4c: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x11fc4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x11fc50: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x11fc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x11fc54: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x11fc54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x11fc58: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x11fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11fc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC5Cu;
        // 0x11fc60: 0xa0a40001  sb          $a0, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC64u;
    // 0x11fc64: 0x0  nop
    ctx->pc = 0x11fc64u;
    // NOP
}

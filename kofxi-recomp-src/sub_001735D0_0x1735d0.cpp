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

// Function: sub_001735D0
// Address: 0x1735d0 - 0x173650
void sub_001735D0_0x1735d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001735D0_0x1735d0");
#endif

    ctx->pc = 0x1735d0u;

    // 0x1735d0: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1735D0u;
    {
        const bool branch_taken_0x1735d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1735d0) {
            ctx->pc = 0x1735D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1735D0u;
            // 0x1735d4: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17362Cu;
            goto label_17362c;
        }
    }
    ctx->pc = 0x1735D8u;
    // 0x1735d8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1735d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1735dc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1735dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1735e0: 0x401027  not         $v0, $v0
    ctx->pc = 0x1735e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1735e4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1735e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1735e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1735E8u;
    {
        const bool branch_taken_0x1735e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1735e8) {
            ctx->pc = 0x1735F8u;
            goto label_1735f8;
        }
    }
    ctx->pc = 0x1735F0u;
    // 0x1735f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1735F0u;
    {
        const bool branch_taken_0x1735f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735F0u;
        // 0x1735f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735f0) {
            ctx->pc = 0x173644u;
            goto label_173644;
        }
    }
    ctx->pc = 0x1735F8u;
label_1735f8:
    // 0x1735f8: 0x50e00007  beql        $a3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1735F8u;
    {
        const bool branch_taken_0x1735f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1735f8) {
            ctx->pc = 0x1735FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1735F8u;
            // 0x1735fc: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x173618u;
            goto label_173618;
        }
    }
    ctx->pc = 0x173600u;
    // 0x173600: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x173600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x173604: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x173604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x173608: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x173608u;
    {
        const bool branch_taken_0x173608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173608) {
            ctx->pc = 0x17360Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173608u;
            // 0x17360c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173644u;
            goto label_173644;
        }
    }
    ctx->pc = 0x173610u;
    // 0x173610: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x173610u;
    {
        const bool branch_taken_0x173610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173610u;
        // 0x173614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173610) {
            ctx->pc = 0x173644u;
            goto label_173644;
        }
    }
    ctx->pc = 0x173618u;
label_173618:
    // 0x173618: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x173618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17361c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17361Cu;
    {
        const bool branch_taken_0x17361c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17361c) {
            ctx->pc = 0x173640u;
            goto label_173640;
        }
    }
    ctx->pc = 0x173624u;
    // 0x173624: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x173624u;
    {
        const bool branch_taken_0x173624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173624u;
        // 0x173628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173624) {
            ctx->pc = 0x173644u;
            goto label_173644;
        }
    }
    ctx->pc = 0x17362Cu;
label_17362c:
    // 0x17362c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x17362cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x173630: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173630u;
    {
        const bool branch_taken_0x173630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173630) {
            ctx->pc = 0x173640u;
            goto label_173640;
        }
    }
    ctx->pc = 0x173638u;
    // 0x173638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173638u;
    {
        const bool branch_taken_0x173638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173638u;
        // 0x17363c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173638) {
            ctx->pc = 0x173644u;
            goto label_173644;
        }
    }
    ctx->pc = 0x173640u;
label_173640:
    // 0x173640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173644:
    // 0x173644: 0x3e00008  jr          $ra
    ctx->pc = 0x173644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17364Cu;
    // 0x17364c: 0x0  nop
    ctx->pc = 0x17364cu;
    // NOP
}

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

// Function: sub_0010E7E0
// Address: 0x10e7e0 - 0x10e870
void sub_0010E7E0_0x10e7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E7E0_0x10e7e0");
#endif

    ctx->pc = 0x10e7e0u;

    // 0x10e7e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10e7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7e4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x10e7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x10e7e8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x10e7e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x10e7ec: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x10e7ecu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x10e7f0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x10e7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x10e7f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E7F4u;
    {
        const bool branch_taken_0x10e7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7F4u;
        // 0x10e7f8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7f4) {
            ctx->pc = 0x10E804u;
            goto label_10e804;
        }
    }
    ctx->pc = 0x10E7FCu;
    // 0x10e7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10E7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7FCu;
        // 0x10e800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E804u;
label_10e804:
    // 0x10e804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E804u;
    {
        const bool branch_taken_0x10e804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E804u;
        // 0x10e808: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e804) {
            ctx->pc = 0x10E814u;
            goto label_10e814;
        }
    }
    ctx->pc = 0x10E80Cu;
    // 0x10e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E80Cu;
        // 0x10e810: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E814u;
label_10e814:
    // 0x10e814: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x10e814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10e818: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x10e818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x10e81c: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x10e81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x10e820: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x10E820u;
    {
        const bool branch_taken_0x10e820 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x10E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E820u;
        // 0x10e824: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e820) {
            ctx->pc = 0x10E858u;
            goto label_10e858;
        }
    }
    ctx->pc = 0x10E828u;
    // 0x10e828: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x10e828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x10e82c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10e830: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x10e830u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x10e834: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10e834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10e838: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10e838u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10e83c: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x10e83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x10e840: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x10e840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x10e844: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E844u;
    {
        const bool branch_taken_0x10e844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10e844) {
            ctx->pc = 0x10E848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E844u;
            // 0x10e848: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E864u;
            goto label_10e864;
        }
    }
    ctx->pc = 0x10E84Cu;
    // 0x10e84c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x10e84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x10e850: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10E850u;
    {
        const bool branch_taken_0x10e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E850u;
        // 0x10e854: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e850) {
            ctx->pc = 0x10E864u;
            goto label_10e864;
        }
    }
    ctx->pc = 0x10E858u;
label_10e858:
    // 0x10e858: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x10e858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10e85c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10e85cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10e860: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x10e860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_10e864:
    // 0x10e864: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x10e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10e868: 0x3e00008  jr          $ra
    ctx->pc = 0x10E868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E868u;
        // 0x10e86c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E870u;
}

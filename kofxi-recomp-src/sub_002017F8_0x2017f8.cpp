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

// Function: sub_002017F8
// Address: 0x2017f8 - 0x201898
void sub_002017F8_0x2017f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002017F8_0x2017f8");
#endif

    switch (ctx->pc) {
        case 0x201824u: goto label_201824;
        default: break;
    }

    ctx->pc = 0x2017f8u;

    // 0x2017f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2017fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2017fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201800: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201804: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x201804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x201808: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x201808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20180c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201810: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x201810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x201814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201818: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x201818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20181c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x20181Cu;
    SET_GPR_U32(ctx, 31, 0x201824u);
    ctx->pc = 0x201820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20181Cu;
    // 0x201820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x20181Cu, 0x201824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201824u;
label_201824:
    // 0x201824: 0x2623001f  addiu       $v1, $s1, 0x1F
    ctx->pc = 0x201824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x201828: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x201828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x20182c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20182cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x201830: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x201830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201834: 0x24650c00  addiu       $a1, $v1, 0xC00
    ctx->pc = 0x201834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3072));
    // 0x201838: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x201838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x20183c: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x20183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x201840: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x201840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201844: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x201844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x201848: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x201848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x20184c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x20184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x201850: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x201850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x201854: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x201854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x201858: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x201858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x20185c: 0xae060058  sw          $a2, 0x58($s0)
    ctx->pc = 0x20185cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 6));
    // 0x201860: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x201860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x201864: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x201864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x201868: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x201868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20186c: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x20186cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
    // 0x201870: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x201870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x201874: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x201874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x201878: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x201878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x20187c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x20187cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x201880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20188c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20188cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201890: 0x3e00008  jr          $ra
    ctx->pc = 0x201890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201890u;
        // 0x201894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201898u;
}

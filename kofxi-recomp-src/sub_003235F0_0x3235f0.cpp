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

// Function: sub_003235F0
// Address: 0x3235f0 - 0x3236d0
void sub_003235F0_0x3235f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003235F0_0x3235f0");
#endif

    switch (ctx->pc) {
        case 0x323620u: goto label_323620;
        default: break;
    }

    ctx->pc = 0x3235f0u;

    // 0x3235f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3235f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3235f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3235f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3235f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3235f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3235fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3235fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323600: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x323600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323608: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x323608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32360c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323610: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x323610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323614: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x323614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323618: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x323618u;
    SET_GPR_U32(ctx, 31, 0x323620u);
    ctx->pc = 0x32361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323618u;
    // 0x32361c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x323618u, 0x323620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323620u;
label_323620:
    // 0x323620: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x323620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x323624: 0x3c0501dd  lui         $a1, 0x1DD
    ctx->pc = 0x323624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)477 << 16));
    // 0x323628: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x323628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x32362c: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x32362cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x323630: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x323630u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x323634: 0x24a59410  addiu       $a1, $a1, -0x6BF0
    ctx->pc = 0x323634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939664));
    // 0x323638: 0xaa4821  addu        $t1, $a1, $t2
    ctx->pc = 0x323638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x32363c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32363cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323640: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x323640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x323644: 0x24639418  addiu       $v1, $v1, -0x6BE8
    ctx->pc = 0x323644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939672));
    // 0x323648: 0x24849414  addiu       $a0, $a0, -0x6BEC
    ctx->pc = 0x323648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939668));
    // 0x32364c: 0x6a3021  addu        $a2, $v1, $t2
    ctx->pc = 0x32364cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x323650: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x323650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323654: 0x8a3821  addu        $a3, $a0, $t2
    ctx->pc = 0x323654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x323658: 0xad310000  sw          $s1, 0x0($t1)
    ctx->pc = 0x323658u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 17));
    // 0x32365c: 0x2463941c  addiu       $v1, $v1, -0x6BE4
    ctx->pc = 0x32365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939676));
    // 0x323660: 0xacf00000  sw          $s0, 0x0($a3)
    ctx->pc = 0x323660u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
    // 0x323664: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x323664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x323668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x323668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32366c: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x32366cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
    // 0x323670: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x323670u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x323674: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x323674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323678: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x323678u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x32367c: 0x24639424  addiu       $v1, $v1, -0x6BDC
    ctx->pc = 0x32367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939684));
    // 0x323680: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x323680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x323684: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x323684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x323688: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x323688u;
    {
        const bool branch_taken_0x323688 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x32368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323688u;
        // 0x32368c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323688) {
            ctx->pc = 0x3236A8u;
            goto label_3236a8;
        }
    }
    ctx->pc = 0x323690u;
    // 0x323690: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x323690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x323694: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x323694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323698: 0x948300d4  lhu         $v1, 0xD4($a0)
    ctx->pc = 0x323698u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x32369c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x32369cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3236a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3236A0u;
    {
        const bool branch_taken_0x3236a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3236A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236A0u;
        // 0x3236a4: 0xa48300d4  sh          $v1, 0xD4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 212), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236a0) {
            ctx->pc = 0x3236ACu;
            goto label_3236ac;
        }
    }
    ctx->pc = 0x3236A8u;
label_3236a8:
    // 0x3236a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3236a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3236ac:
    // 0x3236ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3236acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3236b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3236b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3236b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3236b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3236b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3236b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3236bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3236bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3236c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3236C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3236C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236C0u;
        // 0x3236c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3236C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3236C8u;
    // 0x3236c8: 0x0  nop
    ctx->pc = 0x3236c8u;
    // NOP
    // 0x3236cc: 0x0  nop
    ctx->pc = 0x3236ccu;
    // NOP
    if (ctx->pc == 0x3236ccu) { ctx->pc = 0x3236d0u; }
}

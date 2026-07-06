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

// Function: sub_0020D790
// Address: 0x20d790 - 0x20d850
void sub_0020D790_0x20d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D790_0x20d790");
#endif

    switch (ctx->pc) {
        case 0x20d7c0u: goto label_20d7c0;
        case 0x20d7e0u: goto label_20d7e0;
        default: break;
    }

    ctx->pc = 0x20d790u;

    // 0x20d790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20d794: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20d798: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20d79c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20d7a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20d7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d7a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20d7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d7b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20d7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7b4: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x20d7b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20d7b8: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20D7B8u;
    {
        const bool branch_taken_0x20d7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7B8u;
        // 0x20d7bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d7b8) {
            ctx->pc = 0x20D820u;
            goto label_20d820;
        }
    }
    ctx->pc = 0x20D7C0u;
label_20d7c0:
    // 0x20d7c0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D7C0u;
    {
        const bool branch_taken_0x20d7c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d7c0) {
            ctx->pc = 0x20D7D8u;
            goto label_20d7d8;
        }
    }
    ctx->pc = 0x20D7C8u;
    // 0x20d7c8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x20d7c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7cc: 0x263082a  slt         $at, $s3, $v1
    ctx->pc = 0x20d7ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20d7d0: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x20D7D0u;
    {
        const bool branch_taken_0x20d7d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7D0u;
        // 0x20d7d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d7d0) {
            ctx->pc = 0x20D820u;
            goto label_20d820;
        }
    }
    ctx->pc = 0x20D7D8u;
label_20d7d8:
    // 0x20d7d8: 0xc083580  jal         func_20D600
    ctx->pc = 0x20D7D8u;
    SET_GPR_U32(ctx, 31, 0x20D7E0u);
    ctx->pc = 0x20D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D600u, 0x20D7D8u, 0x20D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D7E0u;
label_20d7e0:
    // 0x20d7e0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x20d7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d7e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20d7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x20d7e8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x20d7e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20d7ec: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x20d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x20d7f0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D7F0u;
    {
        const bool branch_taken_0x20d7f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20d7f0) {
            ctx->pc = 0x20D810u;
            goto label_20d810;
        }
    }
    ctx->pc = 0x20D7F8u;
    // 0x20d7f8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x20d7f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20d7fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20d7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x20d800: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20d800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20d804: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20d808: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x20d808u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d80c: 0x0  nop
    ctx->pc = 0x20d80cu;
    // NOP
label_20d810:
    // 0x20d810: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x20d810u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20d814: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x20D814u;
    {
        const bool branch_taken_0x20d814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D814u;
        // 0x20d818: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d814) {
            ctx->pc = 0x20D7C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d7c0;
        }
    }
    ctx->pc = 0x20D81Cu;
    // 0x20d81c: 0x0  nop
    ctx->pc = 0x20d81cu;
    // NOP
label_20d820:
    // 0x20d820: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20d820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d824: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x20d824u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d828: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20d828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d82c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20d82cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20d830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d83c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D83Cu;
        // 0x20d840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D844u;
    // 0x20d844: 0x0  nop
    ctx->pc = 0x20d844u;
    // NOP
    // 0x20d848: 0x0  nop
    ctx->pc = 0x20d848u;
    // NOP
    // 0x20d84c: 0x0  nop
    ctx->pc = 0x20d84cu;
    // NOP
}

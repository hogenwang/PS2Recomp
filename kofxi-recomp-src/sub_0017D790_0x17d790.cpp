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

// Function: sub_0017D790
// Address: 0x17d790 - 0x17d830
void sub_0017D790_0x17d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D790_0x17d790");
#endif

    switch (ctx->pc) {
        case 0x17d7c8u: goto label_17d7c8;
        default: break;
    }

    ctx->pc = 0x17d790u;

    // 0x17d790: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17d790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17d794: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x17d794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x17d798: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x17d798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17d79c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17d79cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7a0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17d7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17d7a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17d7a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x17d7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17d7ac: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x17d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x17d7b0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17d7b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17d7b8: 0x24690028  addiu       $t1, $v1, 0x28
    ctx->pc = 0x17d7b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x17d7bc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17d7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d7c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17d7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d7c4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x17d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_17d7c8:
    // 0x17d7c8: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x17d7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x17d7cc: 0xa1000001  sb          $zero, 0x1($t0)
    ctx->pc = 0x17d7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d7d0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x17d7d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17d7d4: 0x15430004  bne         $t2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D7D4u;
    {
        const bool branch_taken_0x17d7d4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x17d7d4) {
            ctx->pc = 0x17D7E8u;
            goto label_17d7e8;
        }
    }
    ctx->pc = 0x17D7DCu;
    // 0x17d7dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17D7DCu;
    {
        const bool branch_taken_0x17d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7DCu;
        // 0x17d7e0: 0xa1070004  sb          $a3, 0x4($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7dc) {
            ctx->pc = 0x17D7F0u;
            goto label_17d7f0;
        }
    }
    ctx->pc = 0x17D7E4u;
    // 0x17d7e4: 0x0  nop
    ctx->pc = 0x17d7e4u;
    // NOP
label_17d7e8:
    // 0x17d7e8: 0xa1060004  sb          $a2, 0x4($t0)
    ctx->pc = 0x17d7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x17d7ec: 0x0  nop
    ctx->pc = 0x17d7ecu;
    // NOP
label_17d7f0:
    // 0x17d7f0: 0xa1000007  sb          $zero, 0x7($t0)
    ctx->pc = 0x17d7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d7f4: 0xa105000a  sb          $a1, 0xA($t0)
    ctx->pc = 0x17d7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x17d7f8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x17d7f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x17d7fc: 0xa105000d  sb          $a1, 0xD($t0)
    ctx->pc = 0x17d7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x17d800: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x17d800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17d804: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x17D804u;
    {
        const bool branch_taken_0x17d804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D804u;
        // 0x17d808: 0xa1050010  sb          $a1, 0x10($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d804) {
            ctx->pc = 0x17D7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d7c8;
        }
    }
    ctx->pc = 0x17D80Cu;
    // 0x17d80c: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x17d80cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d810: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x17d810u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x17d814: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x17d814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d818: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x17d818u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x17d81c: 0xa480001a  sh          $zero, 0x1A($a0)
    ctx->pc = 0x17d81cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x17d820: 0x3e00008  jr          $ra
    ctx->pc = 0x17D820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D820u;
        // 0x17d824: 0xa480001c  sh          $zero, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D828u;
    // 0x17d828: 0x0  nop
    ctx->pc = 0x17d828u;
    // NOP
    // 0x17d82c: 0x0  nop
    ctx->pc = 0x17d82cu;
    // NOP
    if (ctx->pc == 0x17d82cu) { ctx->pc = 0x17d830u; }
}

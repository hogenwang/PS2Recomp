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

// Function: sub_00330180
// Address: 0x330180 - 0x330220
void sub_00330180_0x330180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330180_0x330180");
#endif

    ctx->pc = 0x330180u;

    // 0x330180: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x330180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x330184: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x330184u;
    {
        const bool branch_taken_0x330184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330184) {
            ctx->pc = 0x330188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330184u;
            // 0x330188: 0x84820002  lh          $v0, 0x2($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3301D0u;
            goto label_3301d0;
        }
    }
    ctx->pc = 0x33018Cu;
    // 0x33018c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x33018cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x330190: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x330190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x330194: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x330194u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x330198: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x330198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33019c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33019cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3301a0: 0x2841fee1  slti        $at, $v0, -0x11F
    ctx->pc = 0x3301a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967009) ? 1 : 0);
    // 0x3301a4: 0x5020001b  beql        $at, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3301A4u;
    {
        const bool branch_taken_0x3301a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3301a4) {
            ctx->pc = 0x3301A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3301A4u;
            // 0x3301a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330214u;
            goto label_330214;
        }
    }
    ctx->pc = 0x3301ACu;
    // 0x3301ac: 0x2403fee0  addiu       $v1, $zero, -0x120
    ctx->pc = 0x3301acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
    // 0x3301b0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3301b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3301b4: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x3301b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3301b8: 0x9044e810  lbu         $a0, -0x17F0($v0)
    ctx->pc = 0x3301b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961168)));
    // 0x3301bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3301bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3301c0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x3301c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x3301c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3301c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3301c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3301C8u;
    {
        const bool branch_taken_0x3301c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3301CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301C8u;
        // 0x3301cc: 0xa064e810  sb          $a0, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3301c8) {
            ctx->pc = 0x330214u;
            goto label_330214;
        }
    }
    ctx->pc = 0x3301D0u;
label_3301d0:
    // 0x3301d0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3301d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3301d4: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x3301d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3301d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3301d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3301dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3301dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3301e0: 0x28410281  slti        $at, $v0, 0x281
    ctx->pc = 0x3301e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x3301e4: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3301E4u;
    {
        const bool branch_taken_0x3301e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3301e4) {
            ctx->pc = 0x330210u;
            goto label_330210;
        }
    }
    ctx->pc = 0x3301ECu;
    // 0x3301ec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3301ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3301f0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3301f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3301f4: 0x9046e810  lbu         $a2, -0x17F0($v0)
    ctx->pc = 0x3301f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961168)));
    // 0x3301f8: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x3301f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x3301fc: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x3301fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x330200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330204: 0xa066e810  sb          $a2, -0x17F0($v1)
    ctx->pc = 0x330204u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 6));
    // 0x330208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x330208u;
    {
        const bool branch_taken_0x330208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330208u;
        // 0x33020c: 0xa4850002  sh          $a1, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330208) {
            ctx->pc = 0x330214u;
            goto label_330214;
        }
    }
    ctx->pc = 0x330210u;
label_330210:
    // 0x330210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330214:
    // 0x330214: 0x3e00008  jr          $ra
    ctx->pc = 0x330214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33021Cu;
    // 0x33021c: 0x0  nop
    ctx->pc = 0x33021cu;
    // NOP
    if (ctx->pc == 0x33021cu) { ctx->pc = 0x330220u; }
}

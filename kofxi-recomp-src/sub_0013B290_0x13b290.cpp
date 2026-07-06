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

// Function: sub_0013B290
// Address: 0x13b290 - 0x13b360
void sub_0013B290_0x13b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B290_0x13b290");
#endif

    switch (ctx->pc) {
        case 0x13b2b8u: goto label_13b2b8;
        case 0x13b2c4u: goto label_13b2c4;
        case 0x13b2dcu: goto label_13b2dc;
        case 0x13b300u: goto label_13b300;
        case 0x13b338u: goto label_13b338;
        case 0x13b34cu: goto label_13b34c;
        default: break;
    }

    ctx->pc = 0x13b290u;

    // 0x13b290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b294: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x13b294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x13b298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13b298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13b29c: 0x24a5c4f0  addiu       $a1, $a1, -0x3B10
    ctx->pc = 0x13b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952176));
    // 0x13b2a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b2a4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x13b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x13b2a8: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x13b2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x13b2ac: 0x26105bc0  addiu       $s0, $s0, 0x5BC0
    ctx->pc = 0x13b2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23488));
    // 0x13b2b0: 0xc049c48  jal         func_127120
    ctx->pc = 0x13B2B0u;
    SET_GPR_U32(ctx, 31, 0x13B2B8u);
    ctx->pc = 0x13B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B2B0u;
    // 0x13b2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x13B2B0u, 0x13B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2B8u;
label_13b2b8:
    // 0x13b2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b2bc: 0xc04ec7c  jal         func_13B1F0
    ctx->pc = 0x13B2BCu;
    SET_GPR_U32(ctx, 31, 0x13B2C4u);
    ctx->pc = 0x13B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B2BCu;
    // 0x13b2c0: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B1F0u, 0x13B2BCu, 0x13B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2C4u;
label_13b2c4:
    // 0x13b2c4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x13b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x13b2c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x13b2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x13b2cc: 0x24845be1  addiu       $a0, $a0, 0x5BE1
    ctx->pc = 0x13b2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23521));
    // 0x13b2d0: 0x24a5c518  addiu       $a1, $a1, -0x3AE8
    ctx->pc = 0x13b2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952216));
    // 0x13b2d4: 0xc049c48  jal         func_127120
    ctx->pc = 0x13B2D4u;
    SET_GPR_U32(ctx, 31, 0x13B2DCu);
    ctx->pc = 0x13B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B2D4u;
    // 0x13b2d8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x13B2D4u, 0x13B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2DCu;
label_13b2dc:
    // 0x13b2dc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13b2e0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x13b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x13b2e4: 0x24425be1  addiu       $v0, $v0, 0x5BE1
    ctx->pc = 0x13b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23521));
    // 0x13b2e8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x13b2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13b2ec: 0x24460005  addiu       $a2, $v0, 0x5
    ctx->pc = 0x13b2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x13b2f0: 0x24a5c53a  addiu       $a1, $a1, -0x3AC6
    ctx->pc = 0x13b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952250));
    // 0x13b2f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13b2f8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x13b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13b2fc: 0x9444ec80  lhu         $a0, -0x1380($v0)
    ctx->pc = 0x13b2fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962304)));
label_13b300:
    // 0x13b300: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x13b300u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b304: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13b304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13b308: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B308u;
    {
        const bool branch_taken_0x13b308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b308) {
            ctx->pc = 0x13B318u;
            goto label_13b318;
        }
    }
    ctx->pc = 0x13B310u;
    // 0x13b310: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x13b310u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b314: 0x0  nop
    ctx->pc = 0x13b314u;
    // NOP
label_13b318:
    // 0x13b318: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13b318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13b31c: 0x2ce2000c  sltiu       $v0, $a3, 0xC
    ctx->pc = 0x13b31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x13b320: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b324: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13B324u;
    {
        const bool branch_taken_0x13b324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B324u;
        // 0x13b328: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b324) {
            ctx->pc = 0x13B300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13b300;
        }
    }
    ctx->pc = 0x13B32Cu;
    // 0x13b32c: 0x26040021  addiu       $a0, $s0, 0x21
    ctx->pc = 0x13b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 33));
    // 0x13b330: 0xc04ec7c  jal         func_13B1F0
    ctx->pc = 0x13B330u;
    SET_GPR_U32(ctx, 31, 0x13B338u);
    ctx->pc = 0x13B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B330u;
    // 0x13b334: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B1F0u, 0x13B330u, 0x13B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B338u;
label_13b338:
    // 0x13b338: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x13b338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x13b33c: 0x2604002d  addiu       $a0, $s0, 0x2D
    ctx->pc = 0x13b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 45));
    // 0x13b340: 0x24a5c528  addiu       $a1, $a1, -0x3AD8
    ctx->pc = 0x13b340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952232));
    // 0x13b344: 0xc049c48  jal         func_127120
    ctx->pc = 0x13B344u;
    SET_GPR_U32(ctx, 31, 0x13B34Cu);
    ctx->pc = 0x13B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B344u;
    // 0x13b348: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x13B344u, 0x13B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B34Cu;
label_13b34c:
    // 0x13b34c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b354: 0x3e00008  jr          $ra
    ctx->pc = 0x13B354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B354u;
        // 0x13b358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B35Cu;
    // 0x13b35c: 0x0  nop
    ctx->pc = 0x13b35cu;
    // NOP
    if (ctx->pc == 0x13b35cu) { ctx->pc = 0x13b360u; }
}

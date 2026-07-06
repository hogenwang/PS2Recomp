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

// Function: sub_0014AD20
// Address: 0x14ad20 - 0x14adf0
void sub_0014AD20_0x14ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AD20_0x14ad20");
#endif

    switch (ctx->pc) {
        case 0x14ad44u: goto label_14ad44;
        case 0x14ad68u: goto label_14ad68;
        case 0x14ad7cu: goto label_14ad7c;
        case 0x14ad88u: goto label_14ad88;
        case 0x14ad9cu: goto label_14ad9c;
        case 0x14adb0u: goto label_14adb0;
        case 0x14adc4u: goto label_14adc4;
        default: break;
    }

    ctx->pc = 0x14ad20u;

    // 0x14ad20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ad24: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14ad28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14ad2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ad2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ad30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ad34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ad34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad38: 0x8c445d08  lw          $a0, 0x5D08($v0)
    ctx->pc = 0x14ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    // 0x14ad3c: 0xc06c4ca  jal         func_1B1328
    ctx->pc = 0x14AD3Cu;
    SET_GPR_U32(ctx, 31, 0x14AD44u);
    ctx->pc = 0x14AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD3Cu;
    // 0x14ad40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1328u, 0x14AD3Cu, 0x14AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD44u;
label_14ad44:
    // 0x14ad44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ad48: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14AD48u;
    {
        const bool branch_taken_0x14ad48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ad48) {
            ctx->pc = 0x14ADA4u;
            goto label_14ada4;
        }
    }
    ctx->pc = 0x14AD50u;
    // 0x14ad50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14ad54: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14AD54u;
    {
        const bool branch_taken_0x14ad54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ad54) {
            ctx->pc = 0x14AD90u;
            goto label_14ad90;
        }
    }
    ctx->pc = 0x14AD5Cu;
    // 0x14ad5c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14ad60: 0xc06c128  jal         func_1B04A0
    ctx->pc = 0x14AD60u;
    SET_GPR_U32(ctx, 31, 0x14AD68u);
    ctx->pc = 0x14AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD60u;
    // 0x14ad64: 0x8c445d08  lw          $a0, 0x5D08($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04A0u, 0x14AD60u, 0x14AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD68u;
label_14ad68:
    // 0x14ad68: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14ad6c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14ad70: 0x2484cdd0  addiu       $a0, $a0, -0x3230
    ctx->pc = 0x14ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954448));
    // 0x14ad74: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14AD74u;
    SET_GPR_U32(ctx, 31, 0x14AD7Cu);
    ctx->pc = 0x14AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD74u;
    // 0x14ad78: 0xac405d08  sw          $zero, 0x5D08($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 23816), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14AD74u, 0x14AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD7Cu;
label_14ad7c:
    // 0x14ad7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad80: 0xc052b2c  jal         func_14ACB0
    ctx->pc = 0x14AD80u;
    SET_GPR_U32(ctx, 31, 0x14AD88u);
    ctx->pc = 0x14AD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD80u;
    // 0x14ad84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACB0u, 0x14AD80u, 0x14AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD88u;
label_14ad88:
    // 0x14ad88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14AD88u;
    {
        const bool branch_taken_0x14ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD88u;
        // 0x14ad8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad88) {
            ctx->pc = 0x14ADD0u;
            goto label_14add0;
        }
    }
    ctx->pc = 0x14AD90u;
label_14ad90:
    // 0x14ad90: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14ad94: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14AD94u;
    SET_GPR_U32(ctx, 31, 0x14AD9Cu);
    ctx->pc = 0x14AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD94u;
    // 0x14ad98: 0x2484cdf0  addiu       $a0, $a0, -0x3210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14AD94u, 0x14AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD9Cu;
label_14ad9c:
    // 0x14ad9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14AD9Cu;
    {
        const bool branch_taken_0x14ad9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD9Cu;
        // 0x14ada0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad9c) {
            ctx->pc = 0x14ADD0u;
            goto label_14add0;
        }
    }
    ctx->pc = 0x14ADA4u;
label_14ada4:
    // 0x14ada4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14ada8: 0xc06c4b0  jal         func_1B12C0
    ctx->pc = 0x14ADA8u;
    SET_GPR_U32(ctx, 31, 0x14ADB0u);
    ctx->pc = 0x14ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ADA8u;
    // 0x14adac: 0x8c445d08  lw          $a0, 0x5D08($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12C0u, 0x14ADA8u, 0x14ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ADB0u;
label_14adb0:
    // 0x14adb0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14adb4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14adb8: 0xac825d00  sw          $v0, 0x5D00($a0)
    ctx->pc = 0x14adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 23808), GPR_U32(ctx, 2));
    // 0x14adbc: 0xc06c128  jal         func_1B04A0
    ctx->pc = 0x14ADBCu;
    SET_GPR_U32(ctx, 31, 0x14ADC4u);
    ctx->pc = 0x14ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ADBCu;
    // 0x14adc0: 0x8c645d08  lw          $a0, 0x5D08($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04A0u, 0x14ADBCu, 0x14ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ADC4u;
label_14adc4:
    // 0x14adc4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14adc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14adcc: 0xac605d08  sw          $zero, 0x5D08($v1)
    ctx->pc = 0x14adccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23816), GPR_U32(ctx, 0));
label_14add0:
    // 0x14add0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14add0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14add4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14add4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14add8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14add8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14addc: 0x3e00008  jr          $ra
    ctx->pc = 0x14ADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADDCu;
        // 0x14ade0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ADDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ADE4u;
    // 0x14ade4: 0x0  nop
    ctx->pc = 0x14ade4u;
    // NOP
    // 0x14ade8: 0x0  nop
    ctx->pc = 0x14ade8u;
    // NOP
    // 0x14adec: 0x0  nop
    ctx->pc = 0x14adecu;
    // NOP
    if (ctx->pc == 0x14adecu) { ctx->pc = 0x14adf0u; }
}

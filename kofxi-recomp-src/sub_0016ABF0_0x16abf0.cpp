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

// Function: sub_0016ABF0
// Address: 0x16abf0 - 0x16af30
void sub_0016ABF0_0x16abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ABF0_0x16abf0");
#endif

    switch (ctx->pc) {
        case 0x16abf0u: goto label_16abf0;
        case 0x16abf4u: goto label_16abf4;
        case 0x16abf8u: goto label_16abf8;
        case 0x16abfcu: goto label_16abfc;
        case 0x16ac00u: goto label_16ac00;
        case 0x16ac04u: goto label_16ac04;
        case 0x16ac08u: goto label_16ac08;
        case 0x16ac0cu: goto label_16ac0c;
        case 0x16ac10u: goto label_16ac10;
        case 0x16ac14u: goto label_16ac14;
        case 0x16ac18u: goto label_16ac18;
        case 0x16ac1cu: goto label_16ac1c;
        case 0x16ac20u: goto label_16ac20;
        case 0x16ac24u: goto label_16ac24;
        case 0x16ac28u: goto label_16ac28;
        case 0x16ac2cu: goto label_16ac2c;
        case 0x16ac30u: goto label_16ac30;
        case 0x16ac34u: goto label_16ac34;
        case 0x16ac38u: goto label_16ac38;
        case 0x16ac3cu: goto label_16ac3c;
        case 0x16ac40u: goto label_16ac40;
        case 0x16ac44u: goto label_16ac44;
        case 0x16ac48u: goto label_16ac48;
        case 0x16ac4cu: goto label_16ac4c;
        case 0x16ac50u: goto label_16ac50;
        case 0x16ac54u: goto label_16ac54;
        case 0x16ac58u: goto label_16ac58;
        case 0x16ac5cu: goto label_16ac5c;
        case 0x16ac60u: goto label_16ac60;
        case 0x16ac64u: goto label_16ac64;
        case 0x16ac68u: goto label_16ac68;
        case 0x16ac6cu: goto label_16ac6c;
        case 0x16ac70u: goto label_16ac70;
        case 0x16ac74u: goto label_16ac74;
        case 0x16ac78u: goto label_16ac78;
        case 0x16ac7cu: goto label_16ac7c;
        case 0x16ac80u: goto label_16ac80;
        case 0x16ac84u: goto label_16ac84;
        case 0x16ac88u: goto label_16ac88;
        case 0x16ac8cu: goto label_16ac8c;
        case 0x16ac90u: goto label_16ac90;
        case 0x16ac94u: goto label_16ac94;
        case 0x16ac98u: goto label_16ac98;
        case 0x16ac9cu: goto label_16ac9c;
        case 0x16aca0u: goto label_16aca0;
        case 0x16aca4u: goto label_16aca4;
        case 0x16aca8u: goto label_16aca8;
        case 0x16acacu: goto label_16acac;
        case 0x16acb0u: goto label_16acb0;
        case 0x16acb4u: goto label_16acb4;
        case 0x16acb8u: goto label_16acb8;
        case 0x16acbcu: goto label_16acbc;
        case 0x16acc0u: goto label_16acc0;
        case 0x16acc4u: goto label_16acc4;
        case 0x16acc8u: goto label_16acc8;
        case 0x16acccu: goto label_16accc;
        case 0x16acd0u: goto label_16acd0;
        case 0x16acd4u: goto label_16acd4;
        case 0x16acd8u: goto label_16acd8;
        case 0x16acdcu: goto label_16acdc;
        case 0x16ace0u: goto label_16ace0;
        case 0x16ace4u: goto label_16ace4;
        case 0x16ace8u: goto label_16ace8;
        case 0x16acecu: goto label_16acec;
        case 0x16acf0u: goto label_16acf0;
        case 0x16acf4u: goto label_16acf4;
        case 0x16acf8u: goto label_16acf8;
        case 0x16acfcu: goto label_16acfc;
        case 0x16ad00u: goto label_16ad00;
        case 0x16ad04u: goto label_16ad04;
        case 0x16ad08u: goto label_16ad08;
        case 0x16ad0cu: goto label_16ad0c;
        case 0x16ad10u: goto label_16ad10;
        case 0x16ad14u: goto label_16ad14;
        case 0x16ad18u: goto label_16ad18;
        case 0x16ad1cu: goto label_16ad1c;
        case 0x16ad20u: goto label_16ad20;
        case 0x16ad24u: goto label_16ad24;
        case 0x16ad28u: goto label_16ad28;
        case 0x16ad2cu: goto label_16ad2c;
        case 0x16ad30u: goto label_16ad30;
        case 0x16ad34u: goto label_16ad34;
        case 0x16ad38u: goto label_16ad38;
        case 0x16ad3cu: goto label_16ad3c;
        case 0x16ad40u: goto label_16ad40;
        case 0x16ad44u: goto label_16ad44;
        case 0x16ad48u: goto label_16ad48;
        case 0x16ad4cu: goto label_16ad4c;
        case 0x16ad50u: goto label_16ad50;
        case 0x16ad54u: goto label_16ad54;
        case 0x16ad58u: goto label_16ad58;
        case 0x16ad5cu: goto label_16ad5c;
        case 0x16ad60u: goto label_16ad60;
        case 0x16ad64u: goto label_16ad64;
        case 0x16ad68u: goto label_16ad68;
        case 0x16ad6cu: goto label_16ad6c;
        case 0x16ad70u: goto label_16ad70;
        case 0x16ad74u: goto label_16ad74;
        case 0x16ad78u: goto label_16ad78;
        case 0x16ad7cu: goto label_16ad7c;
        case 0x16ad80u: goto label_16ad80;
        case 0x16ad84u: goto label_16ad84;
        case 0x16ad88u: goto label_16ad88;
        case 0x16ad8cu: goto label_16ad8c;
        case 0x16ad90u: goto label_16ad90;
        case 0x16ad94u: goto label_16ad94;
        case 0x16ad98u: goto label_16ad98;
        case 0x16ad9cu: goto label_16ad9c;
        case 0x16ada0u: goto label_16ada0;
        case 0x16ada4u: goto label_16ada4;
        case 0x16ada8u: goto label_16ada8;
        case 0x16adacu: goto label_16adac;
        case 0x16adb0u: goto label_16adb0;
        case 0x16adb4u: goto label_16adb4;
        case 0x16adb8u: goto label_16adb8;
        case 0x16adbcu: goto label_16adbc;
        case 0x16adc0u: goto label_16adc0;
        case 0x16adc4u: goto label_16adc4;
        case 0x16adc8u: goto label_16adc8;
        case 0x16adccu: goto label_16adcc;
        case 0x16add0u: goto label_16add0;
        case 0x16add4u: goto label_16add4;
        case 0x16add8u: goto label_16add8;
        case 0x16addcu: goto label_16addc;
        case 0x16ade0u: goto label_16ade0;
        case 0x16ade4u: goto label_16ade4;
        case 0x16ade8u: goto label_16ade8;
        case 0x16adecu: goto label_16adec;
        case 0x16adf0u: goto label_16adf0;
        case 0x16adf4u: goto label_16adf4;
        case 0x16adf8u: goto label_16adf8;
        case 0x16adfcu: goto label_16adfc;
        case 0x16ae00u: goto label_16ae00;
        case 0x16ae04u: goto label_16ae04;
        case 0x16ae08u: goto label_16ae08;
        case 0x16ae0cu: goto label_16ae0c;
        case 0x16ae10u: goto label_16ae10;
        case 0x16ae14u: goto label_16ae14;
        case 0x16ae18u: goto label_16ae18;
        case 0x16ae1cu: goto label_16ae1c;
        case 0x16ae20u: goto label_16ae20;
        case 0x16ae24u: goto label_16ae24;
        case 0x16ae28u: goto label_16ae28;
        case 0x16ae2cu: goto label_16ae2c;
        case 0x16ae30u: goto label_16ae30;
        case 0x16ae34u: goto label_16ae34;
        case 0x16ae38u: goto label_16ae38;
        case 0x16ae3cu: goto label_16ae3c;
        case 0x16ae40u: goto label_16ae40;
        case 0x16ae44u: goto label_16ae44;
        case 0x16ae48u: goto label_16ae48;
        case 0x16ae4cu: goto label_16ae4c;
        case 0x16ae50u: goto label_16ae50;
        case 0x16ae54u: goto label_16ae54;
        case 0x16ae58u: goto label_16ae58;
        case 0x16ae5cu: goto label_16ae5c;
        case 0x16ae60u: goto label_16ae60;
        case 0x16ae64u: goto label_16ae64;
        case 0x16ae68u: goto label_16ae68;
        case 0x16ae6cu: goto label_16ae6c;
        case 0x16ae70u: goto label_16ae70;
        case 0x16ae74u: goto label_16ae74;
        case 0x16ae78u: goto label_16ae78;
        case 0x16ae7cu: goto label_16ae7c;
        case 0x16ae80u: goto label_16ae80;
        case 0x16ae84u: goto label_16ae84;
        case 0x16ae88u: goto label_16ae88;
        case 0x16ae8cu: goto label_16ae8c;
        case 0x16ae90u: goto label_16ae90;
        case 0x16ae94u: goto label_16ae94;
        case 0x16ae98u: goto label_16ae98;
        case 0x16ae9cu: goto label_16ae9c;
        case 0x16aea0u: goto label_16aea0;
        case 0x16aea4u: goto label_16aea4;
        case 0x16aea8u: goto label_16aea8;
        case 0x16aeacu: goto label_16aeac;
        case 0x16aeb0u: goto label_16aeb0;
        case 0x16aeb4u: goto label_16aeb4;
        case 0x16aeb8u: goto label_16aeb8;
        case 0x16aebcu: goto label_16aebc;
        case 0x16aec0u: goto label_16aec0;
        case 0x16aec4u: goto label_16aec4;
        case 0x16aec8u: goto label_16aec8;
        case 0x16aeccu: goto label_16aecc;
        case 0x16aed0u: goto label_16aed0;
        case 0x16aed4u: goto label_16aed4;
        case 0x16aed8u: goto label_16aed8;
        case 0x16aedcu: goto label_16aedc;
        case 0x16aee0u: goto label_16aee0;
        case 0x16aee4u: goto label_16aee4;
        case 0x16aee8u: goto label_16aee8;
        case 0x16aeecu: goto label_16aeec;
        case 0x16aef0u: goto label_16aef0;
        case 0x16aef4u: goto label_16aef4;
        case 0x16aef8u: goto label_16aef8;
        case 0x16aefcu: goto label_16aefc;
        case 0x16af00u: goto label_16af00;
        case 0x16af04u: goto label_16af04;
        case 0x16af08u: goto label_16af08;
        case 0x16af0cu: goto label_16af0c;
        case 0x16af10u: goto label_16af10;
        case 0x16af14u: goto label_16af14;
        case 0x16af18u: goto label_16af18;
        case 0x16af1cu: goto label_16af1c;
        case 0x16af20u: goto label_16af20;
        case 0x16af24u: goto label_16af24;
        case 0x16af28u: goto label_16af28;
        case 0x16af2cu: goto label_16af2c;
        default: break;
    }

    ctx->pc = 0x16abf0u;

label_16abf0:
    // 0x16abf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_16abf4:
    // 0x16abf4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_16abf8:
    // 0x16abf8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16abf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_16abfc:
    // 0x16abfc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16ac00:
    // 0x16ac00: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x16ac00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ac04:
    // 0x16ac04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16ac04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16ac08:
    // 0x16ac08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16ac0c:
    // 0x16ac0c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16ac0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16ac10:
    // 0x16ac10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16ac10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16ac14:
    // 0x16ac14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16ac14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16ac18:
    // 0x16ac18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16ac1c:
    // 0x16ac1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ac1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16ac20:
    // 0x16ac20: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x16ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_16ac24:
    // 0x16ac24: 0xc0627c8  jal         func_189F20
label_16ac28:
    if (ctx->pc == 0x16AC28u) {
        ctx->pc = 0x16AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC24u;
        // 0x16ac28: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC2Cu;
        goto label_16ac2c;
    }
    ctx->pc = 0x16AC24u;
    SET_GPR_U32(ctx, 31, 0x16AC2Cu);
    ctx->pc = 0x16AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC24u;
    // 0x16ac28: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x16AC24u, 0x16AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC2Cu;
label_16ac2c:
    // 0x16ac2c: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x16ac2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_16ac30:
    // 0x16ac30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16ac30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ac34:
    // 0x16ac34: 0x8ea400dc  lw          $a0, 0xDC($s5)
    ctx->pc = 0x16ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_16ac38:
    // 0x16ac38: 0xc062804  jal         func_18A010
label_16ac3c:
    if (ctx->pc == 0x16AC3Cu) {
        ctx->pc = 0x16AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC38u;
        // 0x16ac3c: 0x26b10314  addiu       $s1, $s5, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 788));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC40u;
        goto label_16ac40;
    }
    ctx->pc = 0x16AC38u;
    SET_GPR_U32(ctx, 31, 0x16AC40u);
    ctx->pc = 0x16AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC38u;
    // 0x16ac3c: 0x26b10314  addiu       $s1, $s5, 0x314 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 788));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x16AC38u, 0x16AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC40u;
label_16ac40:
    // 0x16ac40: 0x965300f0  lhu         $s3, 0xF0($s2)
    ctx->pc = 0x16ac40u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 240)));
label_16ac44:
    // 0x16ac44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ac44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ac48:
    // 0x16ac48: 0x2a620120  slti        $v0, $s3, 0x120
    ctx->pc = 0x16ac48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)288) ? 1 : 0);
label_16ac4c:
    // 0x16ac4c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_16ac50:
    if (ctx->pc == 0x16AC50u) {
        ctx->pc = 0x16AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC4Cu;
        // 0x16ac50: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC54u;
        goto label_16ac54;
    }
    ctx->pc = 0x16AC4Cu;
    {
        const bool branch_taken_0x16ac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ac4c) {
            ctx->pc = 0x16AC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AC4Cu;
            // 0x16ac50: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC6Cu;
            goto label_16ac6c;
        }
    }
    ctx->pc = 0x16AC54u;
label_16ac54:
    // 0x16ac54: 0x86a3050c  lh          $v1, 0x50C($s5)
    ctx->pc = 0x16ac54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1292)));
label_16ac58:
    // 0x16ac58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16ac58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_16ac5c:
    // 0x16ac5c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_16ac60:
    if (ctx->pc == 0x16AC60u) {
        ctx->pc = 0x16AC64u;
        goto label_16ac64;
    }
    ctx->pc = 0x16AC5Cu;
    {
        const bool branch_taken_0x16ac5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ac5c) {
            ctx->pc = 0x16AC68u;
            goto label_16ac68;
        }
    }
    ctx->pc = 0x16AC64u;
label_16ac64:
    // 0x16ac64: 0xa6b3050c  sh          $s3, 0x50C($s5)
    ctx->pc = 0x16ac64u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1292), (uint16_t)GPR_U32(ctx, 19));
label_16ac68:
    // 0x16ac68: 0x8ea400dc  lw          $a0, 0xDC($s5)
    ctx->pc = 0x16ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_16ac6c:
    // 0x16ac6c: 0x92a600f7  lbu         $a2, 0xF7($s5)
    ctx->pc = 0x16ac6cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 247)));
label_16ac70:
    // 0x16ac70: 0xc063658  jal         func_18D960
label_16ac74:
    if (ctx->pc == 0x16AC74u) {
        ctx->pc = 0x16AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC70u;
        // 0x16ac74: 0x964500ea  lhu         $a1, 0xEA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC78u;
        goto label_16ac78;
    }
    ctx->pc = 0x16AC70u;
    SET_GPR_U32(ctx, 31, 0x16AC78u);
    ctx->pc = 0x16AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC70u;
    // 0x16ac74: 0x964500ea  lhu         $a1, 0xEA($s2) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D960u, 0x16AC70u, 0x16AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC78u;
label_16ac78:
    // 0x16ac78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ac7c:
    // 0x16ac7c: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x16ac7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_16ac80:
    // 0x16ac80: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_16ac84:
    if (ctx->pc == 0x16AC84u) {
        ctx->pc = 0x16AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC80u;
        // 0x16ac84: 0x32c200ff  andi        $v0, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC88u;
        goto label_16ac88;
    }
    ctx->pc = 0x16AC80u;
    {
        const bool branch_taken_0x16ac80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ac80) {
            ctx->pc = 0x16AC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AC80u;
            // 0x16ac84: 0x32c200ff  andi        $v0, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ACA0u;
            goto label_16aca0;
        }
    }
    ctx->pc = 0x16AC88u;
label_16ac88:
    // 0x16ac88: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_16ac8c:
    // 0x16ac8c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x16ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_16ac90:
    // 0x16ac90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ac94:
    // 0x16ac94: 0x90560000  lbu         $s6, 0x0($v0)
    ctx->pc = 0x16ac94u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16ac98:
    // 0x16ac98: 0x90570001  lbu         $s7, 0x1($v0)
    ctx->pc = 0x16ac98u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_16ac9c:
    // 0x16ac9c: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x16ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_16aca0:
    // 0x16aca0: 0x8e46048c  lw          $a2, 0x48C($s2)
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
label_16aca4:
    // 0x16aca4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16aca8:
    // 0x16aca8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x16aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_16acac:
    // 0x16acac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16acacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_16acb0:
    // 0x16acb0: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x16acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
label_16acb4:
    // 0x16acb4: 0xc4b024  and         $s6, $a2, $a0
    ctx->pc = 0x16acb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_16acb8:
    // 0x16acb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16acbc:
    // 0x16acbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16acc0:
    // 0x16acc0: 0xc055768  jal         func_155DA0
label_16acc4:
    if (ctx->pc == 0x16ACC4u) {
        ctx->pc = 0x16ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACC0u;
        // 0x16acc4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ACC8u;
        goto label_16acc8;
    }
    ctx->pc = 0x16ACC0u;
    SET_GPR_U32(ctx, 31, 0x16ACC8u);
    ctx->pc = 0x16ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ACC0u;
    // 0x16acc4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x16ACC0u, 0x16ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ACC8u;
label_16acc8:
    // 0x16acc8: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x16acc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_16accc:
    // 0x16accc: 0x9225008b  lbu         $a1, 0x8B($s1)
    ctx->pc = 0x16acccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 139)));
label_16acd0:
    // 0x16acd0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16acd4:
    // 0x16acd4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_16acd8:
    // 0x16acd8: 0x244231c0  addiu       $v0, $v0, 0x31C0
    ctx->pc = 0x16acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12736));
label_16acdc:
    // 0x16acdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ace0:
    // 0x16ace0: 0x34a3003f  ori         $v1, $a1, 0x3F
    ctx->pc = 0x16ace0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63);
label_16ace4:
    // 0x16ace4: 0xa223008b  sb          $v1, 0x8B($s1)
    ctx->pc = 0x16ace4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 3));
label_16ace8:
    // 0x16ace8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16acec:
    // 0x16acec: 0x40f809  jalr        $v0
label_16acf0:
    if (ctx->pc == 0x16ACF0u) {
        ctx->pc = 0x16ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACECu;
        // 0x16acf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ACF4u;
        goto label_16acf4;
    }
    ctx->pc = 0x16ACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16ACF4u);
        ctx->pc = 0x16ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACECu;
        // 0x16acf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ACECu, 0x16ACF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16ACF4u;
label_16acf4:
    // 0x16acf4: 0x52c0000b  beql        $s6, $zero, . + 4 + (0xB << 2)
label_16acf8:
    if (ctx->pc == 0x16ACF8u) {
        ctx->pc = 0x16ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACF4u;
        // 0x16acf8: 0x964300ec  lhu         $v1, 0xEC($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ACFCu;
        goto label_16acfc;
    }
    ctx->pc = 0x16ACF4u;
    {
        const bool branch_taken_0x16acf4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x16acf4) {
            ctx->pc = 0x16ACF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ACF4u;
            // 0x16acf8: 0x964300ec  lhu         $v1, 0xEC($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AD24u;
            goto label_16ad24;
        }
    }
    ctx->pc = 0x16ACFCu;
label_16acfc:
    // 0x16acfc: 0x8e43048c  lw          $v1, 0x48C($s2)
    ctx->pc = 0x16acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
label_16ad00:
    // 0x16ad00: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x16ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_16ad04:
    // 0x16ad04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16ad04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16ad08:
    // 0x16ad08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_16ad0c:
    if (ctx->pc == 0x16AD0Cu) {
        ctx->pc = 0x16AD10u;
        goto label_16ad10;
    }
    ctx->pc = 0x16AD08u;
    {
        const bool branch_taken_0x16ad08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ad08) {
            ctx->pc = 0x16AD20u;
            goto label_16ad20;
        }
    }
    ctx->pc = 0x16AD10u;
label_16ad10:
    // 0x16ad10: 0x8ea30498  lw          $v1, 0x498($s5)
    ctx->pc = 0x16ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1176)));
label_16ad14:
    // 0x16ad14: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x16ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_16ad18:
    // 0x16ad18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16ad18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16ad1c:
    // 0x16ad1c: 0xaea20498  sw          $v0, 0x498($s5)
    ctx->pc = 0x16ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1176), GPR_U32(ctx, 2));
label_16ad20:
    // 0x16ad20: 0x964300ec  lhu         $v1, 0xEC($s2)
    ctx->pc = 0x16ad20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
label_16ad24:
    // 0x16ad24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16ad24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_16ad28:
    // 0x16ad28: 0xa64300ee  sh          $v1, 0xEE($s2)
    ctx->pc = 0x16ad28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 238), (uint16_t)GPR_U32(ctx, 3));
label_16ad2c:
    // 0x16ad2c: 0xa65300ec  sh          $s3, 0xEC($s2)
    ctx->pc = 0x16ad2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 236), (uint16_t)GPR_U32(ctx, 19));
label_16ad30:
    // 0x16ad30: 0xa64200f0  sh          $v0, 0xF0($s2)
    ctx->pc = 0x16ad30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 240), (uint16_t)GPR_U32(ctx, 2));
label_16ad34:
    // 0x16ad34: 0xa64200f2  sh          $v0, 0xF2($s2)
    ctx->pc = 0x16ad34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
label_16ad38:
    // 0x16ad38: 0xa64200f4  sh          $v0, 0xF4($s2)
    ctx->pc = 0x16ad38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 244), (uint16_t)GPR_U32(ctx, 2));
label_16ad3c:
    // 0x16ad3c: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x16ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
label_16ad40:
    // 0x16ad40: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16ad44:
    // 0x16ad44: 0xae420498  sw          $v0, 0x498($s2)
    ctx->pc = 0x16ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
label_16ad48:
    // 0x16ad48: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x16ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_16ad4c:
    // 0x16ad4c: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x16ad4cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16ad50:
    // 0x16ad50: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x16ad50u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
label_16ad54:
    // 0x16ad54: 0x964700ec  lhu         $a3, 0xEC($s2)
    ctx->pc = 0x16ad54u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
label_16ad58:
    // 0x16ad58: 0xc063860  jal         func_18E180
label_16ad5c:
    if (ctx->pc == 0x16AD5Cu) {
        ctx->pc = 0x16AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD58u;
        // 0x16ad5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AD60u;
        goto label_16ad60;
    }
    ctx->pc = 0x16AD58u;
    SET_GPR_U32(ctx, 31, 0x16AD60u);
    ctx->pc = 0x16AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD58u;
    // 0x16ad5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E180u, 0x16AD58u, 0x16AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD60u;
label_16ad60:
    // 0x16ad60: 0x964400ea  lhu         $a0, 0xEA($s2)
    ctx->pc = 0x16ad60u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16ad64:
    // 0x16ad64: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16ad64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16ad68:
    // 0x16ad68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ad68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ad6c:
    // 0x16ad6c: 0xc063808  jal         func_18E020
label_16ad70:
    if (ctx->pc == 0x16AD70u) {
        ctx->pc = 0x16AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD6Cu;
        // 0x16ad70: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AD74u;
        goto label_16ad74;
    }
    ctx->pc = 0x16AD6Cu;
    SET_GPR_U32(ctx, 31, 0x16AD74u);
    ctx->pc = 0x16AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD6Cu;
    // 0x16ad70: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x16AD6Cu, 0x16AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD74u;
label_16ad74:
    // 0x16ad74: 0x864304da  lh          $v1, 0x4DA($s2)
    ctx->pc = 0x16ad74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1242)));
label_16ad78:
    // 0x16ad78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ad78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ad7c:
    // 0x16ad7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ad80:
    // 0x16ad80: 0xa64204da  sh          $v0, 0x4DA($s2)
    ctx->pc = 0x16ad80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1242), (uint16_t)GPR_U32(ctx, 2));
label_16ad84:
    // 0x16ad84: 0x964400ea  lhu         $a0, 0xEA($s2)
    ctx->pc = 0x16ad84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16ad88:
    // 0x16ad88: 0xc063808  jal         func_18E020
label_16ad8c:
    if (ctx->pc == 0x16AD8Cu) {
        ctx->pc = 0x16AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD88u;
        // 0x16ad8c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AD90u;
        goto label_16ad90;
    }
    ctx->pc = 0x16AD88u;
    SET_GPR_U32(ctx, 31, 0x16AD90u);
    ctx->pc = 0x16AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD88u;
    // 0x16ad8c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x16AD88u, 0x16AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD90u;
label_16ad90:
    // 0x16ad90: 0x860304da  lh          $v1, 0x4DA($s0)
    ctx->pc = 0x16ad90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1242)));
label_16ad94:
    // 0x16ad94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ad98:
    // 0x16ad98: 0xa60204da  sh          $v0, 0x4DA($s0)
    ctx->pc = 0x16ad98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1242), (uint16_t)GPR_U32(ctx, 2));
label_16ad9c:
    // 0x16ad9c: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x16ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_16ada0:
    // 0x16ada0: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x16ada0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16ada4:
    // 0x16ada4: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x16ada4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
label_16ada8:
    // 0x16ada8: 0x964700ec  lhu         $a3, 0xEC($s2)
    ctx->pc = 0x16ada8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
label_16adac:
    // 0x16adac: 0xc063860  jal         func_18E180
label_16adb0:
    if (ctx->pc == 0x16ADB0u) {
        ctx->pc = 0x16ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADACu;
        // 0x16adb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ADB4u;
        goto label_16adb4;
    }
    ctx->pc = 0x16ADACu;
    SET_GPR_U32(ctx, 31, 0x16ADB4u);
    ctx->pc = 0x16ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ADACu;
    // 0x16adb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E180u, 0x16ADACu, 0x16ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADB4u;
label_16adb4:
    // 0x16adb4: 0x8e44049c  lw          $a0, 0x49C($s2)
    ctx->pc = 0x16adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_16adb8:
    // 0x16adb8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16adb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16adbc:
    // 0x16adbc: 0x2403f3ff  addiu       $v1, $zero, -0xC01
    ctx->pc = 0x16adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
label_16adc0:
    // 0x16adc0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x16adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_16adc4:
    // 0x16adc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16adc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16adc8:
    // 0x16adc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16adcc:
    if (ctx->pc == 0x16ADCCu) {
        ctx->pc = 0x16ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADC8u;
        // 0x16adcc: 0xae43049c  sw          $v1, 0x49C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ADD0u;
        goto label_16add0;
    }
    ctx->pc = 0x16ADC8u;
    {
        const bool branch_taken_0x16adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADC8u;
        // 0x16adcc: 0xae43049c  sw          $v1, 0x49C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16adc8) {
            ctx->pc = 0x16ADDCu;
            goto label_16addc;
        }
    }
    ctx->pc = 0x16ADD0u;
label_16add0:
    // 0x16add0: 0x8e42049c  lw          $v0, 0x49C($s2)
    ctx->pc = 0x16add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_16add4:
    // 0x16add4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x16add4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_16add8:
    // 0x16add8: 0xae42049c  sw          $v0, 0x49C($s2)
    ctx->pc = 0x16add8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
label_16addc:
    // 0x16addc: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x16addcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_16ade0:
    // 0x16ade0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_16ade4:
    if (ctx->pc == 0x16ADE4u) {
        ctx->pc = 0x16ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADE0u;
        // 0x16ade4: 0x51943  sra         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ADE8u;
        goto label_16ade8;
    }
    ctx->pc = 0x16ADE0u;
    {
        const bool branch_taken_0x16ade0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ade0) {
            ctx->pc = 0x16ADE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ADE0u;
            // 0x16ade4: 0x51943  sra         $v1, $a1, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ADF8u;
            goto label_16adf8;
        }
    }
    ctx->pc = 0x16ADE8u;
label_16ade8:
    // 0x16ade8: 0x8e42049c  lw          $v0, 0x49C($s2)
    ctx->pc = 0x16ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_16adec:
    // 0x16adec: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x16adecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_16adf0:
    // 0x16adf0: 0xae42049c  sw          $v0, 0x49C($s2)
    ctx->pc = 0x16adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 2));
label_16adf4:
    // 0x16adf4: 0x51943  sra         $v1, $a1, 5
    ctx->pc = 0x16adf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
label_16adf8:
    // 0x16adf8: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x16adf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_16adfc:
    // 0x16adfc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x16adfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_16ae00:
    // 0x16ae00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16ae04:
    if (ctx->pc == 0x16AE04u) {
        ctx->pc = 0x16AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE00u;
        // 0x16ae04: 0xa24304ea  sb          $v1, 0x4EA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1258), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AE08u;
        goto label_16ae08;
    }
    ctx->pc = 0x16AE00u;
    {
        const bool branch_taken_0x16ae00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE00u;
        // 0x16ae04: 0xa24304ea  sb          $v1, 0x4EA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1258), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae00) {
            ctx->pc = 0x16AE18u;
            goto label_16ae18;
        }
    }
    ctx->pc = 0x16AE08u;
label_16ae08:
    // 0x16ae08: 0x8e420490  lw          $v0, 0x490($s2)
    ctx->pc = 0x16ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_16ae0c:
    // 0x16ae0c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x16ae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_16ae10:
    // 0x16ae10: 0x10000005  b           . + 4 + (0x5 << 2)
label_16ae14:
    if (ctx->pc == 0x16AE14u) {
        ctx->pc = 0x16AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE10u;
        // 0x16ae14: 0xae420490  sw          $v0, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AE18u;
        goto label_16ae18;
    }
    ctx->pc = 0x16AE10u;
    {
        const bool branch_taken_0x16ae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE10u;
        // 0x16ae14: 0xae420490  sw          $v0, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae10) {
            ctx->pc = 0x16AE28u;
            goto label_16ae28;
        }
    }
    ctx->pc = 0x16AE18u;
label_16ae18:
    // 0x16ae18: 0x8e430490  lw          $v1, 0x490($s2)
    ctx->pc = 0x16ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_16ae1c:
    // 0x16ae1c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x16ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_16ae20:
    // 0x16ae20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16ae24:
    // 0x16ae24: 0xae420490  sw          $v0, 0x490($s2)
    ctx->pc = 0x16ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
label_16ae28:
    // 0x16ae28: 0x924500f7  lbu         $a1, 0xF7($s2)
    ctx->pc = 0x16ae28u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
label_16ae2c:
    // 0x16ae2c: 0x964600ec  lhu         $a2, 0xEC($s2)
    ctx->pc = 0x16ae2cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
label_16ae30:
    // 0x16ae30: 0xc0592e4  jal         func_164B90
label_16ae34:
    if (ctx->pc == 0x16AE34u) {
        ctx->pc = 0x16AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE30u;
        // 0x16ae34: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AE38u;
        goto label_16ae38;
    }
    ctx->pc = 0x16AE30u;
    SET_GPR_U32(ctx, 31, 0x16AE38u);
    ctx->pc = 0x16AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE30u;
    // 0x16ae34: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x16AE30u, 0x16AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE38u;
label_16ae38:
    // 0x16ae38: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16ae38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16ae3c:
    // 0x16ae3c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x16ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_16ae40:
    // 0x16ae40: 0x5082001a  beql        $a0, $v0, . + 4 + (0x1A << 2)
label_16ae44:
    if (ctx->pc == 0x16AE44u) {
        ctx->pc = 0x16AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE40u;
        // 0x16ae44: 0x8e420490  lw          $v0, 0x490($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AE48u;
        goto label_16ae48;
    }
    ctx->pc = 0x16AE40u;
    {
        const bool branch_taken_0x16ae40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ae40) {
            ctx->pc = 0x16AE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AE40u;
            // 0x16ae44: 0x8e420490  lw          $v0, 0x490($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AEACu;
            goto label_16aeac;
        }
    }
    ctx->pc = 0x16AE48u;
label_16ae48:
    // 0x16ae48: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x16ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_16ae4c:
    // 0x16ae4c: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_16ae50:
    if (ctx->pc == 0x16AE50u) {
        ctx->pc = 0x16AE54u;
        goto label_16ae54;
    }
    ctx->pc = 0x16AE4Cu;
    {
        const bool branch_taken_0x16ae4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ae4c) {
            ctx->pc = 0x16AEA8u;
            goto label_16aea8;
        }
    }
    ctx->pc = 0x16AE54u;
label_16ae54:
    // 0x16ae54: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x16ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_16ae58:
    // 0x16ae58: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
label_16ae5c:
    if (ctx->pc == 0x16AE5Cu) {
        ctx->pc = 0x16AE60u;
        goto label_16ae60;
    }
    ctx->pc = 0x16AE58u;
    {
        const bool branch_taken_0x16ae58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ae58) {
            ctx->pc = 0x16AEA8u;
            goto label_16aea8;
        }
    }
    ctx->pc = 0x16AE60u;
label_16ae60:
    // 0x16ae60: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x16ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_16ae64:
    // 0x16ae64: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_16ae68:
    if (ctx->pc == 0x16AE68u) {
        ctx->pc = 0x16AE6Cu;
        goto label_16ae6c;
    }
    ctx->pc = 0x16AE64u;
    {
        const bool branch_taken_0x16ae64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ae64) {
            ctx->pc = 0x16AEA8u;
            goto label_16aea8;
        }
    }
    ctx->pc = 0x16AE6Cu;
label_16ae6c:
    // 0x16ae6c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x16ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_16ae70:
    // 0x16ae70: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_16ae74:
    if (ctx->pc == 0x16AE74u) {
        ctx->pc = 0x16AE78u;
        goto label_16ae78;
    }
    ctx->pc = 0x16AE70u;
    {
        const bool branch_taken_0x16ae70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ae70) {
            ctx->pc = 0x16AEA8u;
            goto label_16aea8;
        }
    }
    ctx->pc = 0x16AE78u;
label_16ae78:
    // 0x16ae78: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x16ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16ae7c:
    // 0x16ae7c: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_16ae80:
    if (ctx->pc == 0x16AE80u) {
        ctx->pc = 0x16AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE7Cu;
        // 0x16ae80: 0x8e430490  lw          $v1, 0x490($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AE84u;
        goto label_16ae84;
    }
    ctx->pc = 0x16AE7Cu;
    {
        const bool branch_taken_0x16ae7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ae7c) {
            ctx->pc = 0x16AE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AE7Cu;
            // 0x16ae80: 0x8e430490  lw          $v1, 0x490($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AE98u;
            goto label_16ae98;
        }
    }
    ctx->pc = 0x16AE84u;
label_16ae84:
    // 0x16ae84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_16ae88:
    if (ctx->pc == 0x16AE88u) {
        ctx->pc = 0x16AE8Cu;
        goto label_16ae8c;
    }
    ctx->pc = 0x16AE84u;
    {
        const bool branch_taken_0x16ae84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae84) {
            ctx->pc = 0x16AE94u;
            goto label_16ae94;
        }
    }
    ctx->pc = 0x16AE8Cu;
label_16ae8c:
    // 0x16ae8c: 0x1000000a  b           . + 4 + (0xA << 2)
label_16ae90:
    if (ctx->pc == 0x16AE90u) {
        ctx->pc = 0x16AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE8Cu;
        // 0x16ae90: 0xa24403ec  sb          $a0, 0x3EC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1004), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AE94u;
        goto label_16ae94;
    }
    ctx->pc = 0x16AE8Cu;
    {
        const bool branch_taken_0x16ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE8Cu;
        // 0x16ae90: 0xa24403ec  sb          $a0, 0x3EC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1004), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae8c) {
            ctx->pc = 0x16AEB8u;
            goto label_16aeb8;
        }
    }
    ctx->pc = 0x16AE94u;
label_16ae94:
    // 0x16ae94: 0x8e430490  lw          $v1, 0x490($s2)
    ctx->pc = 0x16ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_16ae98:
    // 0x16ae98: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x16ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_16ae9c:
    // 0x16ae9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16aea0:
    // 0x16aea0: 0x10000004  b           . + 4 + (0x4 << 2)
label_16aea4:
    if (ctx->pc == 0x16AEA4u) {
        ctx->pc = 0x16AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEA0u;
        // 0x16aea4: 0xae420490  sw          $v0, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AEA8u;
        goto label_16aea8;
    }
    ctx->pc = 0x16AEA0u;
    {
        const bool branch_taken_0x16aea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEA0u;
        // 0x16aea4: 0xae420490  sw          $v0, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aea0) {
            ctx->pc = 0x16AEB4u;
            goto label_16aeb4;
        }
    }
    ctx->pc = 0x16AEA8u;
label_16aea8:
    // 0x16aea8: 0x8e420490  lw          $v0, 0x490($s2)
    ctx->pc = 0x16aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_16aeac:
    // 0x16aeac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_16aeb0:
    // 0x16aeb0: 0xae420490  sw          $v0, 0x490($s2)
    ctx->pc = 0x16aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 2));
label_16aeb4:
    // 0x16aeb4: 0xa24403ec  sb          $a0, 0x3EC($s2)
    ctx->pc = 0x16aeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1004), (uint8_t)GPR_U32(ctx, 4));
label_16aeb8:
    // 0x16aeb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16aeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16aebc:
    // 0x16aebc: 0x964400ea  lhu         $a0, 0xEA($s2)
    ctx->pc = 0x16aebcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_16aec0:
    // 0x16aec0: 0xc063808  jal         func_18E020
label_16aec4:
    if (ctx->pc == 0x16AEC4u) {
        ctx->pc = 0x16AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEC0u;
        // 0x16aec4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AEC8u;
        goto label_16aec8;
    }
    ctx->pc = 0x16AEC0u;
    SET_GPR_U32(ctx, 31, 0x16AEC8u);
    ctx->pc = 0x16AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEC0u;
    // 0x16aec4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x16AEC0u, 0x16AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEC8u;
label_16aec8:
    // 0x16aec8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16aec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_16aecc:
    // 0x16aecc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16aeccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_16aed0:
    // 0x16aed0: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x16aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_16aed4:
    // 0x16aed4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16aed8:
    // 0x16aed8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16aedc:
    // 0x16aedc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16aee0:
    // 0x16aee0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x16aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_16aee4:
    // 0x16aee4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16aee8:
    // 0x16aee8: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x16aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_16aeec:
    // 0x16aeec: 0xc0634f8  jal         func_18D3E0
label_16aef0:
    if (ctx->pc == 0x16AEF0u) {
        ctx->pc = 0x16AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEECu;
        // 0x16aef0: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AEF4u;
        goto label_16aef4;
    }
    ctx->pc = 0x16AEECu;
    SET_GPR_U32(ctx, 31, 0x16AEF4u);
    ctx->pc = 0x16AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEECu;
    // 0x16aef0: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D3E0u, 0x16AEECu, 0x16AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEF4u;
label_16aef4:
    // 0x16aef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16aef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16aef8:
    // 0x16aef8: 0xc062670  jal         func_1899C0
label_16aefc:
    if (ctx->pc == 0x16AEFCu) {
        ctx->pc = 0x16AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEF8u;
        // 0x16aefc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AF00u;
        goto label_16af00;
    }
    ctx->pc = 0x16AEF8u;
    SET_GPR_U32(ctx, 31, 0x16AF00u);
    ctx->pc = 0x16AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEF8u;
    // 0x16aefc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1899C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1899C0u, 0x16AEF8u, 0x16AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF00u;
label_16af00:
    // 0x16af00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16af00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16af04:
    // 0x16af04: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16af04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16af08:
    // 0x16af08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16af08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16af0c:
    // 0x16af0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16af0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16af10:
    // 0x16af10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16af10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16af14:
    // 0x16af14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16af14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16af18:
    // 0x16af18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16af18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16af1c:
    // 0x16af1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16af1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16af20:
    // 0x16af20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16af20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16af24:
    // 0x16af24: 0x3e00008  jr          $ra
label_16af28:
    if (ctx->pc == 0x16AF28u) {
        ctx->pc = 0x16AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF24u;
        // 0x16af28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AF2Cu;
        goto label_16af2c;
    }
    ctx->pc = 0x16AF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF24u;
        // 0x16af28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AF2Cu;
label_16af2c:
    // 0x16af2c: 0x0  nop
    ctx->pc = 0x16af2cu;
    // NOP
    if (ctx->pc == 0x16af2cu) { ctx->pc = 0x16af30u; }
}

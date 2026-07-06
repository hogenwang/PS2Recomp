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

// Function: sub_00181AC0
// Address: 0x181ac0 - 0x181c30
void sub_00181AC0_0x181ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181AC0_0x181ac0");
#endif

    switch (ctx->pc) {
        case 0x181ae0u: goto label_181ae0;
        case 0x181af8u: goto label_181af8;
        case 0x181bb4u: goto label_181bb4;
        case 0x181bc0u: goto label_181bc0;
        default: break;
    }

    ctx->pc = 0x181ac0u;

    // 0x181ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ad4: 0x8c840518  lw          $a0, 0x518($a0)
    ctx->pc = 0x181ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1304)));
    // 0x181ad8: 0xc05fdcc  jal         func_17F730
    ctx->pc = 0x181AD8u;
    SET_GPR_U32(ctx, 31, 0x181AE0u);
    ctx->pc = 0x181ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181AD8u;
    // 0x181adc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F730u, 0x181AD8u, 0x181AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AE0u;
label_181ae0:
    // 0x181ae0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x181AE0u;
    {
        const bool branch_taken_0x181ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181ae0) {
            ctx->pc = 0x181AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181AE0u;
            // 0x181ae4: 0x8e24051c  lw          $a0, 0x51C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181AF0u;
            goto label_181af0;
        }
    }
    ctx->pc = 0x181AE8u;
    // 0x181ae8: 0xae200518  sw          $zero, 0x518($s1)
    ctx->pc = 0x181ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
    // 0x181aec: 0x8e24051c  lw          $a0, 0x51C($s1)
    ctx->pc = 0x181aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1308)));
label_181af0:
    // 0x181af0: 0xc05fdcc  jal         func_17F730
    ctx->pc = 0x181AF0u;
    SET_GPR_U32(ctx, 31, 0x181AF8u);
    ctx->pc = 0x17F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F730u, 0x181AF0u, 0x181AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AF8u;
label_181af8:
    // 0x181af8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x181AF8u;
    {
        const bool branch_taken_0x181af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181af8) {
            ctx->pc = 0x181AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181AF8u;
            // 0x181afc: 0x8e230530  lw          $v1, 0x530($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181B08u;
            goto label_181b08;
        }
    }
    ctx->pc = 0x181B00u;
    // 0x181b00: 0xae20051c  sw          $zero, 0x51C($s1)
    ctx->pc = 0x181b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 0));
    // 0x181b04: 0x8e230530  lw          $v1, 0x530($s1)
    ctx->pc = 0x181b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
label_181b08:
    // 0x181b08: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x181b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x181b0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181b10: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x181B10u;
    {
        const bool branch_taken_0x181b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b10) {
            ctx->pc = 0x181B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181B10u;
            // 0x181b14: 0x8e230530  lw          $v1, 0x530($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181B50u;
            goto label_181b50;
        }
    }
    ctx->pc = 0x181B18u;
    // 0x181b18: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x181b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x181b1c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x181b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x181b20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x181B20u;
    {
        const bool branch_taken_0x181b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b20) {
            ctx->pc = 0x181B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181B20u;
            // 0x181b24: 0x34620080  ori         $v0, $v1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181B34u;
            goto label_181b34;
        }
    }
    ctx->pc = 0x181B28u;
    // 0x181b28: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x181b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x181b2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181B2Cu;
    {
        const bool branch_taken_0x181b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B2Cu;
        // 0x181b30: 0xa222008c  sb          $v0, 0x8C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b2c) {
            ctx->pc = 0x181B38u;
            goto label_181b38;
        }
    }
    ctx->pc = 0x181B34u;
label_181b34:
    // 0x181b34: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x181b34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
label_181b38:
    // 0x181b38: 0x8e230530  lw          $v1, 0x530($s1)
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x181b3c: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x181b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x181b40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x181b44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181b48: 0xae220530  sw          $v0, 0x530($s1)
    ctx->pc = 0x181b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1328), GPR_U32(ctx, 2));
    // 0x181b4c: 0x8e230530  lw          $v1, 0x530($s1)
    ctx->pc = 0x181b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
label_181b50:
    // 0x181b50: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x181b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x181b54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181b58: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x181B58u;
    {
        const bool branch_taken_0x181b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b58) {
            ctx->pc = 0x181B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181B58u;
            // 0x181b5c: 0x8e230494  lw          $v1, 0x494($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181B98u;
            goto label_181b98;
        }
    }
    ctx->pc = 0x181B60u;
    // 0x181b60: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x181b60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x181b64: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x181b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x181b68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x181B68u;
    {
        const bool branch_taken_0x181b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b68) {
            ctx->pc = 0x181B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181B68u;
            // 0x181b6c: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181B7Cu;
            goto label_181b7c;
        }
    }
    ctx->pc = 0x181B70u;
    // 0x181b70: 0x306200fd  andi        $v0, $v1, 0xFD
    ctx->pc = 0x181b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x181b74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181B74u;
    {
        const bool branch_taken_0x181b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B74u;
        // 0x181b78: 0xa222008c  sb          $v0, 0x8C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b74) {
            ctx->pc = 0x181B80u;
            goto label_181b80;
        }
    }
    ctx->pc = 0x181B7Cu;
label_181b7c:
    // 0x181b7c: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x181b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
label_181b80:
    // 0x181b80: 0x8e230530  lw          $v1, 0x530($s1)
    ctx->pc = 0x181b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x181b84: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x181b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x181b88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x181b8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181b90: 0xae220530  sw          $v0, 0x530($s1)
    ctx->pc = 0x181b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1328), GPR_U32(ctx, 2));
    // 0x181b94: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
label_181b98:
    // 0x181b98: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x181b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x181b9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181ba0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x181BA0u;
    {
        const bool branch_taken_0x181ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181ba0) {
            ctx->pc = 0x181BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181BA0u;
            // 0x181ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181BB8u;
            goto label_181bb8;
        }
    }
    ctx->pc = 0x181BA8u;
    // 0x181ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bac: 0xc060b50  jal         func_182D40
    ctx->pc = 0x181BACu;
    SET_GPR_U32(ctx, 31, 0x181BB4u);
    ctx->pc = 0x181BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BACu;
    // 0x181bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D40u, 0x181BACu, 0x181BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BB4u;
label_181bb4:
    // 0x181bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_181bb8:
    // 0x181bb8: 0xc060398  jal         func_180E60
    ctx->pc = 0x181BB8u;
    SET_GPR_U32(ctx, 31, 0x181BC0u);
    ctx->pc = 0x180E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E60u, 0x181BB8u, 0x181BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BC0u;
label_181bc0:
    // 0x181bc0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x181bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181bc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181bc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181bc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181bcc: 0x50620025  beql        $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x181BCCu;
    {
        const bool branch_taken_0x181bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181bcc) {
            ctx->pc = 0x181BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181BCCu;
            // 0x181bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181C64u;
            return;
        }
    }
    ctx->pc = 0x181BD4u;
    // 0x181bd4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x181bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bd8: 0x8e24049c  lw          $a0, 0x49C($s1)
    ctx->pc = 0x181bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
    // 0x181bdc: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x181bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x181be0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x181be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x181be4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x181be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x181be8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x181be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x181bec: 0xae23049c  sw          $v1, 0x49C($s1)
    ctx->pc = 0x181becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1180), GPR_U32(ctx, 3));
    // 0x181bf0: 0x9042f35b  lbu         $v0, -0xCA5($v0)
    ctx->pc = 0x181bf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x181bf4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x181BF4u;
    {
        const bool branch_taken_0x181bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181bf4) {
            ctx->pc = 0x181C60u;
            return;
        }
    }
    ctx->pc = 0x181BFCu;
    // 0x181bfc: 0x8e23048c  lw          $v1, 0x48C($s1)
    ctx->pc = 0x181bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x181c00: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x181c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x181c04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181c08: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x181C08u;
    {
        const bool branch_taken_0x181c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c08) {
            ctx->pc = 0x181C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C08u;
            // 0x181c0c: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181C24u;
            goto label_181c24;
        }
    }
    ctx->pc = 0x181C10u;
    // 0x181c10: 0x8e23049c  lw          $v1, 0x49C($s1)
    ctx->pc = 0x181c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
    // 0x181c14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x181c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x181c18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x181c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x181c1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x181C1Cu;
    {
        const bool branch_taken_0x181c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C1Cu;
        // 0x181c20: 0xae22049c  sw          $v0, 0x49C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c1c) {
            ctx->pc = 0x181C60u;
            return;
        }
    }
    ctx->pc = 0x181C24u;
label_181c24:
    // 0x181c24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181c28: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x181C28u;
    {
        const bool branch_taken_0x181c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c28) {
            ctx->pc = 0x181C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C28u;
            // 0x181c2c: 0x962300ec  lhu         $v1, 0xEC($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181C44u;
            return;
        }
    }
    ctx->pc = 0x181C30u;
}

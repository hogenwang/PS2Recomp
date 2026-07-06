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

// Function: sub_00180C40
// Address: 0x180c40 - 0x180e00
void sub_00180C40_0x180c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180C40_0x180c40");
#endif

    switch (ctx->pc) {
        case 0x180d44u: goto label_180d44;
        case 0x180db0u: goto label_180db0;
        default: break;
    }

    ctx->pc = 0x180c40u;

    // 0x180c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180c44: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x180c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x180c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180c50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180C50u;
    {
        const bool branch_taken_0x180c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C50u;
        // 0x180c54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c50) {
            ctx->pc = 0x180C60u;
            goto label_180c60;
        }
    }
    ctx->pc = 0x180C58u;
    // 0x180c58: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x180C58u;
    {
        const bool branch_taken_0x180c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180c58) {
            ctx->pc = 0x180CA4u;
            goto label_180ca4;
        }
    }
    ctx->pc = 0x180C60u;
label_180c60:
    // 0x180c60: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x180c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x180c64: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x180c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x180c68: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x180c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x180c6c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180C6Cu;
    {
        const bool branch_taken_0x180c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180c6c) {
            ctx->pc = 0x180C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180C6Cu;
            // 0x180c70: 0x8e050270  lw          $a1, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180C80u;
            goto label_180c80;
        }
    }
    ctx->pc = 0x180C74u;
    // 0x180c74: 0x9203057f  lbu         $v1, 0x57F($s0)
    ctx->pc = 0x180c74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1407)));
    // 0x180c78: 0xa20300f6  sb          $v1, 0xF6($s0)
    ctx->pc = 0x180c78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 3));
    // 0x180c7c: 0x8e050270  lw          $a1, 0x270($s0)
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_180c80:
    // 0x180c80: 0x2404f9ff  addiu       $a0, $zero, -0x601
    ctx->pc = 0x180c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x180c84: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x180c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x180c88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x180c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x180c8c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x180c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x180c90: 0xae040270  sw          $a0, 0x270($s0)
    ctx->pc = 0x180c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 4));
    // 0x180c94: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x180c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x180c98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x180c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x180c9c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x180C9Cu;
    {
        const bool branch_taken_0x180c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C9Cu;
        // 0x180ca0: 0xae030494  sw          $v1, 0x494($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c9c) {
            ctx->pc = 0x180DECu;
            goto label_180dec;
        }
    }
    ctx->pc = 0x180CA4u;
label_180ca4:
    // 0x180ca4: 0x50c00037  beql        $a2, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x180CA4u;
    {
        const bool branch_taken_0x180ca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x180ca4) {
            ctx->pc = 0x180CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180CA4u;
            // 0x180ca8: 0x8e050270  lw          $a1, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D84u;
            goto label_180d84;
        }
    }
    ctx->pc = 0x180CACu;
    // 0x180cac: 0x8e050270  lw          $a1, 0x270($s0)
    ctx->pc = 0x180cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x180cb0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x180cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x180cb4: 0x2404f9ff  addiu       $a0, $zero, -0x601
    ctx->pc = 0x180cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x180cb8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x180cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x180cbc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x180cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x180cc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180CC0u;
    {
        const bool branch_taken_0x180cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CC0u;
        // 0x180cc4: 0xae040270  sw          $a0, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cc0) {
            ctx->pc = 0x180CDCu;
            goto label_180cdc;
        }
    }
    ctx->pc = 0x180CC8u;
    // 0x180cc8: 0xa200057e  sb          $zero, 0x57E($s0)
    ctx->pc = 0x180cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1406), (uint8_t)GPR_U32(ctx, 0));
    // 0x180ccc: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x180cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x180cd0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x180cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x180cd4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x180CD4u;
    {
        const bool branch_taken_0x180cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CD4u;
        // 0x180cd8: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cd4) {
            ctx->pc = 0x180D2Cu;
            goto label_180d2c;
        }
    }
    ctx->pc = 0x180CDCu;
label_180cdc:
    // 0x180cdc: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x180cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x180ce0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180CE0u;
    {
        const bool branch_taken_0x180ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180ce0) {
            ctx->pc = 0x180CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180CE0u;
            // 0x180ce4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180CF4u;
            goto label_180cf4;
        }
    }
    ctx->pc = 0x180CE8u;
    // 0x180ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180cec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x180CECu;
    {
        const bool branch_taken_0x180cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CECu;
        // 0x180cf0: 0xa202057e  sb          $v0, 0x57E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1406), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cec) {
            ctx->pc = 0x180D2Cu;
            goto label_180d2c;
        }
    }
    ctx->pc = 0x180CF4u;
label_180cf4:
    // 0x180cf4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180CF4u;
    {
        const bool branch_taken_0x180cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180cf4) {
            ctx->pc = 0x180CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180CF4u;
            // 0x180cf8: 0x30620030  andi        $v0, $v1, 0x30 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D08u;
            goto label_180d08;
        }
    }
    ctx->pc = 0x180CFCu;
    // 0x180cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180d00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180D00u;
    {
        const bool branch_taken_0x180d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D00u;
        // 0x180d04: 0xa202057e  sb          $v0, 0x57E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1406), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d00) {
            ctx->pc = 0x180D2Cu;
            goto label_180d2c;
        }
    }
    ctx->pc = 0x180D08u;
label_180d08:
    // 0x180d08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180D08u;
    {
        const bool branch_taken_0x180d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180d08) {
            ctx->pc = 0x180D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D08u;
            // 0x180d0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D1Cu;
            goto label_180d1c;
        }
    }
    ctx->pc = 0x180D10u;
    // 0x180d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180d14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x180D14u;
    {
        const bool branch_taken_0x180d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D14u;
        // 0x180d18: 0xa202057e  sb          $v0, 0x57E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1406), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d14) {
            ctx->pc = 0x180D2Cu;
            goto label_180d2c;
        }
    }
    ctx->pc = 0x180D1Cu;
label_180d1c:
    // 0x180d1c: 0xa202057e  sb          $v0, 0x57E($s0)
    ctx->pc = 0x180d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1406), (uint8_t)GPR_U32(ctx, 2));
    // 0x180d20: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x180d24: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x180d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x180d28: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x180d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_180d2c:
    // 0x180d2c: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x180d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x180d30: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x180d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x180d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d38: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180d3c: 0xc0602e8  jal         func_180BA0
    ctx->pc = 0x180D3Cu;
    SET_GPR_U32(ctx, 31, 0x180D44u);
    ctx->pc = 0x180D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D3Cu;
    // 0x180d40: 0xae020494  sw          $v0, 0x494($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180BA0u, 0x180D3Cu, 0x180D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D44u;
label_180d44:
    // 0x180d44: 0xa202057f  sb          $v0, 0x57F($s0)
    ctx->pc = 0x180d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1407), (uint8_t)GPR_U32(ctx, 2));
    // 0x180d48: 0x9203057f  lbu         $v1, 0x57F($s0)
    ctx->pc = 0x180d48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1407)));
    // 0x180d4c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180D4Cu;
    {
        const bool branch_taken_0x180d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180d4c) {
            ctx->pc = 0x180D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D4Cu;
            // 0x180d50: 0xa20000f6  sb          $zero, 0xF6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D60u;
            goto label_180d60;
        }
    }
    ctx->pc = 0x180D54u;
    // 0x180d54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x180d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180d58: 0xa203057f  sb          $v1, 0x57F($s0)
    ctx->pc = 0x180d58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1407), (uint8_t)GPR_U32(ctx, 3));
    // 0x180d5c: 0xa20000f6  sb          $zero, 0xF6($s0)
    ctx->pc = 0x180d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 0));
label_180d60:
    // 0x180d60: 0x8203057e  lb          $v1, 0x57E($s0)
    ctx->pc = 0x180d60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1406)));
    // 0x180d64: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x180D64u;
    {
        const bool branch_taken_0x180d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180d64) {
            ctx->pc = 0x180D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D64u;
            // 0x180d68: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DF0u;
            goto label_180df0;
        }
    }
    ctx->pc = 0x180D6Cu;
    // 0x180d6c: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x180d70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x180d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180d74: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x180d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x180d78: 0xae040270  sw          $a0, 0x270($s0)
    ctx->pc = 0x180d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 4));
    // 0x180d7c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x180D7Cu;
    {
        const bool branch_taken_0x180d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D7Cu;
        // 0x180d80: 0xa203057e  sb          $v1, 0x57E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1406), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d7c) {
            ctx->pc = 0x180DECu;
            goto label_180dec;
        }
    }
    ctx->pc = 0x180D84u;
label_180d84:
    // 0x180d84: 0x2403f9ff  addiu       $v1, $zero, -0x601
    ctx->pc = 0x180d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x180d88: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x180d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x180d8c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x180d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x180d90: 0xae030270  sw          $v1, 0x270($s0)
    ctx->pc = 0x180d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
    // 0x180d94: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x180d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x180d98: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180d9c: 0xae020494  sw          $v0, 0x494($s0)
    ctx->pc = 0x180d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 2));
    // 0x180da0: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x180da4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x180da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x180da8: 0xc0602e8  jal         func_180BA0
    ctx->pc = 0x180DA8u;
    SET_GPR_U32(ctx, 31, 0x180DB0u);
    ctx->pc = 0x180DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DA8u;
    // 0x180dac: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180BA0u, 0x180DA8u, 0x180DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DB0u;
label_180db0:
    // 0x180db0: 0xa202057f  sb          $v0, 0x57F($s0)
    ctx->pc = 0x180db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1407), (uint8_t)GPR_U32(ctx, 2));
    // 0x180db4: 0x9203057f  lbu         $v1, 0x57F($s0)
    ctx->pc = 0x180db4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1407)));
    // 0x180db8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180DB8u;
    {
        const bool branch_taken_0x180db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180db8) {
            ctx->pc = 0x180DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DB8u;
            // 0x180dbc: 0xa20000f6  sb          $zero, 0xF6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DCCu;
            goto label_180dcc;
        }
    }
    ctx->pc = 0x180DC0u;
    // 0x180dc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x180dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180dc4: 0xa203057f  sb          $v1, 0x57F($s0)
    ctx->pc = 0x180dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1407), (uint8_t)GPR_U32(ctx, 3));
    // 0x180dc8: 0xa20000f6  sb          $zero, 0xF6($s0)
    ctx->pc = 0x180dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 0));
label_180dcc:
    // 0x180dcc: 0x8203057e  lb          $v1, 0x57E($s0)
    ctx->pc = 0x180dccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1406)));
    // 0x180dd0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x180DD0u;
    {
        const bool branch_taken_0x180dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180dd0) {
            ctx->pc = 0x180DECu;
            goto label_180dec;
        }
    }
    ctx->pc = 0x180DD8u;
    // 0x180dd8: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x180dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x180ddc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x180ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180de0: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x180de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x180de4: 0xae040270  sw          $a0, 0x270($s0)
    ctx->pc = 0x180de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 4));
    // 0x180de8: 0xa203057e  sb          $v1, 0x57E($s0)
    ctx->pc = 0x180de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1406), (uint8_t)GPR_U32(ctx, 3));
label_180dec:
    // 0x180dec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_180df0:
    // 0x180df0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180df4: 0x3e00008  jr          $ra
    ctx->pc = 0x180DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DF4u;
        // 0x180df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180DFCu;
    // 0x180dfc: 0x0  nop
    ctx->pc = 0x180dfcu;
    // NOP
}

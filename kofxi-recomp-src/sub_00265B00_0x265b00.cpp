#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265B00
// Address: 0x265b00 - 0x265e00
void sub_00265B00_0x265b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265B00_0x265b00");
#endif

    switch (ctx->pc) {
        case 0x265b50u: goto label_265b50;
        case 0x265b58u: goto label_265b58;
        case 0x265b78u: goto label_265b78;
        case 0x265b90u: goto label_265b90;
        case 0x265b94u: goto label_265b94;
        case 0x265bc0u: goto label_265bc0;
        case 0x265bd8u: goto label_265bd8;
        case 0x265c98u: goto label_265c98;
        case 0x265cb8u: goto label_265cb8;
        case 0x265cc4u: goto label_265cc4;
        case 0x265cd0u: goto label_265cd0;
        case 0x265d08u: goto label_265d08;
        case 0x265d1cu: goto label_265d1c;
        case 0x265d2cu: goto label_265d2c;
        case 0x265d3cu: goto label_265d3c;
        case 0x265d4cu: goto label_265d4c;
        case 0x265d80u: goto label_265d80;
        case 0x265d90u: goto label_265d90;
        case 0x265d9cu: goto label_265d9c;
        case 0x265da8u: goto label_265da8;
        case 0x265dc0u: goto label_265dc0;
        case 0x265dc8u: goto label_265dc8;
        case 0x265dd0u: goto label_265dd0;
        default: break;
    }

    ctx->pc = 0x265b00u;

    // 0x265b00: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x265b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x265b04: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x265b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x265b08: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x265b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x265b0c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x265b0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b10: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x265b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x265b14: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x265b14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b18: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x265b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x265b1c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x265b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x265b20: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x265b20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b24: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x265b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x265b28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x265b28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b2c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x265b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x265b30: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x265b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b34: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x265b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x265b38: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x265b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x265b3c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x265b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x265b40: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x265b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x265b44: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x265b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x265b48: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x265B48u;
    SET_GPR_U32(ctx, 31, 0x265B50u);
    ctx->pc = 0x265B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265B48u;
            // 0x265b4c: 0x8fb50100  lw          $s5, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B50u; }
        if (ctx->pc != 0x265B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B50u; }
        if (ctx->pc != 0x265B50u) { return; }
    }
    ctx->pc = 0x265B50u;
label_265b50:
    // 0x265b50: 0xc097242  jal         func_25C908
    ctx->pc = 0x265B50u;
    SET_GPR_U32(ctx, 31, 0x265B58u);
    ctx->pc = 0x265B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265B50u;
            // 0x265b54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (runtime->hasFunction(0x25C908u)) {
        auto targetFn = runtime->lookupFunction(0x25C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B58u; }
        if (ctx->pc != 0x265B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C908_0x25c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B58u; }
        if (ctx->pc != 0x265B58u) { return; }
    }
    ctx->pc = 0x265B58u;
label_265b58:
    // 0x265b58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x265b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b5c: 0x1240009c  beqz        $s2, . + 4 + (0x9C << 2)
    ctx->pc = 0x265B5Cu;
    {
        const bool branch_taken_0x265b5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265B5Cu;
            // 0x265b60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b5c) {
            ctx->pc = 0x265DD0u;
            goto label_265dd0;
        }
    }
    ctx->pc = 0x265B64u;
    // 0x265b64: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x265b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x265b68: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x265B68u;
    {
        const bool branch_taken_0x265b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265b68) {
            ctx->pc = 0x265B9Cu;
            goto label_265b9c;
        }
    }
    ctx->pc = 0x265B70u;
    // 0x265b70: 0xc099642  jal         func_265908
    ctx->pc = 0x265B70u;
    SET_GPR_U32(ctx, 31, 0x265B78u);
    ctx->pc = 0x265B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265B70u;
            // 0x265b74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265908u;
    if (runtime->hasFunction(0x265908u)) {
        auto targetFn = runtime->lookupFunction(0x265908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B78u; }
        if (ctx->pc != 0x265B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265908_0x265908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B78u; }
        if (ctx->pc != 0x265B78u) { return; }
    }
    ctx->pc = 0x265B78u;
label_265b78:
    // 0x265b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265b7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x265b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265b80: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265B80u;
    {
        const bool branch_taken_0x265b80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x265b80) {
            ctx->pc = 0x265B9Cu;
            goto label_265b9c;
        }
    }
    ctx->pc = 0x265B88u;
    // 0x265b88: 0xc097308  jal         func_25CC20
    ctx->pc = 0x265B88u;
    SET_GPR_U32(ctx, 31, 0x265B90u);
    ctx->pc = 0x25CC20u;
    if (runtime->hasFunction(0x25CC20u)) {
        auto targetFn = runtime->lookupFunction(0x25CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B90u; }
        if (ctx->pc != 0x265B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC20_0x25cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B90u; }
        if (ctx->pc != 0x265B90u) { return; }
    }
    ctx->pc = 0x265B90u;
label_265b90:
    // 0x265b90: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x265b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_265b94:
    // 0x265b94: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x265B94u;
    {
        const bool branch_taken_0x265b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265B94u;
            // 0x265b98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b94) {
            ctx->pc = 0x265DD0u;
            goto label_265dd0;
        }
    }
    ctx->pc = 0x265B9Cu;
label_265b9c:
    // 0x265b9c: 0x1220fffd  beqz        $s1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x265B9Cu;
    {
        const bool branch_taken_0x265b9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x265BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265B9Cu;
            // 0x265ba0: 0x2aa2000c  slti        $v0, $s5, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b9c) {
            ctx->pc = 0x265B94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265b94;
        }
    }
    ctx->pc = 0x265BA4u;
    // 0x265ba4: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x265BA4u;
    {
        const bool branch_taken_0x265ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265BA4u;
            // 0x265ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ba4) {
            ctx->pc = 0x265DD0u;
            goto label_265dd0;
        }
    }
    ctx->pc = 0x265BACu;
    // 0x265bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bb4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x265bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x265bb8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x265BB8u;
    SET_GPR_U32(ctx, 31, 0x265BC0u);
    ctx->pc = 0x265BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265BB8u;
            // 0x265bbc: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BC0u; }
        if (ctx->pc != 0x265BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BC0u; }
        if (ctx->pc != 0x265BC0u) { return; }
    }
    ctx->pc = 0x265BC0u;
label_265bc0:
    // 0x265bc0: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x265bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x265bc4: 0x94640034  lhu         $a0, 0x34($v1)
    ctx->pc = 0x265bc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x265bc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x265bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x265bcc: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x265bccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x265bd0: 0xc08a262  jal         func_228988
    ctx->pc = 0x265BD0u;
    SET_GPR_U32(ctx, 31, 0x265BD8u);
    ctx->pc = 0x265BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265BD0u;
            // 0x265bd4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BD8u; }
        if (ctx->pc != 0x265BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265BD8u; }
        if (ctx->pc != 0x265BD8u) { return; }
    }
    ctx->pc = 0x265BD8u;
label_265bd8:
    // 0x265bd8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x265bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x265bdc: 0x3265000f  andi        $a1, $s3, 0xF
    ctx->pc = 0x265bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x265be0: 0x3c02ff87  lui         $v0, 0xFF87
    ctx->pc = 0x265be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65415 << 16));
    // 0x265be4: 0x52cc0  sll         $a1, $a1, 19
    ctx->pc = 0x265be4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 19));
    // 0x265be8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265bec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x265becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x265bf0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x265bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x265bf4: 0x3c06f0ff  lui         $a2, 0xF0FF
    ctx->pc = 0x265bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61695 << 16));
    // 0x265bf8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x265bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x265bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x265bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x265c00: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x265c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x265c04: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x265c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x265c08: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x265c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x265c0c: 0x235a821  addu        $s5, $s1, $s5
    ctx->pc = 0x265c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x265c10: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x265c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x265c14: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x265c14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x265c18: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x265c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x265c1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x265c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265c20: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x265c20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x265c24: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x265c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x265c28: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x265c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x265c2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x265c2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x265c30: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x265c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x265c34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x265c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x265c38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x265c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x265c3c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x265c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x265c40: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x265c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x265c44: 0x12650044  beq         $s3, $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x265C44u;
    {
        const bool branch_taken_0x265c44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x265C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C44u;
            // 0x265c48: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c44) {
            ctx->pc = 0x265D58u;
            goto label_265d58;
        }
    }
    ctx->pc = 0x265C4Cu;
    // 0x265c4c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x265c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x265c50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265C50u;
    {
        const bool branch_taken_0x265c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C50u;
            // 0x265c54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c50) {
            ctx->pc = 0x265C68u;
            goto label_265c68;
        }
    }
    ctx->pc = 0x265C58u;
    // 0x265c58: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x265C58u;
    {
        const bool branch_taken_0x265c58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x265C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C58u;
            // 0x265c5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c58) {
            ctx->pc = 0x265C70u;
            goto label_265c70;
        }
    }
    ctx->pc = 0x265C60u;
    // 0x265c60: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x265C60u;
    {
        const bool branch_taken_0x265c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C60u;
            // 0x265c64: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c60) {
            ctx->pc = 0x265DD4u;
            goto label_265dd4;
        }
    }
    ctx->pc = 0x265C68u;
label_265c68:
    // 0x265c68: 0x16620059  bne         $s3, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x265C68u;
    {
        const bool branch_taken_0x265c68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x265C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C68u;
            // 0x265c6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c68) {
            ctx->pc = 0x265DD0u;
            goto label_265dd0;
        }
    }
    ctx->pc = 0x265C70u;
label_265c70:
    // 0x265c70: 0x2b03023  subu        $a2, $s5, $s0
    ctx->pc = 0x265c70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x265c74: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x265c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x265c78: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x265C78u;
    {
        const bool branch_taken_0x265c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C78u;
            // 0x265c7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c78) {
            ctx->pc = 0x265DD0u;
            goto label_265dd0;
        }
    }
    ctx->pc = 0x265C80u;
    // 0x265c80: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x265c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265c84: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x265c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x265c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265c8c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x265c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265c90: 0xc09928e  jal         func_264A38
    ctx->pc = 0x265C90u;
    SET_GPR_U32(ctx, 31, 0x265C98u);
    ctx->pc = 0x265C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265C90u;
            // 0x265c94: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264A38u;
    if (runtime->hasFunction(0x264A38u)) {
        auto targetFn = runtime->lookupFunction(0x264A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C98u; }
        if (ctx->pc != 0x265C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264A38_0x264a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265C98u; }
        if (ctx->pc != 0x265C98u) { return; }
    }
    ctx->pc = 0x265C98u;
label_265c98:
    // 0x265c98: 0x440ffbe  bltz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x265C98u;
    {
        const bool branch_taken_0x265c98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265C98u;
            // 0x265c9c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c98) {
            ctx->pc = 0x265B94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265b94;
        }
    }
    ctx->pc = 0x265CA0u;
    // 0x265ca0: 0x33c4ffff  andi        $a0, $fp, 0xFFFF
    ctx->pc = 0x265ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x265ca4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x265ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x265ca8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265cac: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x265cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x265cb0: 0xc099334  jal         func_264CD0
    ctx->pc = 0x265CB0u;
    SET_GPR_U32(ctx, 31, 0x265CB8u);
    ctx->pc = 0x265CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265CB0u;
            // 0x265cb4: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CD0u;
    if (runtime->hasFunction(0x264CD0u)) {
        auto targetFn = runtime->lookupFunction(0x264CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CB8u; }
        if (ctx->pc != 0x265CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CD0_0x264cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CB8u; }
        if (ctx->pc != 0x265CB8u) { return; }
    }
    ctx->pc = 0x265CB8u;
label_265cb8:
    // 0x265cb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265cbc: 0xc099334  jal         func_264CD0
    ctx->pc = 0x265CBCu;
    SET_GPR_U32(ctx, 31, 0x265CC4u);
    ctx->pc = 0x265CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265CBCu;
            // 0x265cc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CD0u;
    if (runtime->hasFunction(0x264CD0u)) {
        auto targetFn = runtime->lookupFunction(0x264CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CC4u; }
        if (ctx->pc != 0x265CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CD0_0x264cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CC4u; }
        if (ctx->pc != 0x265CC4u) { return; }
    }
    ctx->pc = 0x265CC4u;
label_265cc4:
    // 0x265cc4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x265cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x265cc8: 0xc08a262  jal         func_228988
    ctx->pc = 0x265CC8u;
    SET_GPR_U32(ctx, 31, 0x265CD0u);
    ctx->pc = 0x265CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265CC8u;
            // 0x265ccc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CD0u; }
        if (ctx->pc != 0x265CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265CD0u; }
        if (ctx->pc != 0x265CD0u) { return; }
    }
    ctx->pc = 0x265CD0u;
label_265cd0:
    // 0x265cd0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x265cd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265cd4: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x265CD4u;
    {
        const bool branch_taken_0x265cd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x265CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265CD4u;
            // 0x265cd8: 0xa6340004  sh          $s4, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265cd4) {
            ctx->pc = 0x265DCCu;
            goto label_265dcc;
        }
    }
    ctx->pc = 0x265CDCu;
    // 0x265cdc: 0x12c0003b  beqz        $s6, . + 4 + (0x3B << 2)
    ctx->pc = 0x265CDCu;
    {
        const bool branch_taken_0x265cdc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x265CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265CDCu;
            // 0x265ce0: 0x2b03023  subu        $a2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265cdc) {
            ctx->pc = 0x265DCCu;
            goto label_265dcc;
        }
    }
    ctx->pc = 0x265CE4u;
    // 0x265ce4: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x265ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x265ce8: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x265CE8u;
    {
        const bool branch_taken_0x265ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265CE8u;
            // 0x265cec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ce8) {
            ctx->pc = 0x265DD0u;
            goto label_265dd0;
        }
    }
    ctx->pc = 0x265CF0u;
    // 0x265cf0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x265cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265cf4: 0x24c6fff6  addiu       $a2, $a2, -0xA
    ctx->pc = 0x265cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967286));
    // 0x265cf8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x265cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265cfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d00: 0xc09928e  jal         func_264A38
    ctx->pc = 0x265D00u;
    SET_GPR_U32(ctx, 31, 0x265D08u);
    ctx->pc = 0x265D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D00u;
            // 0x265d04: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264A38u;
    if (runtime->hasFunction(0x264A38u)) {
        auto targetFn = runtime->lookupFunction(0x264A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D08u; }
        if (ctx->pc != 0x265D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264A38_0x264a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D08u; }
        if (ctx->pc != 0x265D08u) { return; }
    }
    ctx->pc = 0x265D08u;
label_265d08:
    // 0x265d08: 0x440ffa2  bltz        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x265D08u;
    {
        const bool branch_taken_0x265d08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265D08u;
            // 0x265d0c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d08) {
            ctx->pc = 0x265B94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265b94;
        }
    }
    ctx->pc = 0x265D10u;
    // 0x265d10: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x265d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x265d14: 0xc099334  jal         func_264CD0
    ctx->pc = 0x265D14u;
    SET_GPR_U32(ctx, 31, 0x265D1Cu);
    ctx->pc = 0x265D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D14u;
            // 0x265d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CD0u;
    if (runtime->hasFunction(0x264CD0u)) {
        auto targetFn = runtime->lookupFunction(0x264CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D1Cu; }
        if (ctx->pc != 0x265D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CD0_0x264cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D1Cu; }
        if (ctx->pc != 0x265D1Cu) { return; }
    }
    ctx->pc = 0x265D1Cu;
label_265d1c:
    // 0x265d1c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x265d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x265d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d24: 0xc099334  jal         func_264CD0
    ctx->pc = 0x265D24u;
    SET_GPR_U32(ctx, 31, 0x265D2Cu);
    ctx->pc = 0x265D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D24u;
            // 0x265d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CD0u;
    if (runtime->hasFunction(0x264CD0u)) {
        auto targetFn = runtime->lookupFunction(0x264CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D2Cu; }
        if (ctx->pc != 0x265D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CD0_0x264cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D2Cu; }
        if (ctx->pc != 0x265D2Cu) { return; }
    }
    ctx->pc = 0x265D2Cu;
label_265d2c:
    // 0x265d2c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x265d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x265d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d34: 0xc09933a  jal         func_264CE8
    ctx->pc = 0x265D34u;
    SET_GPR_U32(ctx, 31, 0x265D3Cu);
    ctx->pc = 0x265D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D34u;
            // 0x265d38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CE8u;
    if (runtime->hasFunction(0x264CE8u)) {
        auto targetFn = runtime->lookupFunction(0x264CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D3Cu; }
        if (ctx->pc != 0x265D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CE8_0x264ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D3Cu; }
        if (ctx->pc != 0x265D3Cu) { return; }
    }
    ctx->pc = 0x265D3Cu;
label_265d3c:
    // 0x265d3c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x265d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x265d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d44: 0xc099334  jal         func_264CD0
    ctx->pc = 0x265D44u;
    SET_GPR_U32(ctx, 31, 0x265D4Cu);
    ctx->pc = 0x265D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D44u;
            // 0x265d48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CD0u;
    if (runtime->hasFunction(0x264CD0u)) {
        auto targetFn = runtime->lookupFunction(0x264CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D4Cu; }
        if (ctx->pc != 0x265D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CD0_0x264cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D4Cu; }
        if (ctx->pc != 0x265D4Cu) { return; }
    }
    ctx->pc = 0x265D4Cu;
label_265d4c:
    // 0x265d4c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x265d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x265d50: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x265D50u;
    {
        const bool branch_taken_0x265d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265D50u;
            // 0x265d54: 0xa634000a  sh          $s4, 0xA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d50) {
            ctx->pc = 0x265DCCu;
            goto label_265dcc;
        }
    }
    ctx->pc = 0x265D58u;
label_265d58:
    // 0x265d58: 0x2b01023  subu        $v0, $s5, $s0
    ctx->pc = 0x265d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x265d5c: 0x2683000b  addiu       $v1, $s4, 0xB
    ctx->pc = 0x265d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 11));
    // 0x265d60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x265d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265d64: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x265D64u;
    {
        const bool branch_taken_0x265d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265D64u;
            // 0x265d68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d64) {
            ctx->pc = 0x265DD0u;
            goto label_265dd0;
        }
    }
    ctx->pc = 0x265D6Cu;
    // 0x265d6c: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x265d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x265d70: 0x33c4ffff  andi        $a0, $fp, 0xFFFF
    ctx->pc = 0x265d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x265d74: 0x2625000d  addiu       $a1, $s1, 0xD
    ctx->pc = 0x265d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 13));
    // 0x265d78: 0xc099334  jal         func_264CD0
    ctx->pc = 0x265D78u;
    SET_GPR_U32(ctx, 31, 0x265D80u);
    ctx->pc = 0x265D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D78u;
            // 0x265d7c: 0x26300017  addiu       $s0, $s1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CD0u;
    if (runtime->hasFunction(0x264CD0u)) {
        auto targetFn = runtime->lookupFunction(0x264CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D80u; }
        if (ctx->pc != 0x265D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CD0_0x264cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D80u; }
        if (ctx->pc != 0x265D80u) { return; }
    }
    ctx->pc = 0x265D80u;
label_265d80:
    // 0x265d80: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x265d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x265d84: 0x2625000f  addiu       $a1, $s1, 0xF
    ctx->pc = 0x265d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x265d88: 0xc099334  jal         func_264CD0
    ctx->pc = 0x265D88u;
    SET_GPR_U32(ctx, 31, 0x265D90u);
    ctx->pc = 0x265D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D88u;
            // 0x265d8c: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CD0u;
    if (runtime->hasFunction(0x264CD0u)) {
        auto targetFn = runtime->lookupFunction(0x264CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D90u; }
        if (ctx->pc != 0x265D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CD0_0x264cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D90u; }
        if (ctx->pc != 0x265D90u) { return; }
    }
    ctx->pc = 0x265D90u;
label_265d90:
    // 0x265d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x265d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d94: 0xc09933a  jal         func_264CE8
    ctx->pc = 0x265D94u;
    SET_GPR_U32(ctx, 31, 0x265D9Cu);
    ctx->pc = 0x265D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D94u;
            // 0x265d98: 0x26250011  addiu       $a1, $s1, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CE8u;
    if (runtime->hasFunction(0x264CE8u)) {
        auto targetFn = runtime->lookupFunction(0x264CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D9Cu; }
        if (ctx->pc != 0x265D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CE8_0x264ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D9Cu; }
        if (ctx->pc != 0x265D9Cu) { return; }
    }
    ctx->pc = 0x265D9Cu;
label_265d9c:
    // 0x265d9c: 0x3284ffff  andi        $a0, $s4, 0xFFFF
    ctx->pc = 0x265d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x265da0: 0xc099334  jal         func_264CD0
    ctx->pc = 0x265DA0u;
    SET_GPR_U32(ctx, 31, 0x265DA8u);
    ctx->pc = 0x265DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265DA0u;
            // 0x265da4: 0x26250015  addiu       $a1, $s1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264CD0u;
    if (runtime->hasFunction(0x264CD0u)) {
        auto targetFn = runtime->lookupFunction(0x264CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DA8u; }
        if (ctx->pc != 0x265DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264CD0_0x264cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DA8u; }
        if (ctx->pc != 0x265DA8u) { return; }
    }
    ctx->pc = 0x265DA8u;
label_265da8:
    // 0x265da8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x265DA8u;
    {
        const bool branch_taken_0x265da8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x265DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265DA8u;
            // 0x265dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265da8) {
            ctx->pc = 0x265DC0u;
            goto label_265dc0;
        }
    }
    ctx->pc = 0x265DB0u;
    // 0x265db0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x265db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265db4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x265db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265db8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x265DB8u;
    SET_GPR_U32(ctx, 31, 0x265DC0u);
    ctx->pc = 0x265DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265DB8u;
            // 0x265dbc: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DC0u; }
        if (ctx->pc != 0x265DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DC0u; }
        if (ctx->pc != 0x265DC0u) { return; }
    }
    ctx->pc = 0x265DC0u;
label_265dc0:
    // 0x265dc0: 0xc08a262  jal         func_228988
    ctx->pc = 0x265DC0u;
    SET_GPR_U32(ctx, 31, 0x265DC8u);
    ctx->pc = 0x265DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265DC0u;
            // 0x265dc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DC8u; }
        if (ctx->pc != 0x265DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DC8u; }
        if (ctx->pc != 0x265DC8u) { return; }
    }
    ctx->pc = 0x265DC8u;
label_265dc8:
    // 0x265dc8: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x265dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_265dcc:
    // 0x265dcc: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x265dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_265dd0:
    // 0x265dd0: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x265dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_265dd4:
    // 0x265dd4: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x265dd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x265dd8: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x265dd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x265ddc: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x265ddcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x265de0: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x265de0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x265de4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x265de4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x265de8: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x265de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x265dec: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x265decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x265df0: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x265df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265df4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x265df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265df8: 0x3e00008  jr          $ra
    ctx->pc = 0x265DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265DF8u;
            // 0x265dfc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265E00u;
    ctx->pc = 0x265e00u;
}

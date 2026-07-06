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

// Function: sub_00290A58
// Address: 0x290a58 - 0x290e18
void sub_00290A58_0x290a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290A58_0x290a58");
#endif

    switch (ctx->pc) {
        case 0x290ab0u: goto label_290ab0;
        case 0x290af8u: goto label_290af8;
        case 0x290b24u: goto label_290b24;
        case 0x290b60u: goto label_290b60;
        case 0x290b80u: goto label_290b80;
        case 0x290bbcu: goto label_290bbc;
        case 0x290bdcu: goto label_290bdc;
        case 0x290c18u: goto label_290c18;
        case 0x290c28u: goto label_290c28;
        case 0x290c30u: goto label_290c30;
        case 0x290c74u: goto label_290c74;
        case 0x290c98u: goto label_290c98;
        case 0x290cacu: goto label_290cac;
        case 0x290d14u: goto label_290d14;
        case 0x290d38u: goto label_290d38;
        case 0x290d4cu: goto label_290d4c;
        case 0x290d84u: goto label_290d84;
        case 0x290d9cu: goto label_290d9c;
        case 0x290dbcu: goto label_290dbc;
        case 0x290df0u: goto label_290df0;
        default: break;
    }

    ctx->pc = 0x290a58u;

    // 0x290a58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x290a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x290a5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x290a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x290a60: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x290a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x290a64: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x290a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x290a68: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x290a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x290a6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x290a6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a70: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x290a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x290a74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a78: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x290a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x290a7c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x290a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x290a80: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x290a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x290a84: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x290a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x290a88: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x290a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x290a8c: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x290a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x290a90: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x290a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x290a94: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x290A94u;
    {
        const bool branch_taken_0x290a94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A94u;
        // 0x290a98: 0xafb40008  sw          $s4, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a94) {
            ctx->pc = 0x290AA8u;
            goto label_290aa8;
        }
    }
    ctx->pc = 0x290A9Cu;
    // 0x290a9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x290a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290aa0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290AA0u;
    {
        const bool branch_taken_0x290aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AA0u;
        // 0x290aa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290aa0) {
            ctx->pc = 0x290AC8u;
            goto label_290ac8;
        }
    }
    ctx->pc = 0x290AA8u;
label_290aa8:
    // 0x290aa8: 0xc0a5160  jal         func_294580
    ctx->pc = 0x290AA8u;
    SET_GPR_U32(ctx, 31, 0x290AB0u);
    ctx->pc = 0x294580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294580u, 0x290AA8u, 0x290AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AB0u;
label_290ab0:
    // 0x290ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ab4: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x290AB4u;
    {
        const bool branch_taken_0x290ab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x290ab4) {
            ctx->pc = 0x290AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290AB4u;
            // 0x290ab8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290AC8u;
            goto label_290ac8;
        }
    }
    ctx->pc = 0x290ABCu;
    // 0x290abc: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x290abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x290ac0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x290AC0u;
    {
        const bool branch_taken_0x290ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AC0u;
        // 0x290ac4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ac0) {
            ctx->pc = 0x290C5Cu;
            goto label_290c5c;
        }
    }
    ctx->pc = 0x290AC8u;
label_290ac8:
    // 0x290ac8: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x290ac8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290acc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290ACCu;
    {
        const bool branch_taken_0x290acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290ACCu;
        // 0x290ad0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290acc) {
            ctx->pc = 0x290AE4u;
            goto label_290ae4;
        }
    }
    ctx->pc = 0x290AD4u;
    // 0x290ad4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290ad8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290ad8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x290adc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290ADCu;
    {
        const bool branch_taken_0x290adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290ADCu;
        // 0x290ae0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290adc) {
            ctx->pc = 0x290AE8u;
            goto label_290ae8;
        }
    }
    ctx->pc = 0x290AE4u;
label_290ae4:
    // 0x290ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290ae8:
    // 0x290ae8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x290ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x290aec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290af0: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x290AF0u;
    SET_GPR_U32(ctx, 31, 0x290AF8u);
    ctx->pc = 0x290AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AF0u;
    // 0x290af4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x290AF0u, 0x290AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AF8u;
label_290af8:
    // 0x290af8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290AF8u;
    {
        const bool branch_taken_0x290af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AF8u;
        // 0x290afc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290af8) {
            ctx->pc = 0x290B0Cu;
            goto label_290b0c;
        }
    }
    ctx->pc = 0x290B00u;
    // 0x290b00: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x290b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x290b04: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x290B04u;
    {
        const bool branch_taken_0x290b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B04u;
        // 0x290b08: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b04) {
            ctx->pc = 0x290C5Cu;
            goto label_290c5c;
        }
    }
    ctx->pc = 0x290B0Cu;
label_290b0c:
    // 0x290b0c: 0x27b10038  addiu       $s1, $sp, 0x38
    ctx->pc = 0x290b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x290b10: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x290b10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b18: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x290b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x290b1c: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x290B1Cu;
    SET_GPR_U32(ctx, 31, 0x290B24u);
    ctx->pc = 0x290B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B1Cu;
    // 0x290b20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x290B1Cu, 0x290B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B24u;
label_290b24:
    // 0x290b24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290B24u;
    {
        const bool branch_taken_0x290b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B24u;
        // 0x290b28: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b24) {
            ctx->pc = 0x290B38u;
            goto label_290b38;
        }
    }
    ctx->pc = 0x290B2Cu;
    // 0x290b2c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x290b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x290b30: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x290B30u;
    {
        const bool branch_taken_0x290b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B30u;
        // 0x290b34: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b30) {
            ctx->pc = 0x290C5Cu;
            goto label_290c5c;
        }
    }
    ctx->pc = 0x290B38u;
label_290b38:
    // 0x290b38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x290b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b3c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x290b3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290b40: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x290b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290b44: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x290b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290b48: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x290b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x290b4c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x290b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x290b50: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x290b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x290b54: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x290b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x290b58: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x290B58u;
    SET_GPR_U32(ctx, 31, 0x290B60u);
    ctx->pc = 0x290B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B58u;
    // 0x290b5c: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x290B58u, 0x290B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B60u;
label_290b60:
    // 0x290b60: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x290B60u;
    {
        const bool branch_taken_0x290b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B60u;
        // 0x290b64: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b60) {
            ctx->pc = 0x290C58u;
            goto label_290c58;
        }
    }
    ctx->pc = 0x290B68u;
    // 0x290b68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x290b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b70: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x290b70u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290b74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x290b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b78: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x290B78u;
    SET_GPR_U32(ctx, 31, 0x290B80u);
    ctx->pc = 0x290B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B78u;
    // 0x290b7c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x290B78u, 0x290B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B80u;
label_290b80:
    // 0x290b80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290B80u;
    {
        const bool branch_taken_0x290b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B80u;
        // 0x290b84: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b80) {
            ctx->pc = 0x290B94u;
            goto label_290b94;
        }
    }
    ctx->pc = 0x290B88u;
    // 0x290b88: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x290b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x290b8c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x290B8Cu;
    {
        const bool branch_taken_0x290b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B8Cu;
        // 0x290b90: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b8c) {
            ctx->pc = 0x290C5Cu;
            goto label_290c5c;
        }
    }
    ctx->pc = 0x290B94u;
label_290b94:
    // 0x290b94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x290b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b98: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x290b98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290b9c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x290b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290ba0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x290ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290ba4: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x290ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x290ba8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x290ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x290bac: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x290bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x290bb0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x290bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x290bb4: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x290BB4u;
    SET_GPR_U32(ctx, 31, 0x290BBCu);
    ctx->pc = 0x290BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BB4u;
    // 0x290bb8: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x290BB4u, 0x290BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BBCu;
label_290bbc:
    // 0x290bbc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x290BBCu;
    {
        const bool branch_taken_0x290bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BBCu;
        // 0x290bc0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bbc) {
            ctx->pc = 0x290C58u;
            goto label_290c58;
        }
    }
    ctx->pc = 0x290BC4u;
    // 0x290bc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x290bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290bcc: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x290bccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290bd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x290bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290bd4: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x290BD4u;
    SET_GPR_U32(ctx, 31, 0x290BDCu);
    ctx->pc = 0x290BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BD4u;
    // 0x290bd8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x290BD4u, 0x290BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BDCu;
label_290bdc:
    // 0x290bdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290BDCu;
    {
        const bool branch_taken_0x290bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BDCu;
        // 0x290be0: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bdc) {
            ctx->pc = 0x290BF0u;
            goto label_290bf0;
        }
    }
    ctx->pc = 0x290BE4u;
    // 0x290be4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x290be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x290be8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x290BE8u;
    {
        const bool branch_taken_0x290be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BE8u;
        // 0x290bec: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290be8) {
            ctx->pc = 0x290C5Cu;
            goto label_290c5c;
        }
    }
    ctx->pc = 0x290BF0u;
label_290bf0:
    // 0x290bf0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x290bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290bf4: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x290bf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290bf8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x290bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290bfc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x290bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290c00: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x290c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x290c04: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x290c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x290c08: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x290c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x290c0c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x290c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x290c10: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x290C10u;
    SET_GPR_U32(ctx, 31, 0x290C18u);
    ctx->pc = 0x290C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C10u;
    // 0x290c14: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x290C10u, 0x290C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C18u;
label_290c18:
    // 0x290c18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x290C18u;
    {
        const bool branch_taken_0x290c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C18u;
        // 0x290c1c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c18) {
            ctx->pc = 0x290C58u;
            goto label_290c58;
        }
    }
    ctx->pc = 0x290C20u;
    // 0x290c20: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x290C20u;
    SET_GPR_U32(ctx, 31, 0x290C28u);
    ctx->pc = 0x290C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C20u;
    // 0x290c24: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x290C20u, 0x290C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C28u;
label_290c28:
    // 0x290c28: 0xc0a065c  jal         func_281970
    ctx->pc = 0x290C28u;
    SET_GPR_U32(ctx, 31, 0x290C30u);
    ctx->pc = 0x290C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C28u;
    // 0x290c2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281970u, 0x290C28u, 0x290C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C30u;
label_290c30:
    // 0x290c30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290C30u;
    {
        const bool branch_taken_0x290c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C30u;
        // 0x290c34: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c30) {
            ctx->pc = 0x290C44u;
            goto label_290c44;
        }
    }
    ctx->pc = 0x290C38u;
    // 0x290c38: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x290c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x290c3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290C3Cu;
    {
        const bool branch_taken_0x290c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C3Cu;
        // 0x290c40: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c3c) {
            ctx->pc = 0x290C5Cu;
            goto label_290c5c;
        }
    }
    ctx->pc = 0x290C44u;
label_290c44:
    // 0x290c44: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x290C44u;
    {
        const bool branch_taken_0x290c44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C44u;
        // 0x290c48: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c44) {
            ctx->pc = 0x290C50u;
            goto label_290c50;
        }
    }
    ctx->pc = 0x290C4Cu;
    // 0x290c4c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x290c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_290c50:
    // 0x290c50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x290C50u;
    {
        const bool branch_taken_0x290c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C50u;
        // 0x290c54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c50) {
            ctx->pc = 0x290CB0u;
            goto label_290cb0;
        }
    }
    ctx->pc = 0x290C58u;
label_290c58:
    // 0x290c58: 0x24140803  addiu       $s4, $zero, 0x803
    ctx->pc = 0x290c58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_290c5c:
    // 0x290c5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x290c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c60: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x290c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x290c64: 0x24050089  addiu       $a1, $zero, 0x89
    ctx->pc = 0x290c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x290c68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c6c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x290C6Cu;
    SET_GPR_U32(ctx, 31, 0x290C74u);
    ctx->pc = 0x290C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C6Cu;
    // 0x290c70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x290C6Cu, 0x290C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C74u;
label_290c74:
    // 0x290c74: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290C74u;
    {
        const bool branch_taken_0x290c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C74u;
        // 0x290c78: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c74) {
            ctx->pc = 0x290C9Cu;
            goto label_290c9c;
        }
    }
    ctx->pc = 0x290C7Cu;
    // 0x290c7c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x290C7Cu;
    {
        const bool branch_taken_0x290c7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c7c) {
            ctx->pc = 0x290C90u;
            goto label_290c90;
        }
    }
    ctx->pc = 0x290C84u;
    // 0x290c84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x290c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290c88: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290C88u;
    {
        const bool branch_taken_0x290c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x290c88) {
            ctx->pc = 0x290C9Cu;
            goto label_290c9c;
        }
    }
    ctx->pc = 0x290C90u;
label_290c90:
    // 0x290c90: 0xc0a5200  jal         func_294800
    ctx->pc = 0x290C90u;
    SET_GPR_U32(ctx, 31, 0x290C98u);
    ctx->pc = 0x290C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C90u;
    // 0x290c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294800u, 0x290C90u, 0x290C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C98u;
label_290c98:
    // 0x290c98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x290c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_290c9c:
    // 0x290c9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290C9Cu;
    {
        const bool branch_taken_0x290c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C9Cu;
        // 0x290ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c9c) {
            ctx->pc = 0x290CB0u;
            goto label_290cb0;
        }
    }
    ctx->pc = 0x290CA4u;
    // 0x290ca4: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x290CA4u;
    SET_GPR_U32(ctx, 31, 0x290CACu);
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x290CA4u, 0x290CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290CACu;
label_290cac:
    // 0x290cac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290cb0:
    // 0x290cb0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x290cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x290cb4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x290cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290cb8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x290cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290cbc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x290cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290cc0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x290cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290cc4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x290cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x290CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CC8u;
        // 0x290ccc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290CD0u;
    // 0x290cd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x290cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x290cd4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x290cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x290cd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x290cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x290cdc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x290cdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ce0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x290ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x290ce4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x290ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ce8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x290ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x290cec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290cf0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x290cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x290cf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x290cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290cf8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290CF8u;
    {
        const bool branch_taken_0x290cf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CF8u;
        // 0x290cfc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cf8) {
            ctx->pc = 0x290D0Cu;
            goto label_290d0c;
        }
    }
    ctx->pc = 0x290D00u;
    // 0x290d00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x290d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x290d04: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x290D04u;
    {
        const bool branch_taken_0x290d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D04u;
        // 0x290d08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d04) {
            ctx->pc = 0x290D40u;
            goto label_290d40;
        }
    }
    ctx->pc = 0x290D0Cu;
label_290d0c:
    // 0x290d0c: 0xc0a72c8  jal         func_29CB20
    ctx->pc = 0x290D0Cu;
    SET_GPR_U32(ctx, 31, 0x290D14u);
    ctx->pc = 0x29CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB20u, 0x290D0Cu, 0x290D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D14u;
label_290d14:
    // 0x290d14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d18: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x290D18u;
    {
        const bool branch_taken_0x290d18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x290d18) {
            ctx->pc = 0x290D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290D18u;
            // 0x290d1c: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D44u;
            goto label_290d44;
        }
    }
    ctx->pc = 0x290D20u;
    // 0x290d20: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x290d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x290d24: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x290d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x290d28: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x290d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x290d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d30: 0xc0a5648  jal         func_295920
    ctx->pc = 0x290D30u;
    SET_GPR_U32(ctx, 31, 0x290D38u);
    ctx->pc = 0x290D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D30u;
    // 0x290d34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x290D30u, 0x290D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D38u;
label_290d38:
    // 0x290d38: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x290D38u;
    {
        const bool branch_taken_0x290d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D38u;
        // 0x290d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d38) {
            ctx->pc = 0x290DF4u;
            goto label_290df4;
        }
    }
    ctx->pc = 0x290D40u;
label_290d40:
    // 0x290d40: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x290d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_290d44:
    // 0x290d44: 0xc0a7320  jal         func_29CC80
    ctx->pc = 0x290D44u;
    SET_GPR_U32(ctx, 31, 0x290D4Cu);
    ctx->pc = 0x290D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D44u;
    // 0x290d48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC80u, 0x290D44u, 0x290D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D4Cu;
label_290d4c:
    // 0x290d4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x290d4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d50: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x290d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x290d54: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290D54u;
    {
        const bool branch_taken_0x290d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x290D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D54u;
        // 0x290d58: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d54) {
            ctx->pc = 0x290D74u;
            goto label_290d74;
        }
    }
    ctx->pc = 0x290D5Cu;
    // 0x290d5c: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x290d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x290d60: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290D60u;
    {
        const bool branch_taken_0x290d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x290D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D60u;
        // 0x290d64: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d60) {
            ctx->pc = 0x290D8Cu;
            goto label_290d8c;
        }
    }
    ctx->pc = 0x290D68u;
    // 0x290d68: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x290d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x290d6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x290D6Cu;
    {
        const bool branch_taken_0x290d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D6Cu;
        // 0x290d70: 0x2406008f  addiu       $a2, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d6c) {
            ctx->pc = 0x290DB0u;
            goto label_290db0;
        }
    }
    ctx->pc = 0x290D74u;
label_290d74:
    // 0x290d74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x290d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x290d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d7c: 0xc0aa500  jal         func_2A9400
    ctx->pc = 0x290D7Cu;
    SET_GPR_U32(ctx, 31, 0x290D84u);
    ctx->pc = 0x290D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D7Cu;
    // 0x290d80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9400u, 0x290D7Cu, 0x290D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D84u;
label_290d84:
    // 0x290d84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x290D84u;
    {
        const bool branch_taken_0x290d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D84u;
        // 0x290d88: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d84) {
            ctx->pc = 0x290DA0u;
            goto label_290da0;
        }
    }
    ctx->pc = 0x290D8Cu;
label_290d8c:
    // 0x290d8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x290d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d90: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x290d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d94: 0xc0a43d8  jal         func_290F60
    ctx->pc = 0x290D94u;
    SET_GPR_U32(ctx, 31, 0x290D9Cu);
    ctx->pc = 0x290D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D94u;
    // 0x290d98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F60u, 0x290D94u, 0x290D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D9Cu;
label_290d9c:
    // 0x290d9c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x290d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_290da0:
    // 0x290da0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290DA0u;
    {
        const bool branch_taken_0x290da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DA0u;
        // 0x290da4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290da0) {
            ctx->pc = 0x290DC4u;
            goto label_290dc4;
        }
    }
    ctx->pc = 0x290DA8u;
    // 0x290da8: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x290da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x290dac: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x290dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_290db0:
    // 0x290db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290db4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x290DB4u;
    SET_GPR_U32(ctx, 31, 0x290DBCu);
    ctx->pc = 0x290DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DB4u;
    // 0x290db8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x290DB4u, 0x290DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290DBCu;
label_290dbc:
    // 0x290dbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x290DBCu;
    {
        const bool branch_taken_0x290dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290dbc) {
            ctx->pc = 0x290DD4u;
            goto label_290dd4;
        }
    }
    ctx->pc = 0x290DC4u;
label_290dc4:
    // 0x290dc4: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x290DC4u;
    {
        const bool branch_taken_0x290dc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x290dc4) {
            ctx->pc = 0x290DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290DC4u;
            // 0x290dc8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290DCCu;
            goto label_290dcc;
        }
    }
    ctx->pc = 0x290DCCu;
label_290dcc:
    // 0x290dcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x290DCCu;
    {
        const bool branch_taken_0x290dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DCCu;
        // 0x290dd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290dcc) {
            ctx->pc = 0x290DF4u;
            goto label_290df4;
        }
    }
    ctx->pc = 0x290DD4u;
label_290dd4:
    // 0x290dd4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290DD4u;
    {
        const bool branch_taken_0x290dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x290dd4) {
            ctx->pc = 0x290DE8u;
            goto label_290de8;
        }
    }
    ctx->pc = 0x290DDCu;
    // 0x290ddc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x290ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x290de0: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290DE0u;
    {
        const bool branch_taken_0x290de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x290DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DE0u;
        // 0x290de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290de0) {
            ctx->pc = 0x290DF4u;
            goto label_290df4;
        }
    }
    ctx->pc = 0x290DE8u;
label_290de8:
    // 0x290de8: 0xc0a734a  jal         func_29CD28
    ctx->pc = 0x290DE8u;
    SET_GPR_U32(ctx, 31, 0x290DF0u);
    ctx->pc = 0x290DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DE8u;
    // 0x290dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD28u, 0x290DE8u, 0x290DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290DF0u;
label_290df0:
    // 0x290df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290df4:
    // 0x290df4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x290df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290df8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x290df8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290dfc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x290dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290e00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x290e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290e04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x290e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x290E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E0Cu;
        // 0x290e10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290E14u;
    // 0x290e14: 0x0  nop
    ctx->pc = 0x290e14u;
    // NOP
}

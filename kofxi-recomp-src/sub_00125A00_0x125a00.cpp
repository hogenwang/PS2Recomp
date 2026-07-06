#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125A00
// Address: 0x125a00 - 0x125b00
void sub_00125A00_0x125a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125A00_0x125a00");
#endif

    switch (ctx->pc) {
        case 0x125a00u: goto label_125a00;
        case 0x125a04u: goto label_125a04;
        case 0x125a08u: goto label_125a08;
        case 0x125a0cu: goto label_125a0c;
        case 0x125a10u: goto label_125a10;
        case 0x125a14u: goto label_125a14;
        case 0x125a18u: goto label_125a18;
        case 0x125a1cu: goto label_125a1c;
        case 0x125a20u: goto label_125a20;
        case 0x125a24u: goto label_125a24;
        case 0x125a28u: goto label_125a28;
        case 0x125a2cu: goto label_125a2c;
        case 0x125a30u: goto label_125a30;
        case 0x125a34u: goto label_125a34;
        case 0x125a38u: goto label_125a38;
        case 0x125a3cu: goto label_125a3c;
        case 0x125a40u: goto label_125a40;
        case 0x125a44u: goto label_125a44;
        case 0x125a48u: goto label_125a48;
        case 0x125a4cu: goto label_125a4c;
        case 0x125a50u: goto label_125a50;
        case 0x125a54u: goto label_125a54;
        case 0x125a58u: goto label_125a58;
        case 0x125a5cu: goto label_125a5c;
        case 0x125a60u: goto label_125a60;
        case 0x125a64u: goto label_125a64;
        case 0x125a68u: goto label_125a68;
        case 0x125a6cu: goto label_125a6c;
        case 0x125a70u: goto label_125a70;
        case 0x125a74u: goto label_125a74;
        case 0x125a78u: goto label_125a78;
        case 0x125a7cu: goto label_125a7c;
        case 0x125a80u: goto label_125a80;
        case 0x125a84u: goto label_125a84;
        case 0x125a88u: goto label_125a88;
        case 0x125a8cu: goto label_125a8c;
        case 0x125a90u: goto label_125a90;
        case 0x125a94u: goto label_125a94;
        case 0x125a98u: goto label_125a98;
        case 0x125a9cu: goto label_125a9c;
        case 0x125aa0u: goto label_125aa0;
        case 0x125aa4u: goto label_125aa4;
        case 0x125aa8u: goto label_125aa8;
        case 0x125aacu: goto label_125aac;
        case 0x125ab0u: goto label_125ab0;
        case 0x125ab4u: goto label_125ab4;
        case 0x125ab8u: goto label_125ab8;
        case 0x125abcu: goto label_125abc;
        case 0x125ac0u: goto label_125ac0;
        case 0x125ac4u: goto label_125ac4;
        case 0x125ac8u: goto label_125ac8;
        case 0x125accu: goto label_125acc;
        case 0x125ad0u: goto label_125ad0;
        case 0x125ad4u: goto label_125ad4;
        case 0x125ad8u: goto label_125ad8;
        case 0x125adcu: goto label_125adc;
        case 0x125ae0u: goto label_125ae0;
        case 0x125ae4u: goto label_125ae4;
        case 0x125ae8u: goto label_125ae8;
        case 0x125aecu: goto label_125aec;
        case 0x125af0u: goto label_125af0;
        case 0x125af4u: goto label_125af4;
        case 0x125af8u: goto label_125af8;
        case 0x125afcu: goto label_125afc;
        default: break;
    }

    ctx->pc = 0x125a00u;

label_125a00:
    // 0x125a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_125a04:
    // 0x125a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125a08:
    // 0x125a08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x125a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_125a0c:
    // 0x125a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125a10:
    // 0x125a10: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x125a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_125a14:
    // 0x125a14: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_125a18:
    if (ctx->pc == 0x125A18u) {
        ctx->pc = 0x125A18u;
            // 0x125a18: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x125A1Cu;
        goto label_125a1c;
    }
    ctx->pc = 0x125A14u;
    {
        const bool branch_taken_0x125a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x125a14) {
            ctx->pc = 0x125A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125A14u;
            // 0x125a18: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125A30u;
            goto label_125a30;
        }
    }
    ctx->pc = 0x125A1Cu;
label_125a1c:
    // 0x125a1c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x125a1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_125a20:
    // 0x125a20: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x125a20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
label_125a24:
    // 0x125a24: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x125a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
label_125a28:
    // 0x125a28: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x125a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_125a2c:
    // 0x125a2c: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x125a2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_125a30:
    // 0x125a30: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
label_125a34:
    if (ctx->pc == 0x125A34u) {
        ctx->pc = 0x125A34u;
            // 0x125a34: 0x8e0f0028  lw          $t7, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x125A38u;
        goto label_125a38;
    }
    ctx->pc = 0x125A30u;
    {
        const bool branch_taken_0x125a30 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125a30) {
            ctx->pc = 0x125A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125A30u;
            // 0x125a34: 0x8e0f0028  lw          $t7, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125A44u;
            goto label_125a44;
        }
    }
    ctx->pc = 0x125A38u;
label_125a38:
    // 0x125a38: 0xc049360  jal         func_124D80
label_125a3c:
    if (ctx->pc == 0x125A3Cu) {
        ctx->pc = 0x125A40u;
        goto label_125a40;
    }
    ctx->pc = 0x125A38u;
    SET_GPR_U32(ctx, 31, 0x125A40u);
    ctx->pc = 0x124D80u;
    if (runtime->hasFunction(0x124D80u)) {
        auto targetFn = runtime->lookupFunction(0x124D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A40u; }
        if (ctx->pc != 0x125A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124D80_0x124d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A40u; }
        if (ctx->pc != 0x125A40u) { return; }
    }
    ctx->pc = 0x125A40u;
label_125a40:
    // 0x125a40: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x125a40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_125a44:
    // 0x125a44: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
label_125a48:
    if (ctx->pc == 0x125A48u) {
        ctx->pc = 0x125A48u;
            // 0x125a48: 0x240f001d  addiu       $t7, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x125A4Cu;
        goto label_125a4c;
    }
    ctx->pc = 0x125A44u;
    {
        const bool branch_taken_0x125a44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125A44u;
            // 0x125a48: 0x240f001d  addiu       $t7, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a44) {
            ctx->pc = 0x125A68u;
            goto label_125a68;
        }
    }
    ctx->pc = 0x125A4Cu;
label_125a4c:
    // 0x125a4c: 0x8e0e0054  lw          $t6, 0x54($s0)
    ctx->pc = 0x125a4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_125a50:
    // 0x125a50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125a54:
    // 0x125a54: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x125a54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
label_125a58:
    // 0x125a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125a5c:
    // 0x125a5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x125a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_125a60:
    // 0x125a60: 0x3e00008  jr          $ra
label_125a64:
    if (ctx->pc == 0x125A64u) {
        ctx->pc = 0x125A64u;
            // 0x125a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x125A68u;
        goto label_125a68;
    }
    ctx->pc = 0x125A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125A60u;
            // 0x125a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125A68u;
label_125a68:
    // 0x125a68: 0xc049258  jal         func_124960
label_125a6c:
    if (ctx->pc == 0x125A6Cu) {
        ctx->pc = 0x125A6Cu;
            // 0x125a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125A70u;
        goto label_125a70;
    }
    ctx->pc = 0x125A68u;
    SET_GPR_U32(ctx, 31, 0x125A70u);
    ctx->pc = 0x125A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125A68u;
            // 0x125a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (runtime->hasFunction(0x124960u)) {
        auto targetFn = runtime->lookupFunction(0x124960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A70u; }
        if (ctx->pc != 0x125A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124960_0x124960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A70u; }
        if (ctx->pc != 0x125A70u) { return; }
    }
    ctx->pc = 0x125A70u;
label_125a70:
    // 0x125a70: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x125a70u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_125a74:
    // 0x125a74: 0x31cf1000  andi        $t7, $t6, 0x1000
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4096);
label_125a78:
    // 0x125a78: 0x51e00016  beql        $t7, $zero, . + 4 + (0x16 << 2)
label_125a7c:
    if (ctx->pc == 0x125A7Cu) {
        ctx->pc = 0x125A7Cu;
            // 0x125a7c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x125A80u;
        goto label_125a80;
    }
    ctx->pc = 0x125A78u;
    {
        const bool branch_taken_0x125a78 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a78) {
            ctx->pc = 0x125A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125A78u;
            // 0x125a7c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125AD4u;
            goto label_125ad4;
        }
    }
    ctx->pc = 0x125A80u;
label_125a80:
    // 0x125a80: 0x8e0d0050  lw          $t5, 0x50($s0)
    ctx->pc = 0x125a80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_125a84:
    // 0x125a84: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x125a84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
label_125a88:
    // 0x125a88: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
label_125a8c:
    if (ctx->pc == 0x125A8Cu) {
        ctx->pc = 0x125A8Cu;
            // 0x125a8c: 0x31cf0008  andi        $t7, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x125A90u;
        goto label_125a90;
    }
    ctx->pc = 0x125A88u;
    {
        const bool branch_taken_0x125a88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125A88u;
            // 0x125a8c: 0x31cf0008  andi        $t7, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a88) {
            ctx->pc = 0x125AB0u;
            goto label_125ab0;
        }
    }
    ctx->pc = 0x125A90u;
label_125a90:
    // 0x125a90: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_125a94:
    // 0x125a94: 0x8e0e0030  lw          $t6, 0x30($s0)
    ctx->pc = 0x125a94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_125a98:
    // 0x125a98: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
label_125a9c:
    if (ctx->pc == 0x125A9Cu) {
        ctx->pc = 0x125A9Cu;
            // 0x125a9c: 0x1af682f  dsubu       $t5, $t5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) - GPR_U64(ctx, 15));
        ctx->pc = 0x125AA0u;
        goto label_125aa0;
    }
    ctx->pc = 0x125A98u;
    {
        const bool branch_taken_0x125a98 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125A98u;
            // 0x125a9c: 0x1af682f  dsubu       $t5, $t5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) - GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a98) {
            ctx->pc = 0x125AA8u;
            goto label_125aa8;
        }
    }
    ctx->pc = 0x125AA0u;
label_125aa0:
    // 0x125aa0: 0x8e0f003c  lw          $t7, 0x3C($s0)
    ctx->pc = 0x125aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_125aa4:
    // 0x125aa4: 0x1af682f  dsubu       $t5, $t5, $t7
    ctx->pc = 0x125aa4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) - GPR_U64(ctx, 15));
label_125aa8:
    // 0x125aa8: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
label_125aac:
    if (ctx->pc == 0x125AACu) {
        ctx->pc = 0x125AACu;
            // 0x125aac: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125AB0u;
        goto label_125ab0;
    }
    ctx->pc = 0x125AA8u;
    {
        const bool branch_taken_0x125aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125AA8u;
            // 0x125aac: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125aa8) {
            ctx->pc = 0x125A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125a58;
        }
    }
    ctx->pc = 0x125AB0u;
label_125ab0:
    // 0x125ab0: 0x11e0ffe9  beqz        $t7, . + 4 + (-0x17 << 2)
label_125ab4:
    if (ctx->pc == 0x125AB4u) {
        ctx->pc = 0x125AB4u;
            // 0x125ab4: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125AB8u;
        goto label_125ab8;
    }
    ctx->pc = 0x125AB0u;
    {
        const bool branch_taken_0x125ab0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125AB0u;
            // 0x125ab4: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ab0) {
            ctx->pc = 0x125A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125a58;
        }
    }
    ctx->pc = 0x125AB8u;
label_125ab8:
    // 0x125ab8: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x125ab8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125abc:
    // 0x125abc: 0x51c0ffe7  beql        $t6, $zero, . + 4 + (-0x19 << 2)
label_125ac0:
    if (ctx->pc == 0x125AC0u) {
        ctx->pc = 0x125AC0u;
            // 0x125ac0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x125AC4u;
        goto label_125ac4;
    }
    ctx->pc = 0x125ABCu;
    {
        const bool branch_taken_0x125abc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x125abc) {
            ctx->pc = 0x125AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125ABCu;
            // 0x125ac0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125A5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125a5c;
        }
    }
    ctx->pc = 0x125AC4u;
label_125ac4:
    // 0x125ac4: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x125ac4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_125ac8:
    // 0x125ac8: 0x1cf7823  subu        $t7, $t6, $t7
    ctx->pc = 0x125ac8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_125acc:
    // 0x125acc: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_125ad0:
    if (ctx->pc == 0x125AD0u) {
        ctx->pc = 0x125AD0u;
            // 0x125ad0: 0x1af682d  daddu       $t5, $t5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 15));
        ctx->pc = 0x125AD4u;
        goto label_125ad4;
    }
    ctx->pc = 0x125ACCu;
    {
        const bool branch_taken_0x125acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125ACCu;
            // 0x125ad0: 0x1af682d  daddu       $t5, $t5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125acc) {
            ctx->pc = 0x125AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125aa8;
        }
    }
    ctx->pc = 0x125AD4u;
label_125ad4:
    // 0x125ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125ad8:
    // 0x125ad8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x125ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_125adc:
    // 0x125adc: 0x40f809  jalr        $v0
label_125ae0:
    if (ctx->pc == 0x125AE0u) {
        ctx->pc = 0x125AE0u;
            // 0x125ae0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x125AE4u;
        goto label_125ae4;
    }
    ctx->pc = 0x125ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125AE4u);
        ctx->pc = 0x125AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125ADCu;
            // 0x125ae0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x125AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125AE4u; }
            if (ctx->pc != 0x125AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x125AE4u;
label_125ae4:
    // 0x125ae4: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x125ae4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125ae8:
    // 0x125ae8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x125ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125aec:
    // 0x125aec: 0x11afffda  beq         $t5, $t7, . + 4 + (-0x26 << 2)
label_125af0:
    if (ctx->pc == 0x125AF0u) {
        ctx->pc = 0x125AF0u;
            // 0x125af0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x125AF4u;
        goto label_125af4;
    }
    ctx->pc = 0x125AECu;
    {
        const bool branch_taken_0x125aec = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x125AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125AECu;
            // 0x125af0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125aec) {
            ctx->pc = 0x125A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125a58;
        }
    }
    ctx->pc = 0x125AF4u;
label_125af4:
    // 0x125af4: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
label_125af8:
    if (ctx->pc == 0x125AF8u) {
        ctx->pc = 0x125AF8u;
            // 0x125af8: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x125AFCu;
        goto label_125afc;
    }
    ctx->pc = 0x125AF4u;
    {
        const bool branch_taken_0x125af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125AF4u;
            // 0x125af8: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125af4) {
            ctx->pc = 0x125A84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125a84;
        }
    }
    ctx->pc = 0x125AFCu;
label_125afc:
    // 0x125afc: 0x0  nop
    ctx->pc = 0x125afcu;
    // NOP
    ctx->pc = 0x125b00u;
}

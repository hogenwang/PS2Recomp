#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218BE8
// Address: 0x218be8 - 0x218d88
void sub_00218BE8_0x218be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218BE8_0x218be8");
#endif

    switch (ctx->pc) {
        case 0x218c04u: goto label_218c04;
        case 0x218c14u: goto label_218c14;
        case 0x218c24u: goto label_218c24;
        case 0x218c48u: goto label_218c48;
        case 0x218c8cu: goto label_218c8c;
        case 0x218ca0u: goto label_218ca0;
        case 0x218cb4u: goto label_218cb4;
        case 0x218cc4u: goto label_218cc4;
        case 0x218ce8u: goto label_218ce8;
        case 0x218d2cu: goto label_218d2c;
        case 0x218d40u: goto label_218d40;
        case 0x218d54u: goto label_218d54;
        case 0x218d5cu: goto label_218d5c;
        default: break;
    }

    ctx->pc = 0x218be8u;

label_218be8:
    // 0x218be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218bf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x218bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x218bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bf8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218bfc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218BFCu;
    SET_GPR_U32(ctx, 31, 0x218C04u);
    ctx->pc = 0x218C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218BFCu;
            // 0x218c00: 0x24841130  addiu       $a0, $a0, 0x1130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C04u; }
        if (ctx->pc != 0x218C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C04u; }
        if (ctx->pc != 0x218C04u) { return; }
    }
    ctx->pc = 0x218C04u;
label_218c04:
    // 0x218c04: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x218c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218c08: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218c0c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218C0Cu;
    SET_GPR_U32(ctx, 31, 0x218C14u);
    ctx->pc = 0x218C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C0Cu;
            // 0x218c10: 0x24841050  addiu       $a0, $a0, 0x1050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C14u; }
        if (ctx->pc != 0x218C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C14u; }
        if (ctx->pc != 0x218C14u) { return; }
    }
    ctx->pc = 0x218C14u;
label_218c14:
    // 0x218c14: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x218c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218c18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218c1c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218C1Cu;
    SET_GPR_U32(ctx, 31, 0x218C24u);
    ctx->pc = 0x218C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C1Cu;
            // 0x218c20: 0x24841150  addiu       $a0, $a0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C24u; }
        if (ctx->pc != 0x218C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C24u; }
        if (ctx->pc != 0x218C24u) { return; }
    }
    ctx->pc = 0x218C24u;
label_218c24:
    // 0x218c24: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x218c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x218c28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x218c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218c30: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218c38: 0x24841160  addiu       $a0, $a0, 0x1160
    ctx->pc = 0x218c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4448));
    // 0x218c3c: 0x8043e52  j           func_10F948
    ctx->pc = 0x218C3Cu;
    ctx->pc = 0x218C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C3Cu;
            // 0x218c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x218C44u;
    // 0x218c44: 0x0  nop
    ctx->pc = 0x218c44u;
    // NOP
label_218c48:
    // 0x218c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218c4c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218c50: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218c58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218c5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x218c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218c60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x218c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c64: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x218c64u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x218c68: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218c70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x218c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218c78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218c78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c7c: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x218c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x218c80: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x218c80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218c84: 0xc0844dc  jal         func_211370
    ctx->pc = 0x218C84u;
    SET_GPR_U32(ctx, 31, 0x218C8Cu);
    ctx->pc = 0x218C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C84u;
            // 0x218c88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C8Cu; }
        if (ctx->pc != 0x218C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C8Cu; }
        if (ctx->pc != 0x218C8Cu) { return; }
    }
    ctx->pc = 0x218C8Cu;
label_218c8c:
    // 0x218c8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c98: 0xc0844dc  jal         func_211370
    ctx->pc = 0x218C98u;
    SET_GPR_U32(ctx, 31, 0x218CA0u);
    ctx->pc = 0x218C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C98u;
            // 0x218c9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CA0u; }
        if (ctx->pc != 0x218CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CA0u; }
        if (ctx->pc != 0x218CA0u) { return; }
    }
    ctx->pc = 0x218CA0u;
label_218ca0:
    // 0x218ca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ca4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218cac: 0xc08449a  jal         func_211268
    ctx->pc = 0x218CACu;
    SET_GPR_U32(ctx, 31, 0x218CB4u);
    ctx->pc = 0x218CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218CACu;
            // 0x218cb0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CB4u; }
        if (ctx->pc != 0x218CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218CB4u; }
        if (ctx->pc != 0x218CB4u) { return; }
    }
    ctx->pc = 0x218CB4u;
label_218cb4:
    // 0x218cb4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x218cb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x218cb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218cbc: 0xc0862fa  jal         func_218BE8
    ctx->pc = 0x218CBCu;
    SET_GPR_U32(ctx, 31, 0x218CC4u);
    ctx->pc = 0x218CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218CBCu;
            // 0x218cc0: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218BE8u;
    goto label_218be8;
    ctx->pc = 0x218CC4u;
label_218cc4:
    // 0x218cc4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x218cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218ccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218cd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218cd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218cd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218cd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218cd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218cdc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x218CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218CE0u;
            // 0x218ce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218CE8u;
label_218ce8:
    // 0x218ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218cec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218cecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218cf0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218cf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218cfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x218d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218d08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218d10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x218d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d14: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x218d14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x218d18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d1c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218d20: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x218d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218d24: 0xc084612  jal         func_211848
    ctx->pc = 0x218D24u;
    SET_GPR_U32(ctx, 31, 0x218D2Cu);
    ctx->pc = 0x218D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D24u;
            // 0x218d28: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D2Cu; }
        if (ctx->pc != 0x218D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D2Cu; }
        if (ctx->pc != 0x218D2Cu) { return; }
    }
    ctx->pc = 0x218D2Cu;
label_218d2c:
    // 0x218d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d38: 0xc084612  jal         func_211848
    ctx->pc = 0x218D38u;
    SET_GPR_U32(ctx, 31, 0x218D40u);
    ctx->pc = 0x218D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D38u;
            // 0x218d3c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D40u; }
        if (ctx->pc != 0x218D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D40u; }
        if (ctx->pc != 0x218D40u) { return; }
    }
    ctx->pc = 0x218D40u;
label_218d40:
    // 0x218d40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d4c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x218D4Cu;
    SET_GPR_U32(ctx, 31, 0x218D54u);
    ctx->pc = 0x218D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D4Cu;
            // 0x218d50: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D54u; }
        if (ctx->pc != 0x218D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D54u; }
        if (ctx->pc != 0x218D54u) { return; }
    }
    ctx->pc = 0x218D54u;
label_218d54:
    // 0x218d54: 0xc0862fa  jal         func_218BE8
    ctx->pc = 0x218D54u;
    SET_GPR_U32(ctx, 31, 0x218D5Cu);
    ctx->pc = 0x218D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D54u;
            // 0x218d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218BE8u;
    goto label_218be8;
    ctx->pc = 0x218D5Cu;
label_218d5c:
    // 0x218d5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x218d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x218d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218d64: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x218d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x218d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218d6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218d70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218d74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218d78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x218D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218D7Cu;
            // 0x218d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218D84u;
    // 0x218d84: 0x0  nop
    ctx->pc = 0x218d84u;
    // NOP
    ctx->pc = 0x218d88u;
}

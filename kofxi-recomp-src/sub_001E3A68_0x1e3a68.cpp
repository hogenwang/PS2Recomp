#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3A68
// Address: 0x1e3a68 - 0x1e3b90
void sub_001E3A68_0x1e3a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3A68_0x1e3a68");
#endif

    switch (ctx->pc) {
        case 0x1e3a90u: goto label_1e3a90;
        case 0x1e3aa0u: goto label_1e3aa0;
        case 0x1e3aacu: goto label_1e3aac;
        case 0x1e3abcu: goto label_1e3abc;
        case 0x1e3ac8u: goto label_1e3ac8;
        case 0x1e3ae4u: goto label_1e3ae4;
        case 0x1e3af4u: goto label_1e3af4;
        case 0x1e3b44u: goto label_1e3b44;
        case 0x1e3b70u: goto label_1e3b70;
        default: break;
    }

    ctx->pc = 0x1e3a68u;

    // 0x1e3a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3a70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e3a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e3a78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e3a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e3a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e3a80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e3a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e3a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e3a88: 0xc078f20  jal         func_1E3C80
    ctx->pc = 0x1E3A88u;
    SET_GPR_U32(ctx, 31, 0x1E3A90u);
    ctx->pc = 0x1E3A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A88u;
            // 0x1e3a8c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C80u;
    if (runtime->hasFunction(0x1E3C80u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A90u; }
        if (ctx->pc != 0x1E3A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C80_0x1e3c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A90u; }
        if (ctx->pc != 0x1E3A90u) { return; }
    }
    ctx->pc = 0x1E3A90u;
label_1e3a90:
    // 0x1e3a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e3a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e3a98: 0xc078f38  jal         func_1E3CE0
    ctx->pc = 0x1E3A98u;
    SET_GPR_U32(ctx, 31, 0x1E3AA0u);
    ctx->pc = 0x1E3A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A98u;
            // 0x1e3a9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3CE0u;
    if (runtime->hasFunction(0x1E3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AA0u; }
        if (ctx->pc != 0x1E3AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3CE0_0x1e3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AA0u; }
        if (ctx->pc != 0x1E3AA0u) { return; }
    }
    ctx->pc = 0x1E3AA0u;
label_1e3aa0:
    // 0x1e3aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3aa4: 0xc078f6c  jal         func_1E3DB0
    ctx->pc = 0x1E3AA4u;
    SET_GPR_U32(ctx, 31, 0x1E3AACu);
    ctx->pc = 0x1E3AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AA4u;
            // 0x1e3aa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3DB0u;
    if (runtime->hasFunction(0x1E3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AACu; }
        if (ctx->pc != 0x1E3AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3DB0_0x1e3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AACu; }
        if (ctx->pc != 0x1E3AACu) { return; }
    }
    ctx->pc = 0x1E3AACu;
label_1e3aac:
    // 0x1e3aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e3aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ab0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e3ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ab4: 0xc078f74  jal         func_1E3DD0
    ctx->pc = 0x1E3AB4u;
    SET_GPR_U32(ctx, 31, 0x1E3ABCu);
    ctx->pc = 0x1E3AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AB4u;
            // 0x1e3ab8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3DD0u;
    if (runtime->hasFunction(0x1E3DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E3DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3ABCu; }
        if (ctx->pc != 0x1E3ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3DD0_0x1e3dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3ABCu; }
        if (ctx->pc != 0x1E3ABCu) { return; }
    }
    ctx->pc = 0x1E3ABCu;
label_1e3abc:
    // 0x1e3abc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e3abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ac0: 0xc078f86  jal         func_1E3E18
    ctx->pc = 0x1E3AC0u;
    SET_GPR_U32(ctx, 31, 0x1E3AC8u);
    ctx->pc = 0x1E3AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AC0u;
            // 0x1e3ac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E18u;
    if (runtime->hasFunction(0x1E3E18u)) {
        auto targetFn = runtime->lookupFunction(0x1E3E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AC8u; }
        if (ctx->pc != 0x1E3AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3E18_0x1e3e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AC8u; }
        if (ctx->pc != 0x1E3AC8u) { return; }
    }
    ctx->pc = 0x1E3AC8u;
label_1e3ac8:
    // 0x1e3ac8: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x1e3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1e3acc: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1e3accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1e3ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e3ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ad4: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1e3ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1e3ad8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3adc: 0xc078ee4  jal         func_1E3B90
    ctx->pc = 0x1E3ADCu;
    SET_GPR_U32(ctx, 31, 0x1E3AE4u);
    ctx->pc = 0x1E3AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3ADCu;
            // 0x1e3ae0: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B90u;
    if (runtime->hasFunction(0x1E3B90u)) {
        auto targetFn = runtime->lookupFunction(0x1E3B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AE4u; }
        if (ctx->pc != 0x1E3AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3B90_0x1e3b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AE4u; }
        if (ctx->pc != 0x1E3AE4u) { return; }
    }
    ctx->pc = 0x1E3AE4u;
label_1e3ae4:
    // 0x1e3ae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e3ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ae8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1e3ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x1e3aec: 0xc078f0c  jal         func_1E3C30
    ctx->pc = 0x1E3AECu;
    SET_GPR_U32(ctx, 31, 0x1E3AF4u);
    ctx->pc = 0x1E3AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AECu;
            // 0x1e3af0: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C30u;
    if (runtime->hasFunction(0x1E3C30u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AF4u; }
        if (ctx->pc != 0x1E3AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C30_0x1e3c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AF4u; }
        if (ctx->pc != 0x1E3AF4u) { return; }
    }
    ctx->pc = 0x1E3AF4u;
label_1e3af4:
    // 0x1e3af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e3af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3af8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1e3af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x1e3afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e3b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3b08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e3b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3b0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e3b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e3b10: 0x8078ec6  j           func_1E3B18
    ctx->pc = 0x1E3B10u;
    ctx->pc = 0x1E3B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B10u;
            // 0x1e3b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B18u;
    goto label_1e3b18;
    ctx->pc = 0x1E3B18u;
label_1e3b18:
    // 0x1e3b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3b1c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e3b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e3b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e3b2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3b30: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1e3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1e3b34: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1E3B34u;
    {
        const bool branch_taken_0x1e3b34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b34) {
            ctx->pc = 0x1E3B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B34u;
            // 0x1e3b38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3B68u;
            goto label_1e3b68;
        }
    }
    ctx->pc = 0x1E3B3Cu;
    // 0x1e3b3c: 0xc078f0c  jal         func_1E3C30
    ctx->pc = 0x1E3B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E3B44u);
    ctx->pc = 0x1E3B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B3Cu;
            // 0x1e3b40: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C30u;
    if (runtime->hasFunction(0x1E3C30u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B44u; }
        if (ctx->pc != 0x1E3B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C30_0x1e3c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B44u; }
        if (ctx->pc != 0x1E3B44u) { return; }
    }
    ctx->pc = 0x1E3B44u;
label_1e3b44:
    // 0x1e3b44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e3b44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3b4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3B4Cu;
    {
        const bool branch_taken_0x1e3b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B4Cu;
            // 0x1e3b50: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b4c) {
            ctx->pc = 0x1E3B60u;
            goto label_1e3b60;
        }
    }
    ctx->pc = 0x1E3B54u;
    // 0x1e3b54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3B54u;
    {
        const bool branch_taken_0x1e3b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B54u;
            // 0x1e3b58: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b54) {
            ctx->pc = 0x1E3B64u;
            goto label_1e3b64;
        }
    }
    ctx->pc = 0x1E3B5Cu;
    // 0x1e3b5c: 0x0  nop
    ctx->pc = 0x1e3b5cu;
    // NOP
label_1e3b60:
    // 0x1e3b60: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1e3b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1e3b64:
    // 0x1e3b64: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x1e3b64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1e3b68:
    // 0x1e3b68: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E3B68u;
    SET_GPR_U32(ctx, 31, 0x1E3B70u);
    ctx->pc = 0x1E3B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B68u;
            // 0x1e3b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B70u; }
        if (ctx->pc != 0x1E3B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B70u; }
        if (ctx->pc != 0x1E3B70u) { return; }
    }
    ctx->pc = 0x1E3B70u;
label_1e3b70:
    // 0x1e3b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3b78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e3b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3b84: 0x8080666  j           func_201998
    ctx->pc = 0x1E3B84u;
    ctx->pc = 0x1E3B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B84u;
            // 0x1e3b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201998u;
    {
        auto targetFn = runtime->lookupFunction(0x201998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E3B8Cu;
    // 0x1e3b8c: 0x0  nop
    ctx->pc = 0x1e3b8cu;
    // NOP
    ctx->pc = 0x1e3b90u;
}

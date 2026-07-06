#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0B60
// Address: 0x1e0b60 - 0x1e0ca0
void sub_001E0B60_0x1e0b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0B60_0x1e0b60");
#endif

    switch (ctx->pc) {
        case 0x1e0b80u: goto label_1e0b80;
        case 0x1e0bb0u: goto label_1e0bb0;
        case 0x1e0bc8u: goto label_1e0bc8;
        case 0x1e0be4u: goto label_1e0be4;
        case 0x1e0becu: goto label_1e0bec;
        case 0x1e0bf8u: goto label_1e0bf8;
        case 0x1e0c00u: goto label_1e0c00;
        case 0x1e0c08u: goto label_1e0c08;
        case 0x1e0c10u: goto label_1e0c10;
        case 0x1e0c18u: goto label_1e0c18;
        case 0x1e0c20u: goto label_1e0c20;
        case 0x1e0c28u: goto label_1e0c28;
        case 0x1e0c30u: goto label_1e0c30;
        case 0x1e0c38u: goto label_1e0c38;
        case 0x1e0c40u: goto label_1e0c40;
        case 0x1e0c48u: goto label_1e0c48;
        case 0x1e0c50u: goto label_1e0c50;
        case 0x1e0c58u: goto label_1e0c58;
        case 0x1e0c60u: goto label_1e0c60;
        case 0x1e0c80u: goto label_1e0c80;
        default: break;
    }

    ctx->pc = 0x1e0b60u;

    // 0x1e0b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0b68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0b6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e0b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e0b70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e0b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e0b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0b78: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E0B78u;
    SET_GPR_U32(ctx, 31, 0x1E0B80u);
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B80u; }
        if (ctx->pc != 0x1E0B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B80u; }
        if (ctx->pc != 0x1E0B80u) { return; }
    }
    ctx->pc = 0x1E0B80u;
label_1e0b80:
    // 0x1e0b80: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e0b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b88: 0x2463ec10  addiu       $v1, $v1, -0x13F0
    ctx->pc = 0x1e0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962192));
    // 0x1e0b8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0b90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e0b94: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E0B94u;
    {
        const bool branch_taken_0x1e0b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B94u;
            // 0x1e0b98: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b94) {
            ctx->pc = 0x1E0C80u;
            goto label_1e0c80;
        }
    }
    ctx->pc = 0x1E0B9Cu;
    // 0x1e0b9c: 0x2490006c  addiu       $s0, $a0, 0x6C
    ctx->pc = 0x1e0b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
    // 0x1e0ba0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e0ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ba4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0ba8: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1e0ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e0bac: 0x0  nop
    ctx->pc = 0x1e0bacu;
    // NOP
label_1e0bb0:
    // 0x1e0bb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0bb4: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0BB4u;
    {
        const bool branch_taken_0x1e0bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e0bb4) {
            ctx->pc = 0x1E0BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BB4u;
            // 0x1e0bb8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0BBCu;
    // 0x1e0bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bc0: 0xc0779e8  jal         func_1DE7A0
    ctx->pc = 0x1E0BC0u;
    SET_GPR_U32(ctx, 31, 0x1E0BC8u);
    ctx->pc = 0x1E0BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BC0u;
            // 0x1e0bc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE7A0u;
    if (runtime->hasFunction(0x1DE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BC8u; }
        if (ctx->pc != 0x1E0BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE7A0_0x1de7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BC8u; }
        if (ctx->pc != 0x1E0BC8u) { return; }
    }
    ctx->pc = 0x1E0BC8u;
label_1e0bc8:
    // 0x1e0bc8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e0bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1e0bcc:
    // 0x1e0bcc: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E0BCCu;
    {
        const bool branch_taken_0x1e0bcc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1E0BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BCCu;
            // 0x1e0bd0: 0x2610050c  addiu       $s0, $s0, 0x50C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bcc) {
            ctx->pc = 0x1E0BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e0bb0;
        }
    }
    ctx->pc = 0x1E0BD4u;
    // 0x1e0bd4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0BD4u;
    {
        const bool branch_taken_0x1e0bd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BD4u;
            // 0x1e0bd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bd4) {
            ctx->pc = 0x1E0BF8u;
            goto label_1e0bf8;
        }
    }
    ctx->pc = 0x1E0BDCu;
    // 0x1e0bdc: 0xc079e40  jal         func_1E7900
    ctx->pc = 0x1E0BDCu;
    SET_GPR_U32(ctx, 31, 0x1E0BE4u);
    ctx->pc = 0x1E0BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BDCu;
            // 0x1e0be0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7900u;
    if (runtime->hasFunction(0x1E7900u)) {
        auto targetFn = runtime->lookupFunction(0x1E7900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BE4u; }
        if (ctx->pc != 0x1E0BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7900_0x1e7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BE4u; }
        if (ctx->pc != 0x1E0BE4u) { return; }
    }
    ctx->pc = 0x1E0BE4u;
label_1e0be4:
    // 0x1e0be4: 0xc079b20  jal         func_1E6C80
    ctx->pc = 0x1E0BE4u;
    SET_GPR_U32(ctx, 31, 0x1E0BECu);
    ctx->pc = 0x1E6C80u;
    if (runtime->hasFunction(0x1E6C80u)) {
        auto targetFn = runtime->lookupFunction(0x1E6C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BECu; }
        if (ctx->pc != 0x1E0BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6C80_0x1e6c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BECu; }
        if (ctx->pc != 0x1E0BECu) { return; }
    }
    ctx->pc = 0x1E0BECu;
label_1e0bec:
    // 0x1e0bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e0becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bf0: 0xc079e40  jal         func_1E7900
    ctx->pc = 0x1E0BF0u;
    SET_GPR_U32(ctx, 31, 0x1E0BF8u);
    ctx->pc = 0x1E0BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BF0u;
            // 0x1e0bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7900u;
    if (runtime->hasFunction(0x1E7900u)) {
        auto targetFn = runtime->lookupFunction(0x1E7900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BF8u; }
        if (ctx->pc != 0x1E0BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7900_0x1e7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0BF8u; }
        if (ctx->pc != 0x1E0BF8u) { return; }
    }
    ctx->pc = 0x1E0BF8u;
label_1e0bf8:
    // 0x1e0bf8: 0xc079aa6  jal         func_1E6A98
    ctx->pc = 0x1E0BF8u;
    SET_GPR_U32(ctx, 31, 0x1E0C00u);
    ctx->pc = 0x1E6A98u;
    if (runtime->hasFunction(0x1E6A98u)) {
        auto targetFn = runtime->lookupFunction(0x1E6A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C00u; }
        if (ctx->pc != 0x1E0C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6A98_0x1e6a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C00u; }
        if (ctx->pc != 0x1E0C00u) { return; }
    }
    ctx->pc = 0x1E0C00u;
label_1e0c00:
    // 0x1e0c00: 0xc079a66  jal         func_1E6998
    ctx->pc = 0x1E0C00u;
    SET_GPR_U32(ctx, 31, 0x1E0C08u);
    ctx->pc = 0x1E6998u;
    if (runtime->hasFunction(0x1E6998u)) {
        auto targetFn = runtime->lookupFunction(0x1E6998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C08u; }
        if (ctx->pc != 0x1E0C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6998_0x1e6998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C08u; }
        if (ctx->pc != 0x1E0C08u) { return; }
    }
    ctx->pc = 0x1E0C08u;
label_1e0c08:
    // 0x1e0c08: 0xc079a92  jal         func_1E6A48
    ctx->pc = 0x1E0C08u;
    SET_GPR_U32(ctx, 31, 0x1E0C10u);
    ctx->pc = 0x1E6A48u;
    if (runtime->hasFunction(0x1E6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1E6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C10u; }
        if (ctx->pc != 0x1E0C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6A48_0x1e6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C10u; }
        if (ctx->pc != 0x1E0C10u) { return; }
    }
    ctx->pc = 0x1E0C10u;
label_1e0c10:
    // 0x1e0c10: 0xc079a7c  jal         func_1E69F0
    ctx->pc = 0x1E0C10u;
    SET_GPR_U32(ctx, 31, 0x1E0C18u);
    ctx->pc = 0x1E69F0u;
    if (runtime->hasFunction(0x1E69F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E69F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C18u; }
        if (ctx->pc != 0x1E0C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E69F0_0x1e69f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C18u; }
        if (ctx->pc != 0x1E0C18u) { return; }
    }
    ctx->pc = 0x1E0C18u;
label_1e0c18:
    // 0x1e0c18: 0xc078e7c  jal         func_1E39F0
    ctx->pc = 0x1E0C18u;
    SET_GPR_U32(ctx, 31, 0x1E0C20u);
    ctx->pc = 0x1E39F0u;
    if (runtime->hasFunction(0x1E39F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E39F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C20u; }
        if (ctx->pc != 0x1E0C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E39F0_0x1e39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C20u; }
        if (ctx->pc != 0x1E0C20u) { return; }
    }
    ctx->pc = 0x1E0C20u;
label_1e0c20:
    // 0x1e0c20: 0xc071b10  jal         func_1C6C40
    ctx->pc = 0x1E0C20u;
    SET_GPR_U32(ctx, 31, 0x1E0C28u);
    ctx->pc = 0x1C6C40u;
    if (runtime->hasFunction(0x1C6C40u)) {
        auto targetFn = runtime->lookupFunction(0x1C6C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C28u; }
        if (ctx->pc != 0x1E0C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6C40_0x1c6c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C28u; }
        if (ctx->pc != 0x1E0C28u) { return; }
    }
    ctx->pc = 0x1E0C28u;
label_1e0c28:
    // 0x1e0c28: 0xc078366  jal         func_1E0D98
    ctx->pc = 0x1E0C28u;
    SET_GPR_U32(ctx, 31, 0x1E0C30u);
    ctx->pc = 0x1E0D98u;
    if (runtime->hasFunction(0x1E0D98u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C30u; }
        if (ctx->pc != 0x1E0C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D98_0x1e0d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C30u; }
        if (ctx->pc != 0x1E0C30u) { return; }
    }
    ctx->pc = 0x1E0C30u;
label_1e0c30:
    // 0x1e0c30: 0xc06c7ae  jal         func_1B1EB8
    ctx->pc = 0x1E0C30u;
    SET_GPR_U32(ctx, 31, 0x1E0C38u);
    ctx->pc = 0x1B1EB8u;
    if (runtime->hasFunction(0x1B1EB8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C38u; }
        if (ctx->pc != 0x1E0C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1EB8_0x1b1eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C38u; }
        if (ctx->pc != 0x1E0C38u) { return; }
    }
    ctx->pc = 0x1E0C38u;
label_1e0c38:
    // 0x1e0c38: 0xc079eee  jal         func_1E7BB8
    ctx->pc = 0x1E0C38u;
    SET_GPR_U32(ctx, 31, 0x1E0C40u);
    ctx->pc = 0x1E7BB8u;
    if (runtime->hasFunction(0x1E7BB8u)) {
        auto targetFn = runtime->lookupFunction(0x1E7BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C40u; }
        if (ctx->pc != 0x1E0C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7BB8_0x1e7bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C40u; }
        if (ctx->pc != 0x1E0C40u) { return; }
    }
    ctx->pc = 0x1E0C40u;
label_1e0c40:
    // 0x1e0c40: 0xc073038  jal         func_1CC0E0
    ctx->pc = 0x1E0C40u;
    SET_GPR_U32(ctx, 31, 0x1E0C48u);
    ctx->pc = 0x1CC0E0u;
    if (runtime->hasFunction(0x1CC0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C48u; }
        if (ctx->pc != 0x1E0C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC0E0_0x1cc0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C48u; }
        if (ctx->pc != 0x1E0C48u) { return; }
    }
    ctx->pc = 0x1E0C48u;
label_1e0c48:
    // 0x1e0c48: 0xc072a46  jal         func_1CA918
    ctx->pc = 0x1E0C48u;
    SET_GPR_U32(ctx, 31, 0x1E0C50u);
    ctx->pc = 0x1CA918u;
    if (runtime->hasFunction(0x1CA918u)) {
        auto targetFn = runtime->lookupFunction(0x1CA918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C50u; }
        if (ctx->pc != 0x1E0C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA918_0x1ca918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C50u; }
        if (ctx->pc != 0x1E0C50u) { return; }
    }
    ctx->pc = 0x1E0C50u;
label_1e0c50:
    // 0x1e0c50: 0xc072ccc  jal         func_1CB330
    ctx->pc = 0x1E0C50u;
    SET_GPR_U32(ctx, 31, 0x1E0C58u);
    ctx->pc = 0x1CB330u;
    if (runtime->hasFunction(0x1CB330u)) {
        auto targetFn = runtime->lookupFunction(0x1CB330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C58u; }
        if (ctx->pc != 0x1E0C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB330_0x1cb330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C58u; }
        if (ctx->pc != 0x1E0C58u) { return; }
    }
    ctx->pc = 0x1E0C58u;
label_1e0c58:
    // 0x1e0c58: 0xc07879a  jal         func_1E1E68
    ctx->pc = 0x1E0C58u;
    SET_GPR_U32(ctx, 31, 0x1E0C60u);
    ctx->pc = 0x1E1E68u;
    if (runtime->hasFunction(0x1E1E68u)) {
        auto targetFn = runtime->lookupFunction(0x1E1E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C60u; }
        if (ctx->pc != 0x1E0C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1E68_0x1e1e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C60u; }
        if (ctx->pc != 0x1E0C60u) { return; }
    }
    ctx->pc = 0x1E0C60u;
label_1e0c60:
    // 0x1e0c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0c68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0c6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e0c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0c74: 0x8079a2a  j           func_1E68A8
    ctx->pc = 0x1E0C74u;
    ctx->pc = 0x1E0C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C74u;
            // 0x1e0c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E68A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1E68A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E0C7Cu;
    // 0x1e0c7c: 0x0  nop
    ctx->pc = 0x1e0c7cu;
    // NOP
label_1e0c80:
    // 0x1e0c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0c88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0c8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e0c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0c90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C94u;
            // 0x1e0c98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0C9Cu;
    // 0x1e0c9c: 0x0  nop
    ctx->pc = 0x1e0c9cu;
    // NOP
    ctx->pc = 0x1e0ca0u;
}

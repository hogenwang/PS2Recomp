#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00236B50
// Address: 0x236b50 - 0x236d60
void sub_00236B50_0x236b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236B50_0x236b50");
#endif

    switch (ctx->pc) {
        case 0x236b74u: goto label_236b74;
        case 0x236b8cu: goto label_236b8c;
        case 0x236ba0u: goto label_236ba0;
        case 0x236ba8u: goto label_236ba8;
        case 0x236bbcu: goto label_236bbc;
        case 0x236bd4u: goto label_236bd4;
        case 0x236bfcu: goto label_236bfc;
        case 0x236c0cu: goto label_236c0c;
        case 0x236c3cu: goto label_236c3c;
        case 0x236c50u: goto label_236c50;
        case 0x236c70u: goto label_236c70;
        case 0x236cd0u: goto label_236cd0;
        case 0x236ce4u: goto label_236ce4;
        case 0x236d10u: goto label_236d10;
        case 0x236d24u: goto label_236d24;
        default: break;
    }

    ctx->pc = 0x236b50u;

    // 0x236b50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x236b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x236b54: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x236b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x236b58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x236b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x236b5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x236b5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b60: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x236b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x236b64: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x236b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x236b68: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x236b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x236b6c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x236B6Cu;
    SET_GPR_U32(ctx, 31, 0x236B74u);
    ctx->pc = 0x236B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236B6Cu;
            // 0x236b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B74u; }
        if (ctx->pc != 0x236B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B74u; }
        if (ctx->pc != 0x236B74u) { return; }
    }
    ctx->pc = 0x236B74u;
label_236b74:
    // 0x236b74: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x236b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x236b78: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x236b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x236b7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x236b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x236b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b84: 0xc08da36  jal         func_2368D8
    ctx->pc = 0x236B84u;
    SET_GPR_U32(ctx, 31, 0x236B8Cu);
    ctx->pc = 0x236B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236B84u;
            // 0x236b88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2368D8u;
    if (runtime->hasFunction(0x2368D8u)) {
        auto targetFn = runtime->lookupFunction(0x2368D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B8Cu; }
        if (ctx->pc != 0x236B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002368D8_0x2368d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B8Cu; }
        if (ctx->pc != 0x236B8Cu) { return; }
    }
    ctx->pc = 0x236B8Cu;
label_236b8c:
    // 0x236b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b90: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x236B90u;
    {
        const bool branch_taken_0x236b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x236b90) {
            ctx->pc = 0x236B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236B90u;
            // 0x236b94: 0x8e700100  lw          $s0, 0x100($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236BA8u;
            goto label_236ba8;
        }
    }
    ctx->pc = 0x236B98u;
    // 0x236b98: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236B98u;
    SET_GPR_U32(ctx, 31, 0x236BA0u);
    ctx->pc = 0x236B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236B98u;
            // 0x236b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236BA0u; }
        if (ctx->pc != 0x236BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236BA0u; }
        if (ctx->pc != 0x236BA0u) { return; }
    }
    ctx->pc = 0x236BA0u;
label_236ba0:
    // 0x236ba0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x236BA0u;
    {
        const bool branch_taken_0x236ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236BA0u;
            // 0x236ba4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ba0) {
            ctx->pc = 0x236C54u;
            goto label_236c54;
        }
    }
    ctx->pc = 0x236BA8u;
label_236ba8:
    // 0x236ba8: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x236BA8u;
    {
        const bool branch_taken_0x236ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236BA8u;
            // 0x236bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ba8) {
            ctx->pc = 0x236BF4u;
            goto label_236bf4;
        }
    }
    ctx->pc = 0x236BB0u;
    // 0x236bb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x236bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bb4: 0xc048c5e  jal         func_123178
    ctx->pc = 0x236BB4u;
    SET_GPR_U32(ctx, 31, 0x236BBCu);
    ctx->pc = 0x236BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236BB4u;
            // 0x236bb8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236BBCu; }
        if (ctx->pc != 0x236BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236BBCu; }
        if (ctx->pc != 0x236BBCu) { return; }
    }
    ctx->pc = 0x236BBCu;
label_236bbc:
    // 0x236bbc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x236BBCu;
    {
        const bool branch_taken_0x236bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236bbc) {
            ctx->pc = 0x236BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236BBCu;
            // 0x236bc0: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236ba8;
        }
    }
    ctx->pc = 0x236BC4u;
    // 0x236bc4: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x236bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x236bc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bcc: 0xc048c5e  jal         func_123178
    ctx->pc = 0x236BCCu;
    SET_GPR_U32(ctx, 31, 0x236BD4u);
    ctx->pc = 0x236BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236BCCu;
            // 0x236bd0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236BD4u; }
        if (ctx->pc != 0x236BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236BD4u; }
        if (ctx->pc != 0x236BD4u) { return; }
    }
    ctx->pc = 0x236BD4u;
label_236bd4:
    // 0x236bd4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x236BD4u;
    {
        const bool branch_taken_0x236bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236bd4) {
            ctx->pc = 0x236BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236BD4u;
            // 0x236bd8: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236ba8;
        }
    }
    ctx->pc = 0x236BDCu;
    // 0x236bdc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x236bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x236be0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x236be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x236be4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x236BE4u;
    {
        const bool branch_taken_0x236be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236BE4u;
            // 0x236be8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236be4) {
            ctx->pc = 0x236C14u;
            goto label_236c14;
        }
    }
    ctx->pc = 0x236BECu;
    // 0x236bec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x236BECu;
    {
        const bool branch_taken_0x236bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236bec) {
            ctx->pc = 0x236C04u;
            goto label_236c04;
        }
    }
    ctx->pc = 0x236BF4u;
label_236bf4:
    // 0x236bf4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236BF4u;
    SET_GPR_U32(ctx, 31, 0x236BFCu);
    ctx->pc = 0x236BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236BF4u;
            // 0x236bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236BFCu; }
        if (ctx->pc != 0x236BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236BFCu; }
        if (ctx->pc != 0x236BFCu) { return; }
    }
    ctx->pc = 0x236BFCu;
label_236bfc:
    // 0x236bfc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x236BFCu;
    {
        const bool branch_taken_0x236bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236BFCu;
            // 0x236c00: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bfc) {
            ctx->pc = 0x236C54u;
            goto label_236c54;
        }
    }
    ctx->pc = 0x236C04u;
label_236c04:
    // 0x236c04: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236C04u;
    SET_GPR_U32(ctx, 31, 0x236C0Cu);
    ctx->pc = 0x236C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236C04u;
            // 0x236c08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C0Cu; }
        if (ctx->pc != 0x236C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C0Cu; }
        if (ctx->pc != 0x236C0Cu) { return; }
    }
    ctx->pc = 0x236C0Cu;
label_236c0c:
    // 0x236c0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x236C0Cu;
    {
        const bool branch_taken_0x236c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C0Cu;
            // 0x236c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c0c) {
            ctx->pc = 0x236C54u;
            goto label_236c54;
        }
    }
    ctx->pc = 0x236C14u;
label_236c14:
    // 0x236c14: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x236c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x236c18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x236C18u;
    {
        const bool branch_taken_0x236c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C18u;
            // 0x236c1c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c18) {
            ctx->pc = 0x236C30u;
            goto label_236c30;
        }
    }
    ctx->pc = 0x236C20u;
    // 0x236c20: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x236c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x236c24: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x236c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x236c28: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x236c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x236c2c: 0x0  nop
    ctx->pc = 0x236c2cu;
    // NOP
label_236c30:
    // 0x236c30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x236c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x236c34: 0xc098560  jal         func_261580
    ctx->pc = 0x236C34u;
    SET_GPR_U32(ctx, 31, 0x236C3Cu);
    ctx->pc = 0x236C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236C34u;
            // 0x236c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C3Cu; }
        if (ctx->pc != 0x236C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C3Cu; }
        if (ctx->pc != 0x236C3Cu) { return; }
    }
    ctx->pc = 0x236C3Cu;
label_236c3c:
    // 0x236c3c: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x236c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x236c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x236c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x236c48: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236C48u;
    SET_GPR_U32(ctx, 31, 0x236C50u);
    ctx->pc = 0x236C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236C48u;
            // 0x236c4c: 0xae620104  sw          $v0, 0x104($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C50u; }
        if (ctx->pc != 0x236C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C50u; }
        if (ctx->pc != 0x236C50u) { return; }
    }
    ctx->pc = 0x236C50u;
label_236c50:
    // 0x236c50: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x236c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_236c54:
    // 0x236c54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x236c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x236c58: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x236c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236c5c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x236c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236c60: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x236c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236c64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x236c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236c68: 0x3e00008  jr          $ra
    ctx->pc = 0x236C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236C68u;
            // 0x236c6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236C70u;
label_236c70:
    // 0x236c70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x236c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x236c74: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x236c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x236c78: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x236c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
    // 0x236c7c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x236c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x236c80: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x236c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x236c84: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x236c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x236c88: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x236c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x236c8c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x236c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x236c90: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x236c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x236c94: 0x247e6f68  addiu       $fp, $v1, 0x6F68
    ctx->pc = 0x236c94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 28520));
    // 0x236c98: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x236c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x236c9c: 0x24976d60  addiu       $s7, $a0, 0x6D60
    ctx->pc = 0x236c9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 28000));
    // 0x236ca0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x236ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x236ca4: 0x3c16003f  lui         $s6, 0x3F
    ctx->pc = 0x236ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
    // 0x236ca8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x236ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x236cac: 0x341581cc  ori         $s5, $zero, 0x81CC
    ctx->pc = 0x236cacu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33228);
    // 0x236cb0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x236cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x236cb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x236cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236cbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x236cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cc0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x236cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x236cc4: 0x24148008  addiu       $s4, $zero, -0x7FF8
    ctx->pc = 0x236cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934536));
    // 0x236cc8: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x236cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x236ccc: 0x24500014  addiu       $s0, $v0, 0x14
    ctx->pc = 0x236cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_236cd0:
    // 0x236cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x236cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cd8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x236cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x236cdc: 0xc043e24  jal         func_10F890
    ctx->pc = 0x236CDCu;
    SET_GPR_U32(ctx, 31, 0x236CE4u);
    ctx->pc = 0x236CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236CDCu;
            // 0x236ce0: 0x26c64b88  addiu       $a2, $s6, 0x4B88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 19336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236CE4u; }
        if (ctx->pc != 0x236CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236CE4u; }
        if (ctx->pc != 0x236CE4u) { return; }
    }
    ctx->pc = 0x236CE4u;
label_236ce4:
    // 0x236ce4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x236ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x236ce8: 0xae00ffec  sw          $zero, -0x14($s0)
    ctx->pc = 0x236ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 0));
    // 0x236cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cf0: 0xfe15002c  sd          $s5, 0x2C($s0)
    ctx->pc = 0x236cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 44), GPR_U64(ctx, 21));
    // 0x236cf4: 0xa614001c  sh          $s4, 0x1C($s0)
    ctx->pc = 0x236cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 20));
    // 0x236cf8: 0xae1e00b8  sw          $fp, 0xB8($s0)
    ctx->pc = 0x236cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 30));
    // 0x236cfc: 0xae1700ac  sw          $s7, 0xAC($s0)
    ctx->pc = 0x236cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 23));
    // 0x236d00: 0xa2130024  sb          $s3, 0x24($s0)
    ctx->pc = 0x236d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 19));
    // 0x236d04: 0xa2000026  sb          $zero, 0x26($s0)
    ctx->pc = 0x236d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x236d08: 0xc08d10e  jal         func_234438
    ctx->pc = 0x236D08u;
    SET_GPR_U32(ctx, 31, 0x236D10u);
    ctx->pc = 0x236D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236D08u;
            // 0x236d0c: 0xa2000025  sb          $zero, 0x25($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234438u;
    if (runtime->hasFunction(0x234438u)) {
        auto targetFn = runtime->lookupFunction(0x234438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D10u; }
        if (ctx->pc != 0x236D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234438_0x234438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D10u; }
        if (ctx->pc != 0x236D10u) { return; }
    }
    ctx->pc = 0x236D10u;
label_236d10:
    // 0x236d10: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x236d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x236d14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x236d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d1c: 0xc08ce36  jal         func_2338D8
    ctx->pc = 0x236D1Cu;
    SET_GPR_U32(ctx, 31, 0x236D24u);
    ctx->pc = 0x236D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236D1Cu;
            // 0x236d20: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2338D8u;
    if (runtime->hasFunction(0x2338D8u)) {
        auto targetFn = runtime->lookupFunction(0x2338D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D24u; }
        if (ctx->pc != 0x236D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002338D8_0x2338d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236D24u; }
        if (ctx->pc != 0x236D24u) { return; }
    }
    ctx->pc = 0x236D24u;
label_236d24:
    // 0x236d24: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x236d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x236d28: 0x1a20ffe9  blez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x236D28u;
    {
        const bool branch_taken_0x236d28 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x236D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D28u;
            // 0x236d2c: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d28) {
            ctx->pc = 0x236CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236cd0;
        }
    }
    ctx->pc = 0x236D30u;
    // 0x236d30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x236d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x236d34: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x236d34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x236d38: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x236d38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x236d3c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x236d3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x236d40: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x236d40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236d44: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x236d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236d48: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x236d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236d4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236d4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236d50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x236d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236d58: 0x3e00008  jr          $ra
    ctx->pc = 0x236D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236D58u;
            // 0x236d5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236D60u;
    ctx->pc = 0x236d60u;
}

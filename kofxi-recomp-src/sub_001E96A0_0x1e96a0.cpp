#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E96A0
// Address: 0x1e96a0 - 0x1e97b8
void sub_001E96A0_0x1e96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E96A0_0x1e96a0");
#endif

    switch (ctx->pc) {
        case 0x1e96b4u: goto label_1e96b4;
        case 0x1e96c8u: goto label_1e96c8;
        case 0x1e9724u: goto label_1e9724;
        case 0x1e9738u: goto label_1e9738;
        case 0x1e9748u: goto label_1e9748;
        case 0x1e975cu: goto label_1e975c;
        case 0x1e9774u: goto label_1e9774;
        case 0x1e9794u: goto label_1e9794;
        default: break;
    }

    ctx->pc = 0x1e96a0u;

    // 0x1e96a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e96a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e96a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e96a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e96a8: 0x8c82205c  lw          $v0, 0x205C($a0)
    ctx->pc = 0x1e96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e96ac: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x1E96ACu;
    SET_GPR_U32(ctx, 31, 0x1E96B4u);
    ctx->pc = 0x1E96B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96ACu;
            // 0x1e96b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (runtime->hasFunction(0x1B9280u)) {
        auto targetFn = runtime->lookupFunction(0x1B9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96B4u; }
        if (ctx->pc != 0x1E96B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9280_0x1b9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96B4u; }
        if (ctx->pc != 0x1E96B4u) { return; }
    }
    ctx->pc = 0x1E96B4u;
label_1e96b4:
    // 0x1e96b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e96b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e96b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e96bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E96BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E96C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96BCu;
            // 0x1e96c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E96C4u;
    // 0x1e96c4: 0x0  nop
    ctx->pc = 0x1e96c4u;
    // NOP
label_1e96c8:
    // 0x1e96c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e96c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e96cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e96ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1e96d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1e96d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e96d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e96d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e96dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e96e0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e96e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e96e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e96e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1e96e8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1e96e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1e96ec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1e96ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1e96f0: 0x8e93205c  lw          $s3, 0x205C($s4)
    ctx->pc = 0x1e96f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8284)));
    // 0x1e96f4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E96F4u;
    {
        const bool branch_taken_0x1e96f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E96F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96F4u;
            // 0x1e96f8: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96f4) {
            ctx->pc = 0x1E971Cu;
            goto label_1e971c;
        }
    }
    ctx->pc = 0x1E96FCu;
    // 0x1e96fc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E96FCu;
    {
        const bool branch_taken_0x1e96fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e96fc) {
            ctx->pc = 0x1E9700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96FCu;
            // 0x1e9700: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9718u;
            goto label_1e9718;
        }
    }
    ctx->pc = 0x1E9704u;
    // 0x1e9704: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9708: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9708u;
    {
        const bool branch_taken_0x1e9708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9708u;
            // 0x1e970c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9708) {
            ctx->pc = 0x1E9730u;
            goto label_1e9730;
        }
    }
    ctx->pc = 0x1E9710u;
    // 0x1e9710: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E9710u;
    {
        const bool branch_taken_0x1e9710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9710u;
            // 0x1e9714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9710) {
            ctx->pc = 0x1E979Cu;
            goto label_1e979c;
        }
    }
    ctx->pc = 0x1E9718u;
label_1e9718:
    // 0x1e9718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e971c:
    // 0x1e971c: 0xc07a602  jal         func_1E9808
    ctx->pc = 0x1E971Cu;
    SET_GPR_U32(ctx, 31, 0x1E9724u);
    ctx->pc = 0x1E9808u;
    if (runtime->hasFunction(0x1E9808u)) {
        auto targetFn = runtime->lookupFunction(0x1E9808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9724u; }
        if (ctx->pc != 0x1E9724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9808_0x1e9808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9724u; }
        if (ctx->pc != 0x1E9724u) { return; }
    }
    ctx->pc = 0x1E9724u;
label_1e9724:
    // 0x1e9724: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E9724u;
    {
        const bool branch_taken_0x1e9724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9724u;
            // 0x1e9728: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9724) {
            ctx->pc = 0x1E9798u;
            goto label_1e9798;
        }
    }
    ctx->pc = 0x1E972Cu;
    // 0x1e972c: 0x0  nop
    ctx->pc = 0x1e972cu;
    // NOP
label_1e9730:
    // 0x1e9730: 0xc07a3ea  jal         func_1E8FA8
    ctx->pc = 0x1E9730u;
    SET_GPR_U32(ctx, 31, 0x1E9738u);
    ctx->pc = 0x1E9734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9730u;
            // 0x1e9734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8FA8u;
    if (runtime->hasFunction(0x1E8FA8u)) {
        auto targetFn = runtime->lookupFunction(0x1E8FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9738u; }
        if (ctx->pc != 0x1E9738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8FA8_0x1e8fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9738u; }
        if (ctx->pc != 0x1E9738u) { return; }
    }
    ctx->pc = 0x1E9738u;
label_1e9738:
    // 0x1e9738: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E9738u;
    {
        const bool branch_taken_0x1e9738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9738u;
            // 0x1e973c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9738) {
            ctx->pc = 0x1E9798u;
            goto label_1e9798;
        }
    }
    ctx->pc = 0x1E9740u;
    // 0x1e9740: 0xc06e6d2  jal         func_1B9B48
    ctx->pc = 0x1E9740u;
    SET_GPR_U32(ctx, 31, 0x1E9748u);
    ctx->pc = 0x1E9744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9740u;
            // 0x1e9744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9B48u;
    if (runtime->hasFunction(0x1B9B48u)) {
        auto targetFn = runtime->lookupFunction(0x1B9B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9748u; }
        if (ctx->pc != 0x1E9748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9B48_0x1b9b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9748u; }
        if (ctx->pc != 0x1E9748u) { return; }
    }
    ctx->pc = 0x1E9748u;
label_1e9748:
    // 0x1e9748: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e974c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e974cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9750: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1e9750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9754: 0xc07a624  jal         func_1E9890
    ctx->pc = 0x1E9754u;
    SET_GPR_U32(ctx, 31, 0x1E975Cu);
    ctx->pc = 0x1E9758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9754u;
            // 0x1e9758: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9890u;
    if (runtime->hasFunction(0x1E9890u)) {
        auto targetFn = runtime->lookupFunction(0x1E9890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E975Cu; }
        if (ctx->pc != 0x1E975Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9890_0x1e9890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E975Cu; }
        if (ctx->pc != 0x1E975Cu) { return; }
    }
    ctx->pc = 0x1E975Cu;
label_1e975c:
    // 0x1e975c: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1e975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1e9760: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x1e9760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9768: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e9768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e976c: 0xc06ed00  jal         func_1BB400
    ctx->pc = 0x1E976Cu;
    SET_GPR_U32(ctx, 31, 0x1E9774u);
    ctx->pc = 0x1E9770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E976Cu;
            // 0x1e9770: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB400u;
    if (runtime->hasFunction(0x1BB400u)) {
        auto targetFn = runtime->lookupFunction(0x1BB400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9774u; }
        if (ctx->pc != 0x1E9774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB400_0x1bb400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9774u; }
        if (ctx->pc != 0x1E9774u) { return; }
    }
    ctx->pc = 0x1E9774u;
label_1e9774:
    // 0x1e9774: 0x26841078  addiu       $a0, $s4, 0x1078
    ctx->pc = 0x1e9774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4216));
    // 0x1e9778: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1e9778u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e977c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9780: 0xae700030  sw          $s0, 0x30($s3)
    ctx->pc = 0x1e9780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 16));
    // 0x1e9784: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9788: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e9788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e978c: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1E978Cu;
    SET_GPR_U32(ctx, 31, 0x1E9794u);
    ctx->pc = 0x1E9790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E978Cu;
            // 0x1e9790: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (runtime->hasFunction(0x1FDC00u)) {
        auto targetFn = runtime->lookupFunction(0x1FDC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9794u; }
        if (ctx->pc != 0x1E9794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDC00_0x1fdc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9794u; }
        if (ctx->pc != 0x1E9794u) { return; }
    }
    ctx->pc = 0x1E9794u;
label_1e9794:
    // 0x1e9794: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e9794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9798:
    // 0x1e9798: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e979c:
    // 0x1e979c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e979cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e97a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1e97a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e97a4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1e97a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e97a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1e97a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e97ac: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1e97acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e97b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E97B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E97B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97B0u;
            // 0x1e97b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E97B8u;
    ctx->pc = 0x1e97b8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177F70
// Address: 0x177f70 - 0x178040
void sub_00177F70_0x177f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177F70_0x177f70");
#endif

    switch (ctx->pc) {
        case 0x177f84u: goto label_177f84;
        case 0x177f8cu: goto label_177f8c;
        case 0x177f98u: goto label_177f98;
        case 0x177fa4u: goto label_177fa4;
        case 0x177fc4u: goto label_177fc4;
        case 0x177fecu: goto label_177fec;
        case 0x17802cu: goto label_17802c;
        default: break;
    }

    ctx->pc = 0x177f70u;

    // 0x177f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177f74: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177f7c: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x177F7Cu;
    SET_GPR_U32(ctx, 31, 0x177F84u);
    ctx->pc = 0x177F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F7Cu;
            // 0x177f80: 0x2484a7a8  addiu       $a0, $a0, -0x5858 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (runtime->hasFunction(0x1769B0u)) {
        auto targetFn = runtime->lookupFunction(0x1769B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F84u; }
        if (ctx->pc != 0x177F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F84u; }
        if (ctx->pc != 0x177F84u) { return; }
    }
    ctx->pc = 0x177F84u;
label_177f84:
    // 0x177f84: 0xc0660e0  jal         func_198380
    ctx->pc = 0x177F84u;
    SET_GPR_U32(ctx, 31, 0x177F8Cu);
    ctx->pc = 0x198380u;
    if (runtime->hasFunction(0x198380u)) {
        auto targetFn = runtime->lookupFunction(0x198380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F8Cu; }
        if (ctx->pc != 0x177F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198380_0x198380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F8Cu; }
        if (ctx->pc != 0x177F8Cu) { return; }
    }
    ctx->pc = 0x177F8Cu;
label_177f8c:
    // 0x177f8c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177f90: 0xc05daac  jal         func_176AB0
    ctx->pc = 0x177F90u;
    SET_GPR_U32(ctx, 31, 0x177F98u);
    ctx->pc = 0x177F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F90u;
            // 0x177f94: 0x8c44af68  lw          $a0, -0x5098($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946664)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176AB0u;
    if (runtime->hasFunction(0x176AB0u)) {
        auto targetFn = runtime->lookupFunction(0x176AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F98u; }
        if (ctx->pc != 0x177F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176AB0_0x176ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F98u; }
        if (ctx->pc != 0x177F98u) { return; }
    }
    ctx->pc = 0x177F98u;
label_177f98:
    // 0x177f98: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177f9c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x177F9Cu;
    SET_GPR_U32(ctx, 31, 0x177FA4u);
    ctx->pc = 0x177FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F9Cu;
            // 0x177fa0: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163D40u;
    if (runtime->hasFunction(0x163D40u)) {
        auto targetFn = runtime->lookupFunction(0x163D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FA4u; }
        if (ctx->pc != 0x177FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00163D40_0x163d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FA4u; }
        if (ctx->pc != 0x177FA4u) { return; }
    }
    ctx->pc = 0x177FA4u;
label_177fa4:
    // 0x177fa4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x177fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x177fa8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x177fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x177fac: 0x24847420  addiu       $a0, $a0, 0x7420
    ctx->pc = 0x177facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29728));
    // 0x177fb0: 0x24a5e6a0  addiu       $a1, $a1, -0x1960
    ctx->pc = 0x177fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    // 0x177fb4: 0x240600fe  addiu       $a2, $zero, 0xFE
    ctx->pc = 0x177fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x177fb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x177fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fbc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x177FBCu;
    SET_GPR_U32(ctx, 31, 0x177FC4u);
    ctx->pc = 0x177FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FBCu;
            // 0x177fc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FC4u; }
        if (ctx->pc != 0x177FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FC4u; }
        if (ctx->pc != 0x177FC4u) { return; }
    }
    ctx->pc = 0x177FC4u;
label_177fc4:
    // 0x177fc4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177fc8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x177fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x177fcc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x177fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x177fd0: 0x248479c0  addiu       $a0, $a0, 0x79C0
    ctx->pc = 0x177fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31168));
    // 0x177fd4: 0xac62a378  sw          $v0, -0x5C88($v1)
    ctx->pc = 0x177fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943608), GPR_U32(ctx, 2));
    // 0x177fd8: 0x24a5e6c0  addiu       $a1, $a1, -0x1940
    ctx->pc = 0x177fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960832));
    // 0x177fdc: 0x240600fd  addiu       $a2, $zero, 0xFD
    ctx->pc = 0x177fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x177fe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x177fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fe4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x177FE4u;
    SET_GPR_U32(ctx, 31, 0x177FECu);
    ctx->pc = 0x177FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FE4u;
            // 0x177fe8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FECu; }
        if (ctx->pc != 0x177FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FECu; }
        if (ctx->pc != 0x177FECu) { return; }
    }
    ctx->pc = 0x177FECu;
label_177fec:
    // 0x177fec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177ff0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177ff4: 0xac82a37c  sw          $v0, -0x5C84($a0)
    ctx->pc = 0x177ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943612), GPR_U32(ctx, 2));
    // 0x177ff8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x177ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x177ffc: 0x8465ad70  lh          $a1, -0x5290($v1)
    ctx->pc = 0x177ffcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294946160)));
    // 0x178000: 0x2484d830  addiu       $a0, $a0, -0x27D0
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957104));
    // 0x178004: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x178004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x178008: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x178008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17800c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x17800Cu;
    {
        const bool branch_taken_0x17800c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17800c) {
            ctx->pc = 0x178010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17800Cu;
            // 0x178010: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178038u;
            goto label_178038;
        }
    }
    ctx->pc = 0x178014u;
    // 0x178014: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x178014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x178018: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17801c: 0x244237a0  addiu       $v0, $v0, 0x37A0
    ctx->pc = 0x17801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
    // 0x178020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178024: 0xc05ddd4  jal         func_177750
    ctx->pc = 0x178024u;
    SET_GPR_U32(ctx, 31, 0x17802Cu);
    ctx->pc = 0x178028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178024u;
            // 0x178028: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177750u;
    if (runtime->hasFunction(0x177750u)) {
        auto targetFn = runtime->lookupFunction(0x177750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17802Cu; }
        if (ctx->pc != 0x17802Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177750_0x177750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17802Cu; }
        if (ctx->pc != 0x17802Cu) { return; }
    }
    ctx->pc = 0x17802Cu;
label_17802c:
    // 0x17802c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17802cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x178030: 0xac62a790  sw          $v0, -0x5870($v1)
    ctx->pc = 0x178030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944656), GPR_U32(ctx, 2));
    // 0x178034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178038:
    // 0x178038: 0x3e00008  jr          $ra
    ctx->pc = 0x178038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178038u;
            // 0x17803c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178040u;
    ctx->pc = 0x178040u;
}

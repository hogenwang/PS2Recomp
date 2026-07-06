#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029AE08
// Address: 0x29ae08 - 0x29af68
void sub_0029AE08_0x29ae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AE08_0x29ae08");
#endif

    switch (ctx->pc) {
        case 0x29ae48u: goto label_29ae48;
        case 0x29ae64u: goto label_29ae64;
        case 0x29ae88u: goto label_29ae88;
        case 0x29aea0u: goto label_29aea0;
        case 0x29aeacu: goto label_29aeac;
        case 0x29aec4u: goto label_29aec4;
        case 0x29aed8u: goto label_29aed8;
        case 0x29aee4u: goto label_29aee4;
        case 0x29aeecu: goto label_29aeec;
        case 0x29af18u: goto label_29af18;
        case 0x29af34u: goto label_29af34;
        case 0x29af40u: goto label_29af40;
        case 0x29af5cu: goto label_29af5c;
        default: break;
    }

    ctx->pc = 0x29ae08u;

    // 0x29ae08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29ae08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29ae0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x29ae0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ae10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29ae10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29ae14: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29ae18: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29ae18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29ae20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29ae20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29ae24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29ae2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ae2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ae30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29ae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29ae38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ae38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29ae40: 0xc0a0194  jal         func_280650
    ctx->pc = 0x29AE40u;
    SET_GPR_U32(ctx, 31, 0x29AE48u);
    ctx->pc = 0x29AE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE40u;
            // 0x29ae44: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280650u;
    if (runtime->hasFunction(0x280650u)) {
        auto targetFn = runtime->lookupFunction(0x280650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE48u; }
        if (ctx->pc != 0x29AE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280650_0x280650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE48u; }
        if (ctx->pc != 0x29AE48u) { return; }
    }
    ctx->pc = 0x29AE48u;
label_29ae48:
    // 0x29ae48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ae48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae4c: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AE4Cu;
    {
        const bool branch_taken_0x29ae4c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x29AE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE4Cu;
            // 0x29ae50: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae4c) {
            ctx->pc = 0x29AE5Cu;
            goto label_29ae5c;
        }
    }
    ctx->pc = 0x29AE54u;
    // 0x29ae54: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x29AE54u;
    {
        const bool branch_taken_0x29ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE54u;
            // 0x29ae58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae54) {
            ctx->pc = 0x29AEF0u;
            goto label_29aef0;
        }
    }
    ctx->pc = 0x29AE5Cu;
label_29ae5c:
    // 0x29ae5c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29AE5Cu;
    SET_GPR_U32(ctx, 31, 0x29AE64u);
    ctx->pc = 0x29AE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE5Cu;
            // 0x29ae60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE64u; }
        if (ctx->pc != 0x29AE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE64u; }
        if (ctx->pc != 0x29AE64u) { return; }
    }
    ctx->pc = 0x29AE64u;
label_29ae64:
    // 0x29ae64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29ae64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae68: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AE68u;
    {
        const bool branch_taken_0x29ae68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE68u;
            // 0x29ae6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae68) {
            ctx->pc = 0x29AE90u;
            goto label_29ae90;
        }
    }
    ctx->pc = 0x29AE70u;
    // 0x29ae70: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29ae74: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x29ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29ae78: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x29ae78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29ae7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29ae7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae80: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29AE80u;
    SET_GPR_U32(ctx, 31, 0x29AE88u);
    ctx->pc = 0x29AE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE80u;
            // 0x29ae84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE88u; }
        if (ctx->pc != 0x29AE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE88u; }
        if (ctx->pc != 0x29AE88u) { return; }
    }
    ctx->pc = 0x29AE88u;
label_29ae88:
    // 0x29ae88: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29AE88u;
    {
        const bool branch_taken_0x29ae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE88u;
            // 0x29ae8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae88) {
            ctx->pc = 0x29AEF0u;
            goto label_29aef0;
        }
    }
    ctx->pc = 0x29AE90u;
label_29ae90:
    // 0x29ae90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29ae90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae98: 0xc0a0194  jal         func_280650
    ctx->pc = 0x29AE98u;
    SET_GPR_U32(ctx, 31, 0x29AEA0u);
    ctx->pc = 0x29AE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE98u;
            // 0x29ae9c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280650u;
    if (runtime->hasFunction(0x280650u)) {
        auto targetFn = runtime->lookupFunction(0x280650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEA0u; }
        if (ctx->pc != 0x29AEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280650_0x280650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEA0u; }
        if (ctx->pc != 0x29AEA0u) { return; }
    }
    ctx->pc = 0x29AEA0u;
label_29aea0:
    // 0x29aea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29aea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aea4: 0xc0a695e  jal         func_29A578
    ctx->pc = 0x29AEA4u;
    SET_GPR_U32(ctx, 31, 0x29AEACu);
    ctx->pc = 0x29AEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEA4u;
            // 0x29aea8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A578u;
    if (runtime->hasFunction(0x29A578u)) {
        auto targetFn = runtime->lookupFunction(0x29A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEACu; }
        if (ctx->pc != 0x29AEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A578_0x29a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEACu; }
        if (ctx->pc != 0x29AEACu) { return; }
    }
    ctx->pc = 0x29AEACu;
label_29aeac:
    // 0x29aeac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29aeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aeb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aeb4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x29aeb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aeb8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x29aeb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aebc: 0xc0a03e0  jal         func_280F80
    ctx->pc = 0x29AEBCu;
    SET_GPR_U32(ctx, 31, 0x29AEC4u);
    ctx->pc = 0x29AEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEBCu;
            // 0x29aec0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280F80u;
    if (runtime->hasFunction(0x280F80u)) {
        auto targetFn = runtime->lookupFunction(0x280F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEC4u; }
        if (ctx->pc != 0x29AEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280F80_0x280f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEC4u; }
        if (ctx->pc != 0x29AEC4u) { return; }
    }
    ctx->pc = 0x29AEC4u;
label_29aec4:
    // 0x29aec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29aec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aec8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AEC8u;
    {
        const bool branch_taken_0x29aec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aec8) {
            ctx->pc = 0x29AEDCu;
            goto label_29aedc;
        }
    }
    ctx->pc = 0x29AED0u;
    // 0x29aed0: 0xc0a6964  jal         func_29A590
    ctx->pc = 0x29AED0u;
    SET_GPR_U32(ctx, 31, 0x29AED8u);
    ctx->pc = 0x29AED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AED0u;
            // 0x29aed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A590u;
    if (runtime->hasFunction(0x29A590u)) {
        auto targetFn = runtime->lookupFunction(0x29A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AED8u; }
        if (ctx->pc != 0x29AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A590_0x29a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AED8u; }
        if (ctx->pc != 0x29AED8u) { return; }
    }
    ctx->pc = 0x29AED8u;
label_29aed8:
    // 0x29aed8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29aed8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29aedc:
    // 0x29aedc: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x29AEDCu;
    SET_GPR_U32(ctx, 31, 0x29AEE4u);
    ctx->pc = 0x29AEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEDCu;
            // 0x29aee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (runtime->hasFunction(0x280ED8u)) {
        auto targetFn = runtime->lookupFunction(0x280ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEE4u; }
        if (ctx->pc != 0x29AEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280ED8_0x280ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEE4u; }
        if (ctx->pc != 0x29AEE4u) { return; }
    }
    ctx->pc = 0x29AEE4u;
label_29aee4:
    // 0x29aee4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29AEE4u;
    SET_GPR_U32(ctx, 31, 0x29AEECu);
    ctx->pc = 0x29AEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEE4u;
            // 0x29aee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEECu; }
        if (ctx->pc != 0x29AEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEECu; }
        if (ctx->pc != 0x29AEECu) { return; }
    }
    ctx->pc = 0x29AEECu;
label_29aeec:
    // 0x29aeec: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x29aeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29aef0:
    // 0x29aef0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29aef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29aef4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29aef4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29aef8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29aef8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29aefc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29aefcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29af00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29af00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29af04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29af04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29af08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29af08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29af0c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF0Cu;
            // 0x29af10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AF14u;
    // 0x29af14: 0x0  nop
    ctx->pc = 0x29af14u;
    // NOP
label_29af18:
    // 0x29af18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29af18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29af1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29af1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29af20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29af24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29af24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29af28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29af28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29af2c: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x29AF2Cu;
    SET_GPR_U32(ctx, 31, 0x29AF34u);
    ctx->pc = 0x29AF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF2Cu;
            // 0x29af30: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF34u; }
        if (ctx->pc != 0x29AF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF34u; }
        if (ctx->pc != 0x29AF34u) { return; }
    }
    ctx->pc = 0x29AF34u;
label_29af34:
    // 0x29af34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29af38: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF38u;
            // 0x29af3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AF40u;
label_29af40:
    // 0x29af40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29af44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29af48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29af4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29af50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29af54: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x29AF54u;
    SET_GPR_U32(ctx, 31, 0x29AF5Cu);
    ctx->pc = 0x29AF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF54u;
            // 0x29af58: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF5Cu; }
        if (ctx->pc != 0x29AF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF5Cu; }
        if (ctx->pc != 0x29AF5Cu) { return; }
    }
    ctx->pc = 0x29AF5Cu;
label_29af5c:
    // 0x29af5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29af5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29af60: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF60u;
            // 0x29af64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AF68u;
    ctx->pc = 0x29af68u;
}

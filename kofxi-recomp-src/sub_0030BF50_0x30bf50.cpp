#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030BF50
// Address: 0x30bf50 - 0x30c060
void sub_0030BF50_0x30bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BF50_0x30bf50");
#endif

    switch (ctx->pc) {
        case 0x30bf98u: goto label_30bf98;
        case 0x30bfa8u: goto label_30bfa8;
        case 0x30bfb8u: goto label_30bfb8;
        case 0x30bfc8u: goto label_30bfc8;
        case 0x30bfd8u: goto label_30bfd8;
        case 0x30bfe4u: goto label_30bfe4;
        case 0x30bff8u: goto label_30bff8;
        case 0x30c008u: goto label_30c008;
        case 0x30c018u: goto label_30c018;
        case 0x30c028u: goto label_30c028;
        case 0x30c038u: goto label_30c038;
        case 0x30c044u: goto label_30c044;
        default: break;
    }

    ctx->pc = 0x30bf50u;

    // 0x30bf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30bf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30bf54: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x30bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30bf58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30bf5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30bf60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30bf64: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x30bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30bf68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30bf6c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x30bf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30bf70: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x30bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x30bf74: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x30bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x30bf78: 0x8c5000b8  lw          $s0, 0xB8($v0)
    ctx->pc = 0x30bf78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x30bf7c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30bf80: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x30bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x30bf84: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30BF84u;
    {
        const bool branch_taken_0x30bf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF84u;
            // 0x30bf88: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf84) {
            ctx->pc = 0x30BFECu;
            goto label_30bfec;
        }
    }
    ctx->pc = 0x30BF8Cu;
    // 0x30bf8c: 0x24b10010  addiu       $s1, $a1, 0x10
    ctx->pc = 0x30bf8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x30bf90: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30BF90u;
    SET_GPR_U32(ctx, 31, 0x30BF98u);
    ctx->pc = 0x30BF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF90u;
            // 0x30bf94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF98u; }
        if (ctx->pc != 0x30BF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BF98u; }
        if (ctx->pc != 0x30BF98u) { return; }
    }
    ctx->pc = 0x30BF98u;
label_30bf98:
    // 0x30bf98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30bf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf9c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x30bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x30bfa0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30BFA0u;
    SET_GPR_U32(ctx, 31, 0x30BFA8u);
    ctx->pc = 0x30BFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFA0u;
            // 0x30bfa4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFA8u; }
        if (ctx->pc != 0x30BFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFA8u; }
        if (ctx->pc != 0x30BFA8u) { return; }
    }
    ctx->pc = 0x30BFA8u;
label_30bfa8:
    // 0x30bfa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30bfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bfac: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x30bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x30bfb0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30BFB0u;
    SET_GPR_U32(ctx, 31, 0x30BFB8u);
    ctx->pc = 0x30BFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFB0u;
            // 0x30bfb4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFB8u; }
        if (ctx->pc != 0x30BFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFB8u; }
        if (ctx->pc != 0x30BFB8u) { return; }
    }
    ctx->pc = 0x30BFB8u;
label_30bfb8:
    // 0x30bfb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30bfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bfbc: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x30bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x30bfc0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30BFC0u;
    SET_GPR_U32(ctx, 31, 0x30BFC8u);
    ctx->pc = 0x30BFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFC0u;
            // 0x30bfc4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFC8u; }
        if (ctx->pc != 0x30BFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFC8u; }
        if (ctx->pc != 0x30BFC8u) { return; }
    }
    ctx->pc = 0x30BFC8u;
label_30bfc8:
    // 0x30bfc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30bfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bfcc: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x30bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x30bfd0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30BFD0u;
    SET_GPR_U32(ctx, 31, 0x30BFD8u);
    ctx->pc = 0x30BFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFD0u;
            // 0x30bfd4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFD8u; }
        if (ctx->pc != 0x30BFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFD8u; }
        if (ctx->pc != 0x30BFD8u) { return; }
    }
    ctx->pc = 0x30BFD8u;
label_30bfd8:
    // 0x30bfd8: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x30bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x30bfdc: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30BFDCu;
    SET_GPR_U32(ctx, 31, 0x30BFE4u);
    ctx->pc = 0x30BFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFDCu;
            // 0x30bfe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFE4u; }
        if (ctx->pc != 0x30BFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFE4u; }
        if (ctx->pc != 0x30BFE4u) { return; }
    }
    ctx->pc = 0x30BFE4u;
label_30bfe4:
    // 0x30bfe4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30BFE4u;
    {
        const bool branch_taken_0x30bfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFE4u;
            // 0x30bfe8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfe4) {
            ctx->pc = 0x30C048u;
            goto label_30c048;
        }
    }
    ctx->pc = 0x30BFECu;
label_30bfec:
    // 0x30bfec: 0x24b10010  addiu       $s1, $a1, 0x10
    ctx->pc = 0x30bfecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x30bff0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30BFF0u;
    SET_GPR_U32(ctx, 31, 0x30BFF8u);
    ctx->pc = 0x30BFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFF0u;
            // 0x30bff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFF8u; }
        if (ctx->pc != 0x30BFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BFF8u; }
        if (ctx->pc != 0x30BFF8u) { return; }
    }
    ctx->pc = 0x30BFF8u;
label_30bff8:
    // 0x30bff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30bff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bffc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x30bffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x30c000: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30C000u;
    SET_GPR_U32(ctx, 31, 0x30C008u);
    ctx->pc = 0x30C004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C000u;
            // 0x30c004: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C008u; }
        if (ctx->pc != 0x30C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C008u; }
        if (ctx->pc != 0x30C008u) { return; }
    }
    ctx->pc = 0x30C008u;
label_30c008:
    // 0x30c008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30c008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c00c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x30c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x30c010: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30C010u;
    SET_GPR_U32(ctx, 31, 0x30C018u);
    ctx->pc = 0x30C014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C010u;
            // 0x30c014: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C018u; }
        if (ctx->pc != 0x30C018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C018u; }
        if (ctx->pc != 0x30C018u) { return; }
    }
    ctx->pc = 0x30C018u;
label_30c018:
    // 0x30c018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30c018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c01c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x30c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x30c020: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30C020u;
    SET_GPR_U32(ctx, 31, 0x30C028u);
    ctx->pc = 0x30C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C020u;
            // 0x30c024: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C028u; }
        if (ctx->pc != 0x30C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C028u; }
        if (ctx->pc != 0x30C028u) { return; }
    }
    ctx->pc = 0x30C028u;
label_30c028:
    // 0x30c028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30c028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c02c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x30c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x30c030: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30C030u;
    SET_GPR_U32(ctx, 31, 0x30C038u);
    ctx->pc = 0x30C034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C030u;
            // 0x30c034: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C038u; }
        if (ctx->pc != 0x30C038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C038u; }
        if (ctx->pc != 0x30C038u) { return; }
    }
    ctx->pc = 0x30C038u;
label_30c038:
    // 0x30c038: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x30c038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x30c03c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30C03Cu;
    SET_GPR_U32(ctx, 31, 0x30C044u);
    ctx->pc = 0x30C040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C03Cu;
            // 0x30c040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (runtime->hasFunction(0x103AC8u)) {
        auto targetFn = runtime->lookupFunction(0x103AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C044u; }
        if (ctx->pc != 0x30C044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AC8_0x103ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C044u; }
        if (ctx->pc != 0x30C044u) { return; }
    }
    ctx->pc = 0x30C044u;
label_30c044:
    // 0x30c044: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30c048:
    // 0x30c048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c04c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c050: 0x3e00008  jr          $ra
    ctx->pc = 0x30C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C050u;
            // 0x30c054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C058u;
    // 0x30c058: 0x0  nop
    ctx->pc = 0x30c058u;
    // NOP
    // 0x30c05c: 0x0  nop
    ctx->pc = 0x30c05cu;
    // NOP
    ctx->pc = 0x30c060u;
}

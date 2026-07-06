#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BF50
// Address: 0x19bf50 - 0x19c060
void sub_0019BF50_0x19bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BF50_0x19bf50");
#endif

    switch (ctx->pc) {
        case 0x19bf74u: goto label_19bf74;
        case 0x19bfb0u: goto label_19bfb0;
        case 0x19bfbcu: goto label_19bfbc;
        case 0x19bff4u: goto label_19bff4;
        case 0x19c004u: goto label_19c004;
        case 0x19c01cu: goto label_19c01c;
        case 0x19c038u: goto label_19c038;
        default: break;
    }

    ctx->pc = 0x19bf50u;

    // 0x19bf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bf54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19bf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19bf58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bf5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19bf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19bf60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19bf60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19bf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19bf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf6c: 0xc066020  jal         func_198080
    ctx->pc = 0x19BF6Cu;
    SET_GPR_U32(ctx, 31, 0x19BF74u);
    ctx->pc = 0x19BF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF6Cu;
            // 0x19bf70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (runtime->hasFunction(0x198080u)) {
        auto targetFn = runtime->lookupFunction(0x198080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF74u; }
        if (ctx->pc != 0x19BF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198080_0x198080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF74u; }
        if (ctx->pc != 0x19BF74u) { return; }
    }
    ctx->pc = 0x19BF74u;
label_19bf74:
    // 0x19bf74: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x19bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19bf78: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19bf78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19bf7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19bf80: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19BF80u;
    {
        const bool branch_taken_0x19bf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19bf80) {
            ctx->pc = 0x19BF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF80u;
            // 0x19bf84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19BFB4u;
            goto label_19bfb4;
        }
    }
    ctx->pc = 0x19BF88u;
    // 0x19bf88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bf8c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x19bf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19bf90: 0xac40d4d8  sw          $zero, -0x2B28($v0)
    ctx->pc = 0x19bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956248), GPR_U32(ctx, 0));
    // 0x19bf94: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x19bf94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x19bf98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bf9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19bf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfa0: 0xac40d4e0  sw          $zero, -0x2B20($v0)
    ctx->pc = 0x19bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956256), GPR_U32(ctx, 0));
    // 0x19bfa4: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x19bfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x19bfa8: 0xc066050  jal         func_198140
    ctx->pc = 0x19BFA8u;
    SET_GPR_U32(ctx, 31, 0x19BFB0u);
    ctx->pc = 0x19BFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFA8u;
            // 0x19bfac: 0x24c6d4d8  addiu       $a2, $a2, -0x2B28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198140u;
    if (runtime->hasFunction(0x198140u)) {
        auto targetFn = runtime->lookupFunction(0x198140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFB0u; }
        if (ctx->pc != 0x19BFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198140_0x198140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFB0u; }
        if (ctx->pc != 0x19BFB0u) { return; }
    }
    ctx->pc = 0x19BFB0u;
label_19bfb0:
    // 0x19bfb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19bfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bfb4:
    // 0x19bfb4: 0xc066020  jal         func_198080
    ctx->pc = 0x19BFB4u;
    SET_GPR_U32(ctx, 31, 0x19BFBCu);
    ctx->pc = 0x19BFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFB4u;
            // 0x19bfb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (runtime->hasFunction(0x198080u)) {
        auto targetFn = runtime->lookupFunction(0x198080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFBCu; }
        if (ctx->pc != 0x19BFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198080_0x198080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFBCu; }
        if (ctx->pc != 0x19BFBCu) { return; }
    }
    ctx->pc = 0x19BFBCu;
label_19bfbc:
    // 0x19bfbc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x19bfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19bfc0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19bfc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19bfc4: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x19bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x19bfc8: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19BFC8u;
    {
        const bool branch_taken_0x19bfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19bfc8) {
            ctx->pc = 0x19BFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFC8u;
            // 0x19bfcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C044u;
            goto label_19c044;
        }
    }
    ctx->pc = 0x19BFD0u;
    // 0x19bfd0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x19bfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19bfd4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19BFD4u;
    {
        const bool branch_taken_0x19bfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bfd4) {
            ctx->pc = 0x19C030u;
            goto label_19c030;
        }
    }
    ctx->pc = 0x19BFDCu;
    // 0x19bfdc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bfe0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x19bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19bfe4: 0x8c44d4d8  lw          $a0, -0x2B28($v0)
    ctx->pc = 0x19bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956248)));
    // 0x19bfe8: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20
    ctx->pc = 0x19bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
    // 0x19bfec: 0xc066544  jal         func_199510
    ctx->pc = 0x19BFECu;
    SET_GPR_U32(ctx, 31, 0x19BFF4u);
    ctx->pc = 0x19BFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFECu;
            // 0x19bff0: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199510u;
    if (runtime->hasFunction(0x199510u)) {
        auto targetFn = runtime->lookupFunction(0x199510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFF4u; }
        if (ctx->pc != 0x19BFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199510_0x199510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFF4u; }
        if (ctx->pc != 0x19BFF4u) { return; }
    }
    ctx->pc = 0x19BFF4u;
label_19bff4:
    // 0x19bff4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19BFF4u;
    {
        const bool branch_taken_0x19bff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bff4) {
            ctx->pc = 0x19C040u;
            goto label_19c040;
        }
    }
    ctx->pc = 0x19BFFCu;
    // 0x19bffc: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x19BFFCu;
    SET_GPR_U32(ctx, 31, 0x19C004u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C004u; }
        if (ctx->pc != 0x19C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C004u; }
        if (ctx->pc != 0x19C004u) { return; }
    }
    ctx->pc = 0x19C004u;
label_19c004:
    // 0x19c004: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c008: 0x8c44d4d8  lw          $a0, -0x2B28($v0)
    ctx->pc = 0x19c008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956248)));
    // 0x19c00c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x19C00Cu;
    {
        const bool branch_taken_0x19c00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c00c) {
            ctx->pc = 0x19C010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C00Cu;
            // 0x19c010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C044u;
            goto label_19c044;
        }
    }
    ctx->pc = 0x19C014u;
    // 0x19c014: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19C014u;
    SET_GPR_U32(ctx, 31, 0x19C01Cu);
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C01Cu; }
        if (ctx->pc != 0x19C01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C01Cu; }
        if (ctx->pc != 0x19C01Cu) { return; }
    }
    ctx->pc = 0x19C01Cu;
label_19c01c:
    // 0x19c01c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c020: 0xac40d4d8  sw          $zero, -0x2B28($v0)
    ctx->pc = 0x19c020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956248), GPR_U32(ctx, 0));
    // 0x19c024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c028: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C028u;
    {
        const bool branch_taken_0x19c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c028) {
            ctx->pc = 0x19C044u;
            goto label_19c044;
        }
    }
    ctx->pc = 0x19C030u;
label_19c030:
    // 0x19c030: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x19C030u;
    SET_GPR_U32(ctx, 31, 0x19C038u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C038u; }
        if (ctx->pc != 0x19C038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C038u; }
        if (ctx->pc != 0x19C038u) { return; }
    }
    ctx->pc = 0x19C038u;
label_19c038:
    // 0x19c038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C038u;
    {
        const bool branch_taken_0x19c038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C038u;
            // 0x19c03c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c038) {
            ctx->pc = 0x19C044u;
            goto label_19c044;
        }
    }
    ctx->pc = 0x19C040u;
label_19c040:
    // 0x19c040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c044:
    // 0x19c044: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c04c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c050: 0x3e00008  jr          $ra
    ctx->pc = 0x19C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C050u;
            // 0x19c054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C058u;
    // 0x19c058: 0x0  nop
    ctx->pc = 0x19c058u;
    // NOP
    // 0x19c05c: 0x0  nop
    ctx->pc = 0x19c05cu;
    // NOP
    ctx->pc = 0x19c060u;
}

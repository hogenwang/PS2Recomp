#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212F00
// Address: 0x212f00 - 0x213050
void sub_00212F00_0x212f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212F00_0x212f00");
#endif

    switch (ctx->pc) {
        case 0x212f3cu: goto label_212f3c;
        case 0x212f50u: goto label_212f50;
        case 0x212f64u: goto label_212f64;
        case 0x212f78u: goto label_212f78;
        case 0x212f8cu: goto label_212f8c;
        case 0x212fa0u: goto label_212fa0;
        case 0x212fb4u: goto label_212fb4;
        case 0x212fc8u: goto label_212fc8;
        case 0x212fdcu: goto label_212fdc;
        case 0x212ff0u: goto label_212ff0;
        case 0x213004u: goto label_213004;
        case 0x213018u: goto label_213018;
        case 0x213028u: goto label_213028;
        default: break;
    }

    ctx->pc = 0x212f00u;

    // 0x212f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212f04: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x212f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x212f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212f0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212f10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x212f14: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x212f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x212f1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x212f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x212f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x212f24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x212f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f28: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f2c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x212f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212f30: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x212f30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212f34: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x212F34u;
    SET_GPR_U32(ctx, 31, 0x212F3Cu);
    ctx->pc = 0x212F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F34u;
            // 0x212f38: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F3Cu; }
        if (ctx->pc != 0x212F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F3Cu; }
        if (ctx->pc != 0x212F3Cu) { return; }
    }
    ctx->pc = 0x212F3Cu;
label_212f3c:
    // 0x212f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f44: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f48: 0xc08449a  jal         func_211268
    ctx->pc = 0x212F48u;
    SET_GPR_U32(ctx, 31, 0x212F50u);
    ctx->pc = 0x212F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F48u;
            // 0x212f4c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F50u; }
        if (ctx->pc != 0x212F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F50u; }
        if (ctx->pc != 0x212F50u) { return; }
    }
    ctx->pc = 0x212F50u;
label_212f50:
    // 0x212f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f5c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212F5Cu;
    SET_GPR_U32(ctx, 31, 0x212F64u);
    ctx->pc = 0x212F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F5Cu;
            // 0x212f60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F64u; }
        if (ctx->pc != 0x212F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F64u; }
        if (ctx->pc != 0x212F64u) { return; }
    }
    ctx->pc = 0x212F64u;
label_212f64:
    // 0x212f64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f70: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212F70u;
    SET_GPR_U32(ctx, 31, 0x212F78u);
    ctx->pc = 0x212F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F70u;
            // 0x212f74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F78u; }
        if (ctx->pc != 0x212F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F78u; }
        if (ctx->pc != 0x212F78u) { return; }
    }
    ctx->pc = 0x212F78u;
label_212f78:
    // 0x212f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f84: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212F84u;
    SET_GPR_U32(ctx, 31, 0x212F8Cu);
    ctx->pc = 0x212F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F84u;
            // 0x212f88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F8Cu; }
        if (ctx->pc != 0x212F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F8Cu; }
        if (ctx->pc != 0x212F8Cu) { return; }
    }
    ctx->pc = 0x212F8Cu;
label_212f8c:
    // 0x212f8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f98: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212F98u;
    SET_GPR_U32(ctx, 31, 0x212FA0u);
    ctx->pc = 0x212F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F98u;
            // 0x212f9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FA0u; }
        if (ctx->pc != 0x212FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FA0u; }
        if (ctx->pc != 0x212FA0u) { return; }
    }
    ctx->pc = 0x212FA0u;
label_212fa0:
    // 0x212fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fa8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212fa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fac: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212FACu;
    SET_GPR_U32(ctx, 31, 0x212FB4u);
    ctx->pc = 0x212FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212FACu;
            // 0x212fb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FB4u; }
        if (ctx->pc != 0x212FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FB4u; }
        if (ctx->pc != 0x212FB4u) { return; }
    }
    ctx->pc = 0x212FB4u;
label_212fb4:
    // 0x212fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fc0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212FC0u;
    SET_GPR_U32(ctx, 31, 0x212FC8u);
    ctx->pc = 0x212FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212FC0u;
            // 0x212fc4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FC8u; }
        if (ctx->pc != 0x212FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FC8u; }
        if (ctx->pc != 0x212FC8u) { return; }
    }
    ctx->pc = 0x212FC8u;
label_212fc8:
    // 0x212fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fd4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212FD4u;
    SET_GPR_U32(ctx, 31, 0x212FDCu);
    ctx->pc = 0x212FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212FD4u;
            // 0x212fd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FDCu; }
        if (ctx->pc != 0x212FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FDCu; }
        if (ctx->pc != 0x212FDCu) { return; }
    }
    ctx->pc = 0x212FDCu;
label_212fdc:
    // 0x212fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fe4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fe8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212FE8u;
    SET_GPR_U32(ctx, 31, 0x212FF0u);
    ctx->pc = 0x212FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212FE8u;
            // 0x212fec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FF0u; }
        if (ctx->pc != 0x212FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212FF0u; }
        if (ctx->pc != 0x212FF0u) { return; }
    }
    ctx->pc = 0x212FF0u;
label_212ff0:
    // 0x212ff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ff8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x212ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ffc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x212FFCu;
    SET_GPR_U32(ctx, 31, 0x213004u);
    ctx->pc = 0x213000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212FFCu;
            // 0x213000: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213004u; }
        if (ctx->pc != 0x213004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213004u; }
        if (ctx->pc != 0x213004u) { return; }
    }
    ctx->pc = 0x213004u;
label_213004:
    // 0x213004: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213008: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21300c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213010: 0xc08449a  jal         func_211268
    ctx->pc = 0x213010u;
    SET_GPR_U32(ctx, 31, 0x213018u);
    ctx->pc = 0x213014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213010u;
            // 0x213014: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213018u; }
        if (ctx->pc != 0x213018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213018u; }
        if (ctx->pc != 0x213018u) { return; }
    }
    ctx->pc = 0x213018u;
label_213018:
    // 0x213018: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x213018u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21301c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213020: 0xc084b84  jal         func_212E10
    ctx->pc = 0x213020u;
    SET_GPR_U32(ctx, 31, 0x213028u);
    ctx->pc = 0x213024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213020u;
            // 0x213024: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212E10u;
    if (runtime->hasFunction(0x212E10u)) {
        auto targetFn = runtime->lookupFunction(0x212E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213028u; }
        if (ctx->pc != 0x213028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212E10_0x212e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213028u; }
        if (ctx->pc != 0x213028u) { return; }
    }
    ctx->pc = 0x213028u;
label_213028:
    // 0x213028: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x213028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21302c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21302cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213034: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213038: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213038u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21303c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21303cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213040: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213044: 0x3e00008  jr          $ra
    ctx->pc = 0x213044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213044u;
            // 0x213048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21304Cu;
    // 0x21304c: 0x0  nop
    ctx->pc = 0x21304cu;
    // NOP
    ctx->pc = 0x213050u;
}

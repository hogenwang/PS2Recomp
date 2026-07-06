#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212CD8
// Address: 0x212cd8 - 0x212e10
void sub_00212CD8_0x212cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212CD8_0x212cd8");
#endif

    switch (ctx->pc) {
        case 0x212d14u: goto label_212d14;
        case 0x212d28u: goto label_212d28;
        case 0x212d3cu: goto label_212d3c;
        case 0x212d50u: goto label_212d50;
        case 0x212d64u: goto label_212d64;
        case 0x212d78u: goto label_212d78;
        case 0x212d8cu: goto label_212d8c;
        case 0x212da0u: goto label_212da0;
        case 0x212db4u: goto label_212db4;
        case 0x212dc8u: goto label_212dc8;
        case 0x212ddcu: goto label_212ddc;
        case 0x212de4u: goto label_212de4;
        default: break;
    }

    ctx->pc = 0x212cd8u;

    // 0x212cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212cdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x212cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x212ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212ce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212ce8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x212cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x212cf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x212cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cf8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x212cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x212cfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x212cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x212d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212d08: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x212d08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x212d0c: 0xc084612  jal         func_211848
    ctx->pc = 0x212D0Cu;
    SET_GPR_U32(ctx, 31, 0x212D14u);
    ctx->pc = 0x212D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D0Cu;
            // 0x212d10: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D14u; }
        if (ctx->pc != 0x212D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D14u; }
        if (ctx->pc != 0x212D14u) { return; }
    }
    ctx->pc = 0x212D14u;
label_212d14:
    // 0x212d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d1c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d20: 0xc0845c2  jal         func_211708
    ctx->pc = 0x212D20u;
    SET_GPR_U32(ctx, 31, 0x212D28u);
    ctx->pc = 0x212D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D20u;
            // 0x212d24: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D28u; }
        if (ctx->pc != 0x212D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D28u; }
        if (ctx->pc != 0x212D28u) { return; }
    }
    ctx->pc = 0x212D28u;
label_212d28:
    // 0x212d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d34: 0xc0845c2  jal         func_211708
    ctx->pc = 0x212D34u;
    SET_GPR_U32(ctx, 31, 0x212D3Cu);
    ctx->pc = 0x212D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D34u;
            // 0x212d38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D3Cu; }
        if (ctx->pc != 0x212D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D3Cu; }
        if (ctx->pc != 0x212D3Cu) { return; }
    }
    ctx->pc = 0x212D3Cu;
label_212d3c:
    // 0x212d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d48: 0xc084612  jal         func_211848
    ctx->pc = 0x212D48u;
    SET_GPR_U32(ctx, 31, 0x212D50u);
    ctx->pc = 0x212D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D48u;
            // 0x212d4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D50u; }
        if (ctx->pc != 0x212D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D50u; }
        if (ctx->pc != 0x212D50u) { return; }
    }
    ctx->pc = 0x212D50u;
label_212d50:
    // 0x212d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d58: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d5c: 0xc084612  jal         func_211848
    ctx->pc = 0x212D5Cu;
    SET_GPR_U32(ctx, 31, 0x212D64u);
    ctx->pc = 0x212D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D5Cu;
            // 0x212d60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D64u; }
        if (ctx->pc != 0x212D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D64u; }
        if (ctx->pc != 0x212D64u) { return; }
    }
    ctx->pc = 0x212D64u;
label_212d64:
    // 0x212d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d70: 0xc084612  jal         func_211848
    ctx->pc = 0x212D70u;
    SET_GPR_U32(ctx, 31, 0x212D78u);
    ctx->pc = 0x212D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D70u;
            // 0x212d74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D78u; }
        if (ctx->pc != 0x212D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D78u; }
        if (ctx->pc != 0x212D78u) { return; }
    }
    ctx->pc = 0x212D78u;
label_212d78:
    // 0x212d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d84: 0xc084612  jal         func_211848
    ctx->pc = 0x212D84u;
    SET_GPR_U32(ctx, 31, 0x212D8Cu);
    ctx->pc = 0x212D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D84u;
            // 0x212d88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D8Cu; }
        if (ctx->pc != 0x212D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212D8Cu; }
        if (ctx->pc != 0x212D8Cu) { return; }
    }
    ctx->pc = 0x212D8Cu;
label_212d8c:
    // 0x212d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d98: 0xc0845c2  jal         func_211708
    ctx->pc = 0x212D98u;
    SET_GPR_U32(ctx, 31, 0x212DA0u);
    ctx->pc = 0x212D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212D98u;
            // 0x212d9c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DA0u; }
        if (ctx->pc != 0x212DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DA0u; }
        if (ctx->pc != 0x212DA0u) { return; }
    }
    ctx->pc = 0x212DA0u;
label_212da0:
    // 0x212da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212da4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212da8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dac: 0xc084612  jal         func_211848
    ctx->pc = 0x212DACu;
    SET_GPR_U32(ctx, 31, 0x212DB4u);
    ctx->pc = 0x212DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DACu;
            // 0x212db0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DB4u; }
        if (ctx->pc != 0x212DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DB4u; }
        if (ctx->pc != 0x212DB4u) { return; }
    }
    ctx->pc = 0x212DB4u;
label_212db4:
    // 0x212db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212db8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dc0: 0xc084612  jal         func_211848
    ctx->pc = 0x212DC0u;
    SET_GPR_U32(ctx, 31, 0x212DC8u);
    ctx->pc = 0x212DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DC0u;
            // 0x212dc4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DC8u; }
        if (ctx->pc != 0x212DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DC8u; }
        if (ctx->pc != 0x212DC8u) { return; }
    }
    ctx->pc = 0x212DC8u;
label_212dc8:
    // 0x212dc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dcc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x212dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212dd4: 0xc0845c2  jal         func_211708
    ctx->pc = 0x212DD4u;
    SET_GPR_U32(ctx, 31, 0x212DDCu);
    ctx->pc = 0x212DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DD4u;
            // 0x212dd8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DDCu; }
        if (ctx->pc != 0x212DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DDCu; }
        if (ctx->pc != 0x212DDCu) { return; }
    }
    ctx->pc = 0x212DDCu;
label_212ddc:
    // 0x212ddc: 0xc084ab0  jal         func_212AC0
    ctx->pc = 0x212DDCu;
    SET_GPR_U32(ctx, 31, 0x212DE4u);
    ctx->pc = 0x212DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212DDCu;
            // 0x212de0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212AC0u;
    if (runtime->hasFunction(0x212AC0u)) {
        auto targetFn = runtime->lookupFunction(0x212AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DE4u; }
        if (ctx->pc != 0x212DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212AC0_0x212ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212DE4u; }
        if (ctx->pc != 0x212DE4u) { return; }
    }
    ctx->pc = 0x212DE4u;
label_212de4:
    // 0x212de4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x212de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x212de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212dec: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x212decu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x212df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212df4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212df8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x212df8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212dfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x212dfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212e00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x212e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212e04: 0x3e00008  jr          $ra
    ctx->pc = 0x212E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212E04u;
            // 0x212e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212E0Cu;
    // 0x212e0c: 0x0  nop
    ctx->pc = 0x212e0cu;
    // NOP
    ctx->pc = 0x212e10u;
}

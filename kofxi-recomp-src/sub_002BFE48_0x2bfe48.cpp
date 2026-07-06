#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BFE48
// Address: 0x2bfe48 - 0x2bfff8
void sub_002BFE48_0x2bfe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFE48_0x2bfe48");
#endif

    switch (ctx->pc) {
        case 0x2bfe80u: goto label_2bfe80;
        case 0x2bfea4u: goto label_2bfea4;
        case 0x2bfec4u: goto label_2bfec4;
        case 0x2bfeccu: goto label_2bfecc;
        case 0x2bfed8u: goto label_2bfed8;
        case 0x2bfef0u: goto label_2bfef0;
        case 0x2bfef8u: goto label_2bfef8;
        case 0x2bff00u: goto label_2bff00;
        case 0x2bff0cu: goto label_2bff0c;
        case 0x2bff24u: goto label_2bff24;
        case 0x2bff38u: goto label_2bff38;
        case 0x2bff60u: goto label_2bff60;
        case 0x2bffa4u: goto label_2bffa4;
        case 0x2bffb0u: goto label_2bffb0;
        case 0x2bffd8u: goto label_2bffd8;
        default: break;
    }

    ctx->pc = 0x2bfe48u;

    // 0x2bfe48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bfe48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bfe4c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bfe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bfe50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bfe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bfe54: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2bfe54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfe58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bfe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bfe5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bfe5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe60: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bfe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bfe64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bfe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bfe68: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFE68u;
    {
        const bool branch_taken_0x2bfe68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE68u;
            // 0x2bfe6c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe68) {
            ctx->pc = 0x2BFE78u;
            goto label_2bfe78;
        }
    }
    ctx->pc = 0x2BFE70u;
    // 0x2bfe70: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2BFE70u;
    {
        const bool branch_taken_0x2bfe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE70u;
            // 0x2bfe74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe70) {
            ctx->pc = 0x2BFF3Cu;
            goto label_2bff3c;
        }
    }
    ctx->pc = 0x2BFE78u;
label_2bfe78:
    // 0x2bfe78: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2BFE78u;
    SET_GPR_U32(ctx, 31, 0x2BFE80u);
    ctx->pc = 0x2BFE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE78u;
            // 0x2bfe7c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE80u; }
        if (ctx->pc != 0x2BFE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE80u; }
        if (ctx->pc != 0x2BFE80u) { return; }
    }
    ctx->pc = 0x2BFE80u;
label_2bfe80:
    // 0x2bfe80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfe80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe84: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BFE84u;
    {
        const bool branch_taken_0x2bfe84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE84u;
            // 0x2bfe88: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe84) {
            ctx->pc = 0x2BFEACu;
            goto label_2bfeac;
        }
    }
    ctx->pc = 0x2BFE8Cu;
    // 0x2bfe8c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2bfe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bfe90: 0x240500e9  addiu       $a1, $zero, 0xE9
    ctx->pc = 0x2bfe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x2bfe94: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2bfe94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2bfe98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bfe98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe9c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BFE9Cu;
    SET_GPR_U32(ctx, 31, 0x2BFEA4u);
    ctx->pc = 0x2BFEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE9Cu;
            // 0x2bfea0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEA4u; }
        if (ctx->pc != 0x2BFEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEA4u; }
        if (ctx->pc != 0x2BFEA4u) { return; }
    }
    ctx->pc = 0x2BFEA4u;
label_2bfea4:
    // 0x2bfea4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2BFEA4u;
    {
        const bool branch_taken_0x2bfea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEA4u;
            // 0x2bfea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfea4) {
            ctx->pc = 0x2BFF3Cu;
            goto label_2bff3c;
        }
    }
    ctx->pc = 0x2BFEACu;
label_2bfeac:
    // 0x2bfeac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2bfeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bfeb0: 0x2453ec78  addiu       $s3, $v0, -0x1388
    ctx->pc = 0x2bfeb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962296));
    // 0x2bfeb4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2bfeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bfeb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bfeb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfebc: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BFEBCu;
    SET_GPR_U32(ctx, 31, 0x2BFEC4u);
    ctx->pc = 0x2BFEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEBCu;
            // 0x2bfec0: 0x24070071  addiu       $a3, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEC4u; }
        if (ctx->pc != 0x2BFEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEC4u; }
        if (ctx->pc != 0x2BFEC4u) { return; }
    }
    ctx->pc = 0x2BFEC4u;
label_2bfec4:
    // 0x2bfec4: 0xc0afef0  jal         func_2BFBC0
    ctx->pc = 0x2BFEC4u;
    SET_GPR_U32(ctx, 31, 0x2BFECCu);
    ctx->pc = 0x2BFEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEC4u;
            // 0x2bfec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFBC0u;
    if (runtime->hasFunction(0x2BFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x2BFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFECCu; }
        if (ctx->pc != 0x2BFECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFBC0_0x2bfbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFECCu; }
        if (ctx->pc != 0x2BFECCu) { return; }
    }
    ctx->pc = 0x2BFECCu;
label_2bfecc:
    // 0x2bfecc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bfeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bfed0: 0xc0a61dc  jal         func_298770
    ctx->pc = 0x2BFED0u;
    SET_GPR_U32(ctx, 31, 0x2BFED8u);
    ctx->pc = 0x2BFED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFED0u;
            // 0x2bfed4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298770u;
    if (runtime->hasFunction(0x298770u)) {
        auto targetFn = runtime->lookupFunction(0x298770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFED8u; }
        if (ctx->pc != 0x2BFED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298770_0x298770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFED8u; }
        if (ctx->pc != 0x2BFED8u) { return; }
    }
    ctx->pc = 0x2BFED8u;
label_2bfed8:
    // 0x2bfed8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bfed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfedc: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BFEDCu;
    {
        const bool branch_taken_0x2bfedc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEDCu;
            // 0x2bfee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfedc) {
            ctx->pc = 0x2BFF24u;
            goto label_2bff24;
        }
    }
    ctx->pc = 0x2BFEE4u;
    // 0x2bfee4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bfee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bfee8: 0xc0a6218  jal         func_298860
    ctx->pc = 0x2BFEE8u;
    SET_GPR_U32(ctx, 31, 0x2BFEF0u);
    ctx->pc = 0x2BFEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEE8u;
            // 0x2bfeec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298860u;
    if (runtime->hasFunction(0x298860u)) {
        auto targetFn = runtime->lookupFunction(0x298860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEF0u; }
        if (ctx->pc != 0x2BFEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298860_0x298860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEF0u; }
        if (ctx->pc != 0x2BFEF0u) { return; }
    }
    ctx->pc = 0x2BFEF0u;
label_2bfef0:
    // 0x2bfef0: 0xc0afef8  jal         func_2BFBE0
    ctx->pc = 0x2BFEF0u;
    SET_GPR_U32(ctx, 31, 0x2BFEF8u);
    ctx->pc = 0x2BFEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEF0u;
            // 0x2bfef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFBE0u;
    if (runtime->hasFunction(0x2BFBE0u)) {
        auto targetFn = runtime->lookupFunction(0x2BFBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEF8u; }
        if (ctx->pc != 0x2BFEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BFBE0_0x2bfbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEF8u; }
        if (ctx->pc != 0x2BFEF8u) { return; }
    }
    ctx->pc = 0x2BFEF8u;
label_2bfef8:
    // 0x2bfef8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2BFEF8u;
    SET_GPR_U32(ctx, 31, 0x2BFF00u);
    ctx->pc = 0x2BFEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFEF8u;
            // 0x2bfefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF00u; }
        if (ctx->pc != 0x2BFF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF00u; }
        if (ctx->pc != 0x2BFF00u) { return; }
    }
    ctx->pc = 0x2BFF00u;
label_2bff00:
    // 0x2bff00: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bff04: 0xc0a61dc  jal         func_298770
    ctx->pc = 0x2BFF04u;
    SET_GPR_U32(ctx, 31, 0x2BFF0Cu);
    ctx->pc = 0x2BFF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF04u;
            // 0x2bff08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298770u;
    if (runtime->hasFunction(0x298770u)) {
        auto targetFn = runtime->lookupFunction(0x298770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF0Cu; }
        if (ctx->pc != 0x2BFF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298770_0x298770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF0Cu; }
        if (ctx->pc != 0x2BFF0Cu) { return; }
    }
    ctx->pc = 0x2BFF0Cu;
label_2bff0c:
    // 0x2bff0c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2bff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bff10: 0x240500e9  addiu       $a1, $zero, 0xE9
    ctx->pc = 0x2bff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x2bff14: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x2bff14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x2bff18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bff18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff1c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BFF1Cu;
    SET_GPR_U32(ctx, 31, 0x2BFF24u);
    ctx->pc = 0x2BFF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF1Cu;
            // 0x2bff20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF24u; }
        if (ctx->pc != 0x2BFF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF24u; }
        if (ctx->pc != 0x2BFF24u) { return; }
    }
    ctx->pc = 0x2BFF24u;
label_2bff24:
    // 0x2bff24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bff24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff28: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2bff28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bff2c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2bff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bff30: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BFF30u;
    SET_GPR_U32(ctx, 31, 0x2BFF38u);
    ctx->pc = 0x2BFF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF30u;
            // 0x2bff34: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF38u; }
        if (ctx->pc != 0x2BFF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF38u; }
        if (ctx->pc != 0x2BFF38u) { return; }
    }
    ctx->pc = 0x2BFF38u;
label_2bff38:
    // 0x2bff38: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2bff38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bff3c:
    // 0x2bff3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bff3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bff40: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bff40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bff44: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bff44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bff48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bff48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bff4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bff4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bff50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bff50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bff54: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF54u;
            // 0x2bff58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFF5Cu;
    // 0x2bff5c: 0x0  nop
    ctx->pc = 0x2bff5cu;
    // NOP
label_2bff60:
    // 0x2bff60: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2bff60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2bff64: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2bff64u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff68: 0x8c647e44  lw          $a0, 0x7E44($v1)
    ctx->pc = 0x2bff68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32324)));
    // 0x2bff6c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2bff6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff70: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2bff70u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bff74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bff78: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2bff78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff7c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2bff7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff80: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2bff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2bff84: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bff84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bff88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bff8c: 0x24a57e40  addiu       $a1, $a1, 0x7E40
    ctx->pc = 0x2bff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32320));
    // 0x2bff90: 0xac627e44  sw          $v0, 0x7E44($v1)
    ctx->pc = 0x2bff90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32324), GPR_U32(ctx, 2));
    // 0x2bff94: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x2bff94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff98: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2bff98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff9c: 0xc0a5c86  jal         func_297218
    ctx->pc = 0x2BFF9Cu;
    SET_GPR_U32(ctx, 31, 0x2BFFA4u);
    ctx->pc = 0x2BFFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF9Cu;
            // 0x2bffa0: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297218u;
    if (runtime->hasFunction(0x297218u)) {
        auto targetFn = runtime->lookupFunction(0x297218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFA4u; }
        if (ctx->pc != 0x2BFFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297218_0x297218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFA4u; }
        if (ctx->pc != 0x2BFFA4u) { return; }
    }
    ctx->pc = 0x2BFFA4u;
label_2bffa4:
    // 0x2bffa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bffa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFFA8u;
            // 0x2bffac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFFB0u;
label_2bffb0:
    // 0x2bffb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bffb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bffb8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2bffb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2bffbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bffc0: 0x8e047e40  lw          $a0, 0x7E40($s0)
    ctx->pc = 0x2bffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32320)));
    // 0x2bffc4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFFC4u;
    {
        const bool branch_taken_0x2bffc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFFC4u;
            // 0x2bffc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffc4) {
            ctx->pc = 0x2BFFE8u;
            goto label_2bffe8;
        }
    }
    ctx->pc = 0x2BFFCCu;
    // 0x2bffcc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2bffccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2bffd0: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2BFFD0u;
    SET_GPR_U32(ctx, 31, 0x2BFFD8u);
    ctx->pc = 0x2BFFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFFD0u;
            // 0x2bffd4: 0x24a57200  addiu       $a1, $a1, 0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFD8u; }
        if (ctx->pc != 0x2BFFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFD8u; }
        if (ctx->pc != 0x2BFFD8u) { return; }
    }
    ctx->pc = 0x2BFFD8u;
label_2bffd8:
    // 0x2bffd8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bffdc: 0xae007e40  sw          $zero, 0x7E40($s0)
    ctx->pc = 0x2bffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32320), GPR_U32(ctx, 0));
    // 0x2bffe0: 0xac407e44  sw          $zero, 0x7E44($v0)
    ctx->pc = 0x2bffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32324), GPR_U32(ctx, 0));
    // 0x2bffe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bffe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bffe8:
    // 0x2bffe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bffec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bffecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFFF0u;
            // 0x2bfff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFFF8u;
    ctx->pc = 0x2bfff8u;
}

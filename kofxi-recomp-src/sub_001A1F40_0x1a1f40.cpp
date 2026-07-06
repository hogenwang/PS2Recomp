#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1F40
// Address: 0x1a1f40 - 0x1a21d0
void sub_001A1F40_0x1a1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1F40_0x1a1f40");
#endif

    switch (ctx->pc) {
        case 0x1a1f6cu: goto label_1a1f6c;
        case 0x1a1f80u: goto label_1a1f80;
        case 0x1a1f90u: goto label_1a1f90;
        case 0x1a1fa4u: goto label_1a1fa4;
        case 0x1a1fb0u: goto label_1a1fb0;
        case 0x1a1fc0u: goto label_1a1fc0;
        case 0x1a2004u: goto label_1a2004;
        case 0x1a2054u: goto label_1a2054;
        case 0x1a2060u: goto label_1a2060;
        case 0x1a2070u: goto label_1a2070;
        case 0x1a2094u: goto label_1a2094;
        case 0x1a20a0u: goto label_1a20a0;
        case 0x1a20b0u: goto label_1a20b0;
        case 0x1a20d4u: goto label_1a20d4;
        case 0x1a2108u: goto label_1a2108;
        case 0x1a2170u: goto label_1a2170;
        case 0x1a219cu: goto label_1a219c;
        case 0x1a21a8u: goto label_1a21a8;
        default: break;
    }

    ctx->pc = 0x1a1f40u;

    // 0x1a1f40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a1f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a1f44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a1f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a1f4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a1f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a1f50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a1f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a1f54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a1f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a1f58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a1f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a1f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a1f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1f60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1f64: 0xc0472b4  jal         func_11CAD0
    ctx->pc = 0x1A1F64u;
    SET_GPR_U32(ctx, 31, 0x1A1F6Cu);
    ctx->pc = 0x1A1F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F64u;
            // 0x1a1f68: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CAD0u;
    if (runtime->hasFunction(0x11CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x11CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F6Cu; }
        if (ctx->pc != 0x1A1F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CAD0_0x11cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F6Cu; }
        if (ctx->pc != 0x1A1F6Cu) { return; }
    }
    ctx->pc = 0x1A1F6Cu;
label_1a1f6c:
    // 0x1a1f6c: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a1f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a1f70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f78: 0xc0473ca  jal         func_11CF28
    ctx->pc = 0x1A1F78u;
    SET_GPR_U32(ctx, 31, 0x1A1F80u);
    ctx->pc = 0x1A1F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F78u;
            // 0x1a1f7c: 0x24c6eb40  addiu       $a2, $a2, -0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CF28u;
    if (runtime->hasFunction(0x11CF28u)) {
        auto targetFn = runtime->lookupFunction(0x11CF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F80u; }
        if (ctx->pc != 0x1A1F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CF28_0x11cf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F80u; }
        if (ctx->pc != 0x1A1F80u) { return; }
    }
    ctx->pc = 0x1A1F80u;
label_1a1f80:
    // 0x1a1f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1f84: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A1F84u;
    {
        const bool branch_taken_0x1a1f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1f84) {
            ctx->pc = 0x1A1F6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1f6c;
        }
    }
    ctx->pc = 0x1A1F8Cu;
    // 0x1a1f8c: 0x0  nop
    ctx->pc = 0x1a1f8cu;
    // NOP
label_1a1f90:
    // 0x1a1f90: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a1f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a1f94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f9c: 0xc0473ca  jal         func_11CF28
    ctx->pc = 0x1A1F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A1FA4u);
    ctx->pc = 0x1A1FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1F9Cu;
            // 0x1a1fa0: 0x24c6ea40  addiu       $a2, $a2, -0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CF28u;
    if (runtime->hasFunction(0x11CF28u)) {
        auto targetFn = runtime->lookupFunction(0x11CF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FA4u; }
        if (ctx->pc != 0x1A1FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CF28_0x11cf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FA4u; }
        if (ctx->pc != 0x1A1FA4u) { return; }
    }
    ctx->pc = 0x1A1FA4u;
label_1a1fa4:
    // 0x1a1fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1fa8: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A1FA8u;
    {
        const bool branch_taken_0x1a1fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1fa8) {
            ctx->pc = 0x1A1F90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1f90;
        }
    }
    ctx->pc = 0x1A1FB0u;
label_1a1fb0:
    // 0x1a1fb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fb8: 0xc0474fc  jal         func_11D3F0
    ctx->pc = 0x1A1FB8u;
    SET_GPR_U32(ctx, 31, 0x1A1FC0u);
    ctx->pc = 0x1A1FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FB8u;
            // 0x1a1fbc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D3F0u;
    if (runtime->hasFunction(0x11D3F0u)) {
        auto targetFn = runtime->lookupFunction(0x11D3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FC0u; }
        if (ctx->pc != 0x1A1FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D3F0_0x11d3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FC0u; }
        if (ctx->pc != 0x1A1FC0u) { return; }
    }
    ctx->pc = 0x1A1FC0u;
label_1a1fc0:
    // 0x1a1fc0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a1fc4: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1FC4u;
    {
        const bool branch_taken_0x1a1fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1fc4) {
            ctx->pc = 0x1A1FF0u;
            goto label_1a1ff0;
        }
    }
    ctx->pc = 0x1A1FCCu;
    // 0x1a1fcc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a1fd0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1FD0u;
    {
        const bool branch_taken_0x1a1fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1fd0) {
            ctx->pc = 0x1A1FF0u;
            goto label_1a1ff0;
        }
    }
    ctx->pc = 0x1A1FD8u;
    // 0x1a1fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1fdc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1FDCu;
    {
        const bool branch_taken_0x1a1fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1fdc) {
            ctx->pc = 0x1A1FF0u;
            goto label_1a1ff0;
        }
    }
    ctx->pc = 0x1A1FE4u;
    // 0x1a1fe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1FE4u;
    {
        const bool branch_taken_0x1a1fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1fe4) {
            ctx->pc = 0x1A1FF8u;
            goto label_1a1ff8;
        }
    }
    ctx->pc = 0x1A1FECu;
    // 0x1a1fec: 0x0  nop
    ctx->pc = 0x1a1fecu;
    // NOP
label_1a1ff0:
    // 0x1a1ff0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a1ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ff4: 0x0  nop
    ctx->pc = 0x1a1ff4u;
    // NOP
label_1a1ff8:
    // 0x1a1ff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ffc: 0xc0474fc  jal         func_11D3F0
    ctx->pc = 0x1A1FFCu;
    SET_GPR_U32(ctx, 31, 0x1A2004u);
    ctx->pc = 0x1A2000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1FFCu;
            // 0x1a2000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D3F0u;
    if (runtime->hasFunction(0x11D3F0u)) {
        auto targetFn = runtime->lookupFunction(0x11D3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2004u; }
        if (ctx->pc != 0x1A2004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D3F0_0x11d3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2004u; }
        if (ctx->pc != 0x1A2004u) { return; }
    }
    ctx->pc = 0x1A2004u;
label_1a2004:
    // 0x1a2004: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a2004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a2008: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2008u;
    {
        const bool branch_taken_0x1a2008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2008) {
            ctx->pc = 0x1A2030u;
            goto label_1a2030;
        }
    }
    ctx->pc = 0x1A2010u;
    // 0x1a2010: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a2010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a2014: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2014u;
    {
        const bool branch_taken_0x1a2014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2014) {
            ctx->pc = 0x1A2030u;
            goto label_1a2030;
        }
    }
    ctx->pc = 0x1A201Cu;
    // 0x1a201c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a201cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2020: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2020u;
    {
        const bool branch_taken_0x1a2020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2020) {
            ctx->pc = 0x1A2030u;
            goto label_1a2030;
        }
    }
    ctx->pc = 0x1A2028u;
    // 0x1a2028: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2028u;
    {
        const bool branch_taken_0x1a2028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2028) {
            ctx->pc = 0x1A2038u;
            goto label_1a2038;
        }
    }
    ctx->pc = 0x1A2030u;
label_1a2030:
    // 0x1a2030: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a2030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2034: 0x0  nop
    ctx->pc = 0x1a2034u;
    // NOP
label_1a2038:
    // 0x1a2038: 0x1600ffdd  bnez        $s0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A2038u;
    {
        const bool branch_taken_0x1a2038 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2038) {
            ctx->pc = 0x1A1FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1fb0;
        }
    }
    ctx->pc = 0x1A2040u;
    // 0x1a2040: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a2040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2048: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a2048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a204c: 0xc047606  jal         func_11D818
    ctx->pc = 0x1A204Cu;
    SET_GPR_U32(ctx, 31, 0x1A2054u);
    ctx->pc = 0x1A2050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A204Cu;
            // 0x1a2050: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D818u;
    if (runtime->hasFunction(0x11D818u)) {
        auto targetFn = runtime->lookupFunction(0x11D818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2054u; }
        if (ctx->pc != 0x1A2054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D818_0x11d818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2054u; }
        if (ctx->pc != 0x1A2054u) { return; }
    }
    ctx->pc = 0x1A2054u;
label_1a2054:
    // 0x1a2054: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2054u;
    {
        const bool branch_taken_0x1a2054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2054) {
            ctx->pc = 0x1A2080u;
            goto label_1a2080;
        }
    }
    ctx->pc = 0x1A205Cu;
    // 0x1a205c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2060:
    // 0x1a2060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2064: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a2064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2068: 0xc047654  jal         func_11D950
    ctx->pc = 0x1A2068u;
    SET_GPR_U32(ctx, 31, 0x1A2070u);
    ctx->pc = 0x1A206Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2068u;
            // 0x1a206c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D950u;
    if (runtime->hasFunction(0x11D950u)) {
        auto targetFn = runtime->lookupFunction(0x11D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2070u; }
        if (ctx->pc != 0x1A2070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D950_0x11d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2070u; }
        if (ctx->pc != 0x1A2070u) { return; }
    }
    ctx->pc = 0x1A2070u;
label_1a2070:
    // 0x1a2070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2074: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2074u;
    {
        const bool branch_taken_0x1a2074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2074) {
            ctx->pc = 0x1A2078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2074u;
            // 0x1a2078: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2060;
        }
    }
    ctx->pc = 0x1A207Cu;
    // 0x1a207c: 0x0  nop
    ctx->pc = 0x1a207cu;
    // NOP
label_1a2080:
    // 0x1a2080: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2088: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a2088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a208c: 0xc047606  jal         func_11D818
    ctx->pc = 0x1A208Cu;
    SET_GPR_U32(ctx, 31, 0x1A2094u);
    ctx->pc = 0x1A2090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A208Cu;
            // 0x1a2090: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D818u;
    if (runtime->hasFunction(0x11D818u)) {
        auto targetFn = runtime->lookupFunction(0x11D818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2094u; }
        if (ctx->pc != 0x1A2094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D818_0x11d818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2094u; }
        if (ctx->pc != 0x1A2094u) { return; }
    }
    ctx->pc = 0x1A2094u;
label_1a2094:
    // 0x1a2094: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2094u;
    {
        const bool branch_taken_0x1a2094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2094) {
            ctx->pc = 0x1A20C0u;
            goto label_1a20c0;
        }
    }
    ctx->pc = 0x1A209Cu;
    // 0x1a209c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a20a0:
    // 0x1a20a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a20a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a20a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20a8: 0xc047654  jal         func_11D950
    ctx->pc = 0x1A20A8u;
    SET_GPR_U32(ctx, 31, 0x1A20B0u);
    ctx->pc = 0x1A20ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20A8u;
            // 0x1a20ac: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D950u;
    if (runtime->hasFunction(0x11D950u)) {
        auto targetFn = runtime->lookupFunction(0x11D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20B0u; }
        if (ctx->pc != 0x1A20B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D950_0x11d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20B0u; }
        if (ctx->pc != 0x1A20B0u) { return; }
    }
    ctx->pc = 0x1A20B0u;
label_1a20b0:
    // 0x1a20b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a20b4: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A20B4u;
    {
        const bool branch_taken_0x1a20b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a20b4) {
            ctx->pc = 0x1A20B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20B4u;
            // 0x1a20b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A20A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a20a0;
        }
    }
    ctx->pc = 0x1A20BCu;
    // 0x1a20bc: 0x0  nop
    ctx->pc = 0x1a20bcu;
    // NOP
label_1a20c0:
    // 0x1a20c0: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a20c4: 0x24849600  addiu       $a0, $a0, -0x6A00
    ctx->pc = 0x1a20c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    // 0x1a20c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a20c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20cc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A20CCu;
    SET_GPR_U32(ctx, 31, 0x1A20D4u);
    ctx->pc = 0x1A20D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20CCu;
            // 0x1a20d0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20D4u; }
        if (ctx->pc != 0x1A20D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20D4u; }
        if (ctx->pc != 0x1A20D4u) { return; }
    }
    ctx->pc = 0x1A20D4u;
label_1a20d4:
    // 0x1a20d4: 0x3c15009f  lui         $s5, 0x9F
    ctx->pc = 0x1a20d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)159 << 16));
    // 0x1a20d8: 0x3c14009f  lui         $s4, 0x9F
    ctx->pc = 0x1a20d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)159 << 16));
    // 0x1a20dc: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x1a20dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x1a20e0: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x1a20e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x1a20e4: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x1a20e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x1a20e8: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x1a20e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x1a20ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a20ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20f0: 0x26b595f0  addiu       $s5, $s5, -0x6A10
    ctx->pc = 0x1a20f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940144));
    // 0x1a20f4: 0x269495e0  addiu       $s4, $s4, -0x6A20
    ctx->pc = 0x1a20f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940128));
    // 0x1a20f8: 0x2673ea18  addiu       $s3, $s3, -0x15E8
    ctx->pc = 0x1a20f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961688));
    // 0x1a20fc: 0x2652ea10  addiu       $s2, $s2, -0x15F0
    ctx->pc = 0x1a20fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961680));
    // 0x1a2100: 0x2631ea08  addiu       $s1, $s1, -0x15F8
    ctx->pc = 0x1a2100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961672));
    // 0x1a2104: 0x2610ea00  addiu       $s0, $s0, -0x1600
    ctx->pc = 0x1a2104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961664));
label_1a2108:
    // 0x1a2108: 0xa6a00000  sh          $zero, 0x0($s5)
    ctx->pc = 0x1a2108u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a210c: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x1a210cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1a2110: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x1a2110u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2114: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x1a2114u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2118: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1a2118u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a211c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1a211cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2120: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1a2120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2124: 0xa6a00002  sh          $zero, 0x2($s5)
    ctx->pc = 0x1a2124u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2128: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x1a2128u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a212c: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x1a212cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2130: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x1a2130u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2134: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x1a2134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2138: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1a2138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a213c: 0xa6a00004  sh          $zero, 0x4($s5)
    ctx->pc = 0x1a213cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2140: 0xa6800004  sh          $zero, 0x4($s4)
    ctx->pc = 0x1a2140u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2144: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x1a2144u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2148: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1a2148u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a214c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1a214cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2150: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1a2150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2154: 0xa6a00006  sh          $zero, 0x6($s5)
    ctx->pc = 0x1a2154u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2158: 0xa6800006  sh          $zero, 0x6($s4)
    ctx->pc = 0x1a2158u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a215c: 0xa2600003  sb          $zero, 0x3($s3)
    ctx->pc = 0x1a215cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2160: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x1a2160u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2164: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x1a2164u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2168: 0xc068b88  jal         func_1A2E20
    ctx->pc = 0x1A2168u;
    SET_GPR_U32(ctx, 31, 0x1A2170u);
    ctx->pc = 0x1A216Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2168u;
            // 0x1a216c: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E20u;
    if (runtime->hasFunction(0x1A2E20u)) {
        auto targetFn = runtime->lookupFunction(0x1A2E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2170u; }
        if (ctx->pc != 0x1A2170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2E20_0x1a2e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2170u; }
        if (ctx->pc != 0x1A2170u) { return; }
    }
    ctx->pc = 0x1A2170u;
label_1a2170:
    // 0x1a2170: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a2170u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1a2174: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1a2174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1a2178: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x1a2178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a217c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x1a217cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x1a2180: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a2180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1a2184: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1a2184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1a2188: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1a2188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1a218c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1A218Cu;
    {
        const bool branch_taken_0x1a218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A218Cu;
            // 0x1a2190: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a218c) {
            ctx->pc = 0x1A2108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2108;
        }
    }
    ctx->pc = 0x1A2194u;
    // 0x1a2194: 0xc068ba0  jal         func_1A2E80
    ctx->pc = 0x1A2194u;
    SET_GPR_U32(ctx, 31, 0x1A219Cu);
    ctx->pc = 0x1A2E80u;
    if (runtime->hasFunction(0x1A2E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A2E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A219Cu; }
        if (ctx->pc != 0x1A219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2E80_0x1a2e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A219Cu; }
        if (ctx->pc != 0x1A219Cu) { return; }
    }
    ctx->pc = 0x1A219Cu;
label_1a219c:
    // 0x1a219c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21a0: 0xc040454  jal         func_101150
    ctx->pc = 0x1A21A0u;
    SET_GPR_U32(ctx, 31, 0x1A21A8u);
    ctx->pc = 0x1A21A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21A0u;
            // 0x1a21a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21A8u; }
        if (ctx->pc != 0x1A21A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21A8u; }
        if (ctx->pc != 0x1A21A8u) { return; }
    }
    ctx->pc = 0x1A21A8u;
label_1a21a8:
    // 0x1a21a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a21a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a21ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a21acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a21b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a21b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a21b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a21b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a21b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a21b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a21bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a21bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a21c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a21c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a21c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a21c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a21c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A21C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A21CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21C8u;
            // 0x1a21cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A21D0u;
    ctx->pc = 0x1a21d0u;
}

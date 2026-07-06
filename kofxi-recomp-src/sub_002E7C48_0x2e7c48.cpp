#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E7C48
// Address: 0x2e7c48 - 0x2e7e68
void sub_002E7C48_0x2e7c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7C48_0x2e7c48");
#endif

    switch (ctx->pc) {
        case 0x2e7c94u: goto label_2e7c94;
        case 0x2e7cc0u: goto label_2e7cc0;
        case 0x2e7cd4u: goto label_2e7cd4;
        case 0x2e7cf0u: goto label_2e7cf0;
        case 0x2e7d04u: goto label_2e7d04;
        case 0x2e7d2cu: goto label_2e7d2c;
        case 0x2e7d60u: goto label_2e7d60;
        case 0x2e7d74u: goto label_2e7d74;
        case 0x2e7d90u: goto label_2e7d90;
        case 0x2e7dd4u: goto label_2e7dd4;
        case 0x2e7de8u: goto label_2e7de8;
        case 0x2e7dfcu: goto label_2e7dfc;
        case 0x2e7e24u: goto label_2e7e24;
        default: break;
    }

    ctx->pc = 0x2e7c48u;

    // 0x2e7c48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e7c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e7c4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e7c4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c50: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2e7c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2e7c54: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2e7c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2e7c58: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e7c58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c5c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e7c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2e7c60: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2e7c60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e7c64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e7c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e7c68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e7c68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c6c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e7c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e7c70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e7c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c74: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2e7c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2e7c78: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2e7c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2e7c7c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2e7c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2e7c80: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e7c84: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7C84u;
    {
        const bool branch_taken_0x2e7c84 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C84u;
            // 0x2e7c88: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c84) {
            ctx->pc = 0x2E7CA0u;
            goto label_2e7ca0;
        }
    }
    ctx->pc = 0x2E7C8Cu;
    // 0x2e7c8c: 0xc0b9902  jal         func_2E6408
    ctx->pc = 0x2E7C8Cu;
    SET_GPR_U32(ctx, 31, 0x2E7C94u);
    ctx->pc = 0x2E7C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C8Cu;
            // 0x2e7c90: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6408u;
    if (runtime->hasFunction(0x2E6408u)) {
        auto targetFn = runtime->lookupFunction(0x2E6408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C94u; }
        if (ctx->pc != 0x2E7C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6408_0x2e6408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C94u; }
        if (ctx->pc != 0x2E7C94u) { return; }
    }
    ctx->pc = 0x2E7C94u;
label_2e7c94:
    // 0x2e7c94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e7c94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c98: 0x4600066  bltz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2E7C98u;
    {
        const bool branch_taken_0x2e7c98 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2E7C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C98u;
            // 0x2e7c9c: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c98) {
            ctx->pc = 0x2E7E34u;
            goto label_2e7e34;
        }
    }
    ctx->pc = 0x2E7CA0u;
label_2e7ca0:
    // 0x2e7ca0: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E7CA0u;
    {
        const bool branch_taken_0x2e7ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CA0u;
            // 0x2e7ca4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ca0) {
            ctx->pc = 0x2E7D40u;
            goto label_2e7d40;
        }
    }
    ctx->pc = 0x2E7CA8u;
    // 0x2e7ca8: 0x8c53ea08  lw          $s3, -0x15F8($v0)
    ctx->pc = 0x2e7ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e7cac: 0x12600060  beqz        $s3, . + 4 + (0x60 << 2)
    ctx->pc = 0x2E7CACu;
    {
        const bool branch_taken_0x2e7cac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CACu;
            // 0x2e7cb0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cac) {
            ctx->pc = 0x2E7E30u;
            goto label_2e7e30;
        }
    }
    ctx->pc = 0x2E7CB4u;
    // 0x2e7cb4: 0x3c1e0400  lui         $fp, 0x400
    ctx->pc = 0x2e7cb4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)1024 << 16));
    // 0x2e7cb8: 0x62a818  mult        $s5, $v1, $v0
    ctx->pc = 0x2e7cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x2e7cbc: 0x0  nop
    ctx->pc = 0x2e7cbcu;
    // NOP
label_2e7cc0:
    // 0x2e7cc0: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7CC0u;
    {
        const bool branch_taken_0x2e7cc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CC0u;
            // 0x2e7cc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cc0) {
            ctx->pc = 0x2E7CDCu;
            goto label_2e7cdc;
        }
    }
    ctx->pc = 0x2E7CC8u;
    // 0x2e7cc8: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x2e7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e7ccc: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E7CCCu;
    SET_GPR_U32(ctx, 31, 0x2E7CD4u);
    ctx->pc = 0x2E7CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CCCu;
            // 0x2e7cd0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CD4u; }
        if (ctx->pc != 0x2E7CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CD4u; }
        if (ctx->pc != 0x2E7CD4u) { return; }
    }
    ctx->pc = 0x2E7CD4u;
label_2e7cd4:
    // 0x2e7cd4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E7CD4u;
    {
        const bool branch_taken_0x2e7cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7cd4) {
            ctx->pc = 0x2E7CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CD4u;
            // 0x2e7cd8: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E7D30u;
            goto label_2e7d30;
        }
    }
    ctx->pc = 0x2E7CDCu;
label_2e7cdc:
    // 0x2e7cdc: 0x16e0000d  bnez        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x2E7CDCu;
    {
        const bool branch_taken_0x2e7cdc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CDCu;
            // 0x2e7ce0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cdc) {
            ctx->pc = 0x2E7D14u;
            goto label_2e7d14;
        }
    }
    ctx->pc = 0x2E7CE4u;
    // 0x2e7ce4: 0x3c120400  lui         $s2, 0x400
    ctx->pc = 0x2e7ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1024 << 16));
    // 0x2e7ce8: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x2e7ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2e7cec: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x2e7cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e7cf0:
    // 0x2e7cf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7cf4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e7cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e7cf8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2e7cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2e7cfc: 0xc0ba15a  jal         func_2E8568
    ctx->pc = 0x2E7CFCu;
    SET_GPR_U32(ctx, 31, 0x2E7D04u);
    ctx->pc = 0x2E7D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CFCu;
            // 0x2e7d00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8568u;
    if (runtime->hasFunction(0x2E8568u)) {
        auto targetFn = runtime->lookupFunction(0x2E8568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D04u; }
        if (ctx->pc != 0x2E7D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8568_0x2e8568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D04u; }
        if (ctx->pc != 0x2E7D04u) { return; }
    }
    ctx->pc = 0x2E7D04u;
label_2e7d04:
    // 0x2e7d04: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E7D04u;
    {
        const bool branch_taken_0x2e7d04 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2E7D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D04u;
            // 0x2e7d08: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d04) {
            ctx->pc = 0x2E7CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7cf0;
        }
    }
    ctx->pc = 0x2E7D0Cu;
    // 0x2e7d0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7D0Cu;
    {
        const bool branch_taken_0x2e7d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D0Cu;
            // 0x2e7d10: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d0c) {
            ctx->pc = 0x2E7D30u;
            goto label_2e7d30;
        }
    }
    ctx->pc = 0x2E7D14u;
label_2e7d14:
    // 0x2e7d14: 0x26630030  addiu       $v1, $s3, 0x30
    ctx->pc = 0x2e7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2e7d18: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2e7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2e7d1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7d20: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x2e7d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x2e7d24: 0xc0ba15a  jal         func_2E8568
    ctx->pc = 0x2E7D24u;
    SET_GPR_U32(ctx, 31, 0x2E7D2Cu);
    ctx->pc = 0x2E7D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D24u;
            // 0x2e7d28: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8568u;
    if (runtime->hasFunction(0x2E8568u)) {
        auto targetFn = runtime->lookupFunction(0x2E8568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D2Cu; }
        if (ctx->pc != 0x2E7D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8568_0x2e8568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D2Cu; }
        if (ctx->pc != 0x2E7D2Cu) { return; }
    }
    ctx->pc = 0x2E7D2Cu;
label_2e7d2c:
    // 0x2e7d2c: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x2e7d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e7d30:
    // 0x2e7d30: 0x1660ffe3  bnez        $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2E7D30u;
    {
        const bool branch_taken_0x2e7d30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D30u;
            // 0x2e7d34: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d30) {
            ctx->pc = 0x2E7CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7cc0;
        }
    }
    ctx->pc = 0x2E7D38u;
    // 0x2e7d38: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2E7D38u;
    {
        const bool branch_taken_0x2e7d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D38u;
            // 0x2e7d3c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d38) {
            ctx->pc = 0x2E7E38u;
            goto label_2e7e38;
        }
    }
    ctx->pc = 0x2E7D40u;
label_2e7d40:
    // 0x2e7d40: 0x8c53ea08  lw          $s3, -0x15F8($v0)
    ctx->pc = 0x2e7d40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e7d44: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x2E7D44u;
    {
        const bool branch_taken_0x2e7d44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D44u;
            // 0x2e7d48: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d44) {
            ctx->pc = 0x2E7E30u;
            goto label_2e7e30;
        }
    }
    ctx->pc = 0x2E7D4Cu;
    // 0x2e7d4c: 0x3c15fbff  lui         $s5, 0xFBFF
    ctx->pc = 0x2e7d4cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64511 << 16));
    // 0x2e7d50: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2e7d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e7d54: 0x3c1e0400  lui         $fp, 0x400
    ctx->pc = 0x2e7d54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)1024 << 16));
    // 0x2e7d58: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x2e7d58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x2e7d5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e7d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2e7d60:
    // 0x2e7d60: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7D60u;
    {
        const bool branch_taken_0x2e7d60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D60u;
            // 0x2e7d64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d60) {
            ctx->pc = 0x2E7D7Cu;
            goto label_2e7d7c;
        }
    }
    ctx->pc = 0x2E7D68u;
    // 0x2e7d68: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x2e7d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e7d6c: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E7D6Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D74u);
    ctx->pc = 0x2E7D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D6Cu;
            // 0x2e7d70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D74u; }
        if (ctx->pc != 0x2E7D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D74u; }
        if (ctx->pc != 0x2E7D74u) { return; }
    }
    ctx->pc = 0x2E7D74u;
label_2e7d74:
    // 0x2e7d74: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E7D74u;
    {
        const bool branch_taken_0x2e7d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d74) {
            ctx->pc = 0x2E7D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D74u;
            // 0x2e7d78: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E7E28u;
            goto label_2e7e28;
        }
    }
    ctx->pc = 0x2E7D7Cu;
label_2e7d7c:
    // 0x2e7d7c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x2e7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2e7d80: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x2e7d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x2e7d84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E7D84u;
    {
        const bool branch_taken_0x2e7d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D84u;
            // 0x2e7d88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d84) {
            ctx->pc = 0x2E7DBCu;
            goto label_2e7dbc;
        }
    }
    ctx->pc = 0x2E7D8Cu;
    // 0x2e7d8c: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x2e7d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2e7d90:
    // 0x2e7d90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e7d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e7d94: 0x1e20000a  bgtz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E7D94u;
    {
        const bool branch_taken_0x2e7d94 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2E7D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D94u;
            // 0x2e7d98: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d94) {
            ctx->pc = 0x2E7DC0u;
            goto label_2e7dc0;
        }
    }
    ctx->pc = 0x2E7D9Cu;
    // 0x2e7d9c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2e7d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e7da0: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2e7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e7da4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2e7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2e7da8: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x2e7da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x2e7dac: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E7DACu;
    {
        const bool branch_taken_0x2e7dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DACu;
            // 0x2e7db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dac) {
            ctx->pc = 0x2E7D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7d90;
        }
    }
    ctx->pc = 0x2E7DB4u;
    // 0x2e7db4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7DB4u;
    {
        const bool branch_taken_0x2e7db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7db4) {
            ctx->pc = 0x2E7DC4u;
            goto label_2e7dc4;
        }
    }
    ctx->pc = 0x2E7DBCu;
label_2e7dbc:
    // 0x2e7dbc: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x2e7dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2e7dc0:
    // 0x2e7dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7dc4:
    // 0x2e7dc4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7DC4u;
    {
        const bool branch_taken_0x2e7dc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DC4u;
            // 0x2e7dc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dc4) {
            ctx->pc = 0x2E7DD4u;
            goto label_2e7dd4;
        }
    }
    ctx->pc = 0x2E7DCCu;
    // 0x2e7dcc: 0xc0b9aee  jal         func_2E6BB8
    ctx->pc = 0x2E7DCCu;
    SET_GPR_U32(ctx, 31, 0x2E7DD4u);
    ctx->pc = 0x2E7DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DCCu;
            // 0x2e7dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6BB8u;
    if (runtime->hasFunction(0x2E6BB8u)) {
        auto targetFn = runtime->lookupFunction(0x2E6BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7DD4u; }
        if (ctx->pc != 0x2E7DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6BB8_0x2e6bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7DD4u; }
        if (ctx->pc != 0x2E7DD4u) { return; }
    }
    ctx->pc = 0x2E7DD4u;
label_2e7dd4:
    // 0x2e7dd4: 0x16e0000d  bnez        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x2E7DD4u;
    {
        const bool branch_taken_0x2e7dd4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DD4u;
            // 0x2e7dd8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dd4) {
            ctx->pc = 0x2E7E0Cu;
            goto label_2e7e0c;
        }
    }
    ctx->pc = 0x2E7DDCu;
    // 0x2e7ddc: 0x3c12fbff  lui         $s2, 0xFBFF
    ctx->pc = 0x2e7ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64511 << 16));
    // 0x2e7de0: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x2e7de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7de4: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2e7de4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_2e7de8:
    // 0x2e7de8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7dec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e7decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e7df0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e7df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2e7df4: 0xc0ba15a  jal         func_2E8568
    ctx->pc = 0x2E7DF4u;
    SET_GPR_U32(ctx, 31, 0x2E7DFCu);
    ctx->pc = 0x2E7DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DF4u;
            // 0x2e7df8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8568u;
    if (runtime->hasFunction(0x2E8568u)) {
        auto targetFn = runtime->lookupFunction(0x2E8568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7DFCu; }
        if (ctx->pc != 0x2E7DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8568_0x2e8568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7DFCu; }
        if (ctx->pc != 0x2E7DFCu) { return; }
    }
    ctx->pc = 0x2E7DFCu;
label_2e7dfc:
    // 0x2e7dfc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E7DFCu;
    {
        const bool branch_taken_0x2e7dfc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2E7E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DFCu;
            // 0x2e7e00: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dfc) {
            ctx->pc = 0x2E7DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7de8;
        }
    }
    ctx->pc = 0x2E7E04u;
    // 0x2e7e04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7E04u;
    {
        const bool branch_taken_0x2e7e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E04u;
            // 0x2e7e08: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e04) {
            ctx->pc = 0x2E7E28u;
            goto label_2e7e28;
        }
    }
    ctx->pc = 0x2E7E0Cu;
label_2e7e0c:
    // 0x2e7e0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7e10: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2e7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e7e14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7e18: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2e7e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2e7e1c: 0xc0ba15a  jal         func_2E8568
    ctx->pc = 0x2E7E1Cu;
    SET_GPR_U32(ctx, 31, 0x2E7E24u);
    ctx->pc = 0x2E7E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E1Cu;
            // 0x2e7e20: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8568u;
    if (runtime->hasFunction(0x2E8568u)) {
        auto targetFn = runtime->lookupFunction(0x2E8568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E24u; }
        if (ctx->pc != 0x2E7E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8568_0x2e8568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E24u; }
        if (ctx->pc != 0x2E7E24u) { return; }
    }
    ctx->pc = 0x2E7E24u;
label_2e7e24:
    // 0x2e7e24: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x2e7e24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e7e28:
    // 0x2e7e28: 0x1660ffcd  bnez        $s3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2E7E28u;
    {
        const bool branch_taken_0x2e7e28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e28) {
            ctx->pc = 0x2E7D60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7d60;
        }
    }
    ctx->pc = 0x2E7E30u;
label_2e7e30:
    // 0x2e7e30: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2e7e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e7e34:
    // 0x2e7e34: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e7e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e7e38:
    // 0x2e7e38: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2e7e38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e7e3c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2e7e3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e7e40: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2e7e40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e7e44: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2e7e44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7e48: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e7e48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7e4c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2e7e4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7e50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e7e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7e54: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2e7e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7e58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e7e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E5Cu;
            // 0x2e7e60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7E64u;
    // 0x2e7e64: 0x0  nop
    ctx->pc = 0x2e7e64u;
    // NOP
    ctx->pc = 0x2e7e68u;
}

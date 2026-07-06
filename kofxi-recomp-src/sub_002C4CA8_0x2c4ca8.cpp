#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4CA8
// Address: 0x2c4ca8 - 0x2c4dc8
void sub_002C4CA8_0x2c4ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4CA8_0x2c4ca8");
#endif

    switch (ctx->pc) {
        case 0x2c4ce8u: goto label_2c4ce8;
        case 0x2c4d08u: goto label_2c4d08;
        case 0x2c4d2cu: goto label_2c4d2c;
        case 0x2c4d88u: goto label_2c4d88;
        case 0x2c4db0u: goto label_2c4db0;
        default: break;
    }

    ctx->pc = 0x2c4ca8u;

    // 0x2c4ca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c4ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c4cac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c4cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c4cb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c4cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c4cb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c4cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cbc: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C4CBCu;
    {
        const bool branch_taken_0x2c4cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CBCu;
            // 0x2c4cc0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cbc) {
            ctx->pc = 0x2C4DA0u;
            goto label_2c4da0;
        }
    }
    ctx->pc = 0x2C4CC4u;
    // 0x2c4cc4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c4cc8: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C4CC8u;
    {
        const bool branch_taken_0x2c4cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CC8u;
            // 0x2c4ccc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cc8) {
            ctx->pc = 0x2C4DB8u;
            goto label_2c4db8;
        }
    }
    ctx->pc = 0x2C4CD0u;
    // 0x2c4cd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c4cd4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C4CD4u;
    {
        const bool branch_taken_0x2c4cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4cd4) {
            ctx->pc = 0x2C4DA0u;
            goto label_2c4da0;
        }
    }
    ctx->pc = 0x2C4CDCu;
    // 0x2c4cdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c4ce0: 0xc0a6a4e  jal         func_29A938
    ctx->pc = 0x2C4CE0u;
    SET_GPR_U32(ctx, 31, 0x2C4CE8u);
    ctx->pc = 0x2C4CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CE0u;
            // 0x2c4ce4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A938u;
    if (runtime->hasFunction(0x29A938u)) {
        auto targetFn = runtime->lookupFunction(0x29A938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CE8u; }
        if (ctx->pc != 0x2C4CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A938_0x29a938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CE8u; }
        if (ctx->pc != 0x2C4CE8u) { return; }
    }
    ctx->pc = 0x2C4CE8u;
label_2c4ce8:
    // 0x2c4ce8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c4cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c4cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cf8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c4cfc: 0x9c670000  lwu         $a3, 0x0($v1)
    ctx->pc = 0x2c4cfcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4d00: 0xc0a4386  jal         func_290E18
    ctx->pc = 0x2C4D00u;
    SET_GPR_U32(ctx, 31, 0x2C4D08u);
    ctx->pc = 0x2C4D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D00u;
            // 0x2c4d04: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290E18u;
    if (runtime->hasFunction(0x290E18u)) {
        auto targetFn = runtime->lookupFunction(0x290E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D08u; }
        if (ctx->pc != 0x2C4D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290E18_0x290e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D08u; }
        if (ctx->pc != 0x2C4D08u) { return; }
    }
    ctx->pc = 0x2C4D08u;
label_2c4d08:
    // 0x2c4d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c4d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d0c: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4D0Cu;
    {
        const bool branch_taken_0x2c4d0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d0c) {
            ctx->pc = 0x2C4D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D0Cu;
            // 0x2c4d10: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D34u;
            goto label_2c4d34;
        }
    }
    ctx->pc = 0x2C4D14u;
    // 0x2c4d14: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c4d18: 0x240500d1  addiu       $a1, $zero, 0xD1
    ctx->pc = 0x2c4d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x2c4d1c: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x2c4d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2c4d20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d24: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C4D24u;
    SET_GPR_U32(ctx, 31, 0x2C4D2Cu);
    ctx->pc = 0x2C4D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D24u;
            // 0x2c4d28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D2Cu; }
        if (ctx->pc != 0x2C4D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D2Cu; }
        if (ctx->pc != 0x2C4D2Cu) { return; }
    }
    ctx->pc = 0x2C4D2Cu;
label_2c4d2c:
    // 0x2c4d2c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C4D2Cu;
    {
        const bool branch_taken_0x2c4d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d2c) {
            ctx->pc = 0x2C4DA0u;
            goto label_2c4da0;
        }
    }
    ctx->pc = 0x2C4D34u;
label_2c4d34:
    // 0x2c4d34: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x2c4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2c4d38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4d3c: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C4D3Cu;
    {
        const bool branch_taken_0x2c4d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C4D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D3Cu;
            // 0x2c4d40: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d3c) {
            ctx->pc = 0x2C4D94u;
            goto label_2c4d94;
        }
    }
    ctx->pc = 0x2C4D44u;
    // 0x2c4d44: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2c4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c4d48: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2c4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c4d4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4d50: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C4D50u;
    {
        const bool branch_taken_0x2c4d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C4D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D50u;
            // 0x2c4d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d50) {
            ctx->pc = 0x2C4D90u;
            goto label_2c4d90;
        }
    }
    ctx->pc = 0x2C4D58u;
    // 0x2c4d58: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2c4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c4d5c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x2c4d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2c4d60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d64: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2c4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2c4d68: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2c4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c4d6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c4d70: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2c4d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c4d74: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2c4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2c4d78: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2c4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c4d7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c4d80: 0xc0a4296  jal         func_290A58
    ctx->pc = 0x2C4D80u;
    SET_GPR_U32(ctx, 31, 0x2C4D88u);
    ctx->pc = 0x2C4D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D80u;
            // 0x2c4d84: 0x9c660000  lwu         $a2, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290A58u;
    if (runtime->hasFunction(0x290A58u)) {
        auto targetFn = runtime->lookupFunction(0x290A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D88u; }
        if (ctx->pc != 0x2C4D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290A58_0x290a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D88u; }
        if (ctx->pc != 0x2C4D88u) { return; }
    }
    ctx->pc = 0x2C4D88u;
label_2c4d88:
    // 0x2c4d88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4D88u;
    {
        const bool branch_taken_0x2c4d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D88u;
            // 0x2c4d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d88) {
            ctx->pc = 0x2C4DA0u;
            goto label_2c4da0;
        }
    }
    ctx->pc = 0x2C4D90u;
label_2c4d90:
    // 0x2c4d90: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2c4d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2c4d94:
    // 0x2c4d94: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2c4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2c4d98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4D98u;
    {
        const bool branch_taken_0x2c4d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D98u;
            // 0x2c4d9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d98) {
            ctx->pc = 0x2C4DB4u;
            goto label_2c4db4;
        }
    }
    ctx->pc = 0x2C4DA0u;
label_2c4da0:
    // 0x2c4da0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4DA0u;
    {
        const bool branch_taken_0x2c4da0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DA0u;
            // 0x2c4da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4da0) {
            ctx->pc = 0x2C4DB4u;
            goto label_2c4db4;
        }
    }
    ctx->pc = 0x2C4DA8u;
    // 0x2c4da8: 0xc0a734a  jal         func_29CD28
    ctx->pc = 0x2C4DA8u;
    SET_GPR_U32(ctx, 31, 0x2C4DB0u);
    ctx->pc = 0x2C4DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DA8u;
            // 0x2c4dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CD28u;
    if (runtime->hasFunction(0x29CD28u)) {
        auto targetFn = runtime->lookupFunction(0x29CD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DB0u; }
        if (ctx->pc != 0x2C4DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CD28_0x29cd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4DB0u; }
        if (ctx->pc != 0x2C4DB0u) { return; }
    }
    ctx->pc = 0x2C4DB0u;
label_2c4db0:
    // 0x2c4db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4db4:
    // 0x2c4db4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c4db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4db8:
    // 0x2c4db8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c4db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4dbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c4dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DC0u;
            // 0x2c4dc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4DC8u;
    ctx->pc = 0x2c4dc8u;
}

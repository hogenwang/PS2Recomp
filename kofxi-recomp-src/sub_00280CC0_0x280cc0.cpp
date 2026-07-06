#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280CC0
// Address: 0x280cc0 - 0x280e70
void sub_00280CC0_0x280cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280CC0_0x280cc0");
#endif

    switch (ctx->pc) {
        case 0x280d0cu: goto label_280d0c;
        case 0x280d40u: goto label_280d40;
        case 0x280da8u: goto label_280da8;
        case 0x280db0u: goto label_280db0;
        case 0x280ddcu: goto label_280ddc;
        case 0x280e28u: goto label_280e28;
        case 0x280e4cu: goto label_280e4c;
        default: break;
    }

    ctx->pc = 0x280cc0u;

    // 0x280cc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x280cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x280cc4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x280cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x280cc8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x280cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x280ccc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x280cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cd0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x280cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x280cd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x280cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x280cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x280cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x280cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ce0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x280CE0u;
    {
        const bool branch_taken_0x280ce0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280CE0u;
            // 0x280ce4: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ce0) {
            ctx->pc = 0x280D04u;
            goto label_280d04;
        }
    }
    ctx->pc = 0x280CE8u;
    // 0x280ce8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x280ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x280cec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280CECu;
    {
        const bool branch_taken_0x280cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280cec) {
            ctx->pc = 0x280D04u;
            goto label_280d04;
        }
    }
    ctx->pc = 0x280CF4u;
    // 0x280cf4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x280cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x280cf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x280cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x280cfc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280CFCu;
    {
        const bool branch_taken_0x280cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280CFCu;
            // 0x280d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280cfc) {
            ctx->pc = 0x280D20u;
            goto label_280d20;
        }
    }
    ctx->pc = 0x280D04u;
label_280d04:
    // 0x280d04: 0xc0a039c  jal         func_280E70
    ctx->pc = 0x280D04u;
    SET_GPR_U32(ctx, 31, 0x280D0Cu);
    ctx->pc = 0x280E70u;
    if (runtime->hasFunction(0x280E70u)) {
        auto targetFn = runtime->lookupFunction(0x280E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D0Cu; }
        if (ctx->pc != 0x280D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280E70_0x280e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D0Cu; }
        if (ctx->pc != 0x280D0Cu) { return; }
    }
    ctx->pc = 0x280D0Cu;
label_280d0c:
    // 0x280d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d10: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x280D10u;
    {
        const bool branch_taken_0x280d10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x280d10) {
            ctx->pc = 0x280D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280D10u;
            // 0x280d14: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x280D24u;
            goto label_280d24;
        }
    }
    ctx->pc = 0x280D18u;
    // 0x280d18: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x280D18u;
    {
        const bool branch_taken_0x280d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D18u;
            // 0x280d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d18) {
            ctx->pc = 0x280E50u;
            goto label_280e50;
        }
    }
    ctx->pc = 0x280D20u;
label_280d20:
    // 0x280d20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x280d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_280d24:
    // 0x280d24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x280d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d28: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x280d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x280d2c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280d30: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x280d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x280d34: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x280d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x280d38: 0xc0a0554  jal         func_281550
    ctx->pc = 0x280D38u;
    SET_GPR_U32(ctx, 31, 0x280D40u);
    ctx->pc = 0x280D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D38u;
            // 0x280d3c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (runtime->hasFunction(0x281550u)) {
        auto targetFn = runtime->lookupFunction(0x281550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D40u; }
        if (ctx->pc != 0x280D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281550_0x281550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D40u; }
        if (ctx->pc != 0x280D40u) { return; }
    }
    ctx->pc = 0x280D40u;
label_280d40:
    // 0x280d40: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x280d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x280d44: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x280D44u;
    {
        const bool branch_taken_0x280d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D44u;
            // 0x280d48: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d44) {
            ctx->pc = 0x280E14u;
            goto label_280e14;
        }
    }
    ctx->pc = 0x280D4Cu;
    // 0x280d4c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x280d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280d50: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x280d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x280d54: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x280d54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280d58: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x280d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280d5c: 0x262102f  dsubu       $v0, $s3, $v0
    ctx->pc = 0x280d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 2));
    // 0x280d60: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x280d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x280d64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280D64u;
    {
        const bool branch_taken_0x280d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D64u;
            // 0x280d68: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d64) {
            ctx->pc = 0x280D74u;
            goto label_280d74;
        }
    }
    ctx->pc = 0x280D6Cu;
    // 0x280d6c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x280D6Cu;
    {
        const bool branch_taken_0x280d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D6Cu;
            // 0x280d70: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d6c) {
            ctx->pc = 0x280E14u;
            goto label_280e14;
        }
    }
    ctx->pc = 0x280D74u;
label_280d74:
    // 0x280d74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x280d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x280d78: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280D78u;
    {
        const bool branch_taken_0x280d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x280d78) {
            ctx->pc = 0x280D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280D78u;
            // 0x280d7c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x280D88u;
            goto label_280d88;
        }
    }
    ctx->pc = 0x280D80u;
    // 0x280d80: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x280D80u;
    {
        const bool branch_taken_0x280d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D80u;
            // 0x280d84: 0x24060072  addiu       $a2, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d80) {
            ctx->pc = 0x280E14u;
            goto label_280e14;
        }
    }
    ctx->pc = 0x280D88u;
label_280d88:
    // 0x280d88: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280D88u;
    {
        const bool branch_taken_0x280d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280d88) {
            ctx->pc = 0x280DA8u;
            goto label_280da8;
        }
    }
    ctx->pc = 0x280D90u;
    // 0x280d90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x280d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x280d94: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x280d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x280d98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x280D98u;
    {
        const bool branch_taken_0x280d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280d98) {
            ctx->pc = 0x280DD4u;
            goto label_280dd4;
        }
    }
    ctx->pc = 0x280DA0u;
    // 0x280da0: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x280DA0u;
    SET_GPR_U32(ctx, 31, 0x280DA8u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DA8u; }
        if (ctx->pc != 0x280DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DA8u; }
        if (ctx->pc != 0x280DA8u) { return; }
    }
    ctx->pc = 0x280DA8u;
label_280da8:
    // 0x280da8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x280DA8u;
    SET_GPR_U32(ctx, 31, 0x280DB0u);
    ctx->pc = 0x280DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280DA8u;
            // 0x280dac: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DB0u; }
        if (ctx->pc != 0x280DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DB0u; }
        if (ctx->pc != 0x280DB0u) { return; }
    }
    ctx->pc = 0x280DB0u;
label_280db0:
    // 0x280db0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x280db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280db4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x280db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x280db8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x280db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x280dbc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x280dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x280dc0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280DC0u;
    {
        const bool branch_taken_0x280dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x280DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280DC0u;
            // 0x280dc4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280dc0) {
            ctx->pc = 0x280DD0u;
            goto label_280dd0;
        }
    }
    ctx->pc = 0x280DC8u;
    // 0x280dc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x280DC8u;
    {
        const bool branch_taken_0x280dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280DC8u;
            // 0x280dcc: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280dc8) {
            ctx->pc = 0x280E14u;
            goto label_280e14;
        }
    }
    ctx->pc = 0x280DD0u;
label_280dd0:
    // 0x280dd0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x280dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_280dd4:
    // 0x280dd4: 0xc049c48  jal         func_127120
    ctx->pc = 0x280DD4u;
    SET_GPR_U32(ctx, 31, 0x280DDCu);
    ctx->pc = 0x280DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280DD4u;
            // 0x280dd8: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DDCu; }
        if (ctx->pc != 0x280DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DDCu; }
        if (ctx->pc != 0x280DDCu) { return; }
    }
    ctx->pc = 0x280DDCu;
label_280ddc:
    // 0x280ddc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x280ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280de0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x280de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x280de4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x280de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x280de8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x280de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x280dec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x280decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280df0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x280df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280df8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x280DF8u;
    {
        const bool branch_taken_0x280df8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x280DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280DF8u;
            // 0x280dfc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280df8) {
            ctx->pc = 0x280E04u;
            goto label_280e04;
        }
    }
    ctx->pc = 0x280E00u;
    // 0x280e00: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x280e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_280e04:
    // 0x280e04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x280e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280e08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x280e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x280E0Cu;
    {
        const bool branch_taken_0x280e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E0Cu;
            // 0x280e10: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e0c) {
            ctx->pc = 0x280E50u;
            goto label_280e50;
        }
    }
    ctx->pc = 0x280E14u;
label_280e14:
    // 0x280e14: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x280e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x280e18: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x280e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x280e1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e20: 0xc0a5648  jal         func_295920
    ctx->pc = 0x280E20u;
    SET_GPR_U32(ctx, 31, 0x280E28u);
    ctx->pc = 0x280E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E20u;
            // 0x280e24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E28u; }
        if (ctx->pc != 0x280E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E28u; }
        if (ctx->pc != 0x280E28u) { return; }
    }
    ctx->pc = 0x280E28u;
label_280e28:
    // 0x280e28: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280E28u;
    {
        const bool branch_taken_0x280e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E28u;
            // 0x280e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e28) {
            ctx->pc = 0x280E50u;
            goto label_280e50;
        }
    }
    ctx->pc = 0x280E30u;
    // 0x280e30: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x280E30u;
    {
        const bool branch_taken_0x280e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x280e30) {
            ctx->pc = 0x280E44u;
            goto label_280e44;
        }
    }
    ctx->pc = 0x280E38u;
    // 0x280e38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x280e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x280e3c: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280E3Cu;
    {
        const bool branch_taken_0x280e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x280E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E3Cu;
            // 0x280e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e3c) {
            ctx->pc = 0x280E50u;
            goto label_280e50;
        }
    }
    ctx->pc = 0x280E44u;
label_280e44:
    // 0x280e44: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x280E44u;
    SET_GPR_U32(ctx, 31, 0x280E4Cu);
    ctx->pc = 0x280E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E44u;
            // 0x280e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (runtime->hasFunction(0x280ED8u)) {
        auto targetFn = runtime->lookupFunction(0x280ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E4Cu; }
        if (ctx->pc != 0x280E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280ED8_0x280ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E4Cu; }
        if (ctx->pc != 0x280E4Cu) { return; }
    }
    ctx->pc = 0x280E4Cu;
label_280e4c:
    // 0x280e4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280e50:
    // 0x280e50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x280e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x280e54: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x280e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280e58: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x280e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280e5c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x280e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280e60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x280e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280e64: 0x3e00008  jr          $ra
    ctx->pc = 0x280E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E64u;
            // 0x280e68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x280E6Cu;
    // 0x280e6c: 0x0  nop
    ctx->pc = 0x280e6cu;
    // NOP
    ctx->pc = 0x280e70u;
}

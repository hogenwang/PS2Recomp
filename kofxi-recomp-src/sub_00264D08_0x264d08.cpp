#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00264D08
// Address: 0x264d08 - 0x264ef0
void sub_00264D08_0x264d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264D08_0x264d08");
#endif

    switch (ctx->pc) {
        case 0x264d48u: goto label_264d48;
        case 0x264da0u: goto label_264da0;
        case 0x264db0u: goto label_264db0;
        case 0x264dd8u: goto label_264dd8;
        case 0x264e6cu: goto label_264e6c;
        case 0x264ea4u: goto label_264ea4;
        default: break;
    }

    ctx->pc = 0x264d08u;

    // 0x264d08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x264d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x264d0c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x264d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x264d10: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x264d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x264d14: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x264d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x264d18: 0xa6a821  addu        $s5, $a1, $a2
    ctx->pc = 0x264d18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x264d1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x264d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x264d20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x264d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d24: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x264d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x264d28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x264d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d2c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x264d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x264d30: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x264d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x264d34: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x264d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x264d38: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x264d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x264d3c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x264d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x264d40: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x264D40u;
    {
        const bool branch_taken_0x264d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264D40u;
            // 0x264d44: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d40) {
            ctx->pc = 0x264E64u;
            goto label_264e64;
        }
    }
    ctx->pc = 0x264D48u;
label_264d48:
    // 0x264d48: 0x324200c0  andi        $v0, $s2, 0xC0
    ctx->pc = 0x264d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)192);
    // 0x264d4c: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x264D4Cu;
    {
        const bool branch_taken_0x264d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264d4c) {
            ctx->pc = 0x264E9Cu;
            goto label_264e9c;
        }
    }
    ctx->pc = 0x264D54u;
    // 0x264d54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x264d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264d58: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264D58u;
    {
        const bool branch_taken_0x264d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x264D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264D58u;
            // 0x264d5c: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d58) {
            ctx->pc = 0x264D74u;
            goto label_264d74;
        }
    }
    ctx->pc = 0x264D60u;
    // 0x264d60: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x264D60u;
    {
        const bool branch_taken_0x264d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d60) {
            ctx->pc = 0x264E9Cu;
            goto label_264e9c;
        }
    }
    ctx->pc = 0x264D68u;
    // 0x264d68: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x264d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x264d6c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x264d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x264d70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_264d74:
    // 0x264d74: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x264d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x264d78: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x264d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x264d7c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x264D7Cu;
    {
        const bool branch_taken_0x264d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d7c) {
            ctx->pc = 0x264E9Cu;
            goto label_264e9c;
        }
    }
    ctx->pc = 0x264D84u;
    // 0x264d84: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x264D84u;
    {
        const bool branch_taken_0x264d84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x264D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264D84u;
            // 0x264d88: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d84) {
            ctx->pc = 0x264E64u;
            goto label_264e64;
        }
    }
    ctx->pc = 0x264D8Cu;
    // 0x264d8c: 0x241e005c  addiu       $fp, $zero, 0x5C
    ctx->pc = 0x264d8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x264d90: 0x24571a20  addiu       $s7, $v0, 0x1A20
    ctx->pc = 0x264d90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 6688));
    // 0x264d94: 0x24160064  addiu       $s6, $zero, 0x64
    ctx->pc = 0x264d94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x264d98: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x264d98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x264d9c: 0x0  nop
    ctx->pc = 0x264d9cu;
    // NOP
label_264da0:
    // 0x264da0: 0x92710000  lbu         $s1, 0x0($s3)
    ctx->pc = 0x264da0u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x264da4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x264da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x264da8: 0xc0995c0  jal         func_265700
    ctx->pc = 0x264DA8u;
    SET_GPR_U32(ctx, 31, 0x264DB0u);
    ctx->pc = 0x264DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264DA8u;
            // 0x264dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265700u;
    if (runtime->hasFunction(0x265700u)) {
        auto targetFn = runtime->lookupFunction(0x265700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DB0u; }
        if (ctx->pc != 0x264DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265700_0x265700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DB0u; }
        if (ctx->pc != 0x264DB0u) { return; }
    }
    ctx->pc = 0x264DB0u;
label_264db0:
    // 0x264db0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264DB0u;
    {
        const bool branch_taken_0x264db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264DB0u;
            // 0x264db4: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264db0) {
            ctx->pc = 0x264DD0u;
            goto label_264dd0;
        }
    }
    ctx->pc = 0x264DB8u;
    // 0x264db8: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x264db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x264dbc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x264DBCu;
    {
        const bool branch_taken_0x264dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264dbc) {
            ctx->pc = 0x264E9Cu;
            goto label_264e9c;
        }
    }
    ctx->pc = 0x264DC4u;
    // 0x264dc4: 0xa21e0000  sb          $fp, 0x0($s0)
    ctx->pc = 0x264dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 30));
    // 0x264dc8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x264DC8u;
    {
        const bool branch_taken_0x264dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264DC8u;
            // 0x264dcc: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264dc8) {
            ctx->pc = 0x264E54u;
            goto label_264e54;
        }
    }
    ctx->pc = 0x264DD0u;
label_264dd0:
    // 0x264dd0: 0xc0995ce  jal         func_265738
    ctx->pc = 0x264DD0u;
    SET_GPR_U32(ctx, 31, 0x264DD8u);
    ctx->pc = 0x264DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264DD0u;
            // 0x264dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265738u;
    if (runtime->hasFunction(0x265738u)) {
        auto targetFn = runtime->lookupFunction(0x265738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DD8u; }
        if (ctx->pc != 0x264DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265738_0x265738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DD8u; }
        if (ctx->pc != 0x264DD8u) { return; }
    }
    ctx->pc = 0x264DD8u;
label_264dd8:
    // 0x264dd8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x264DD8u;
    {
        const bool branch_taken_0x264dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264DD8u;
            // 0x264ddc: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264dd8) {
            ctx->pc = 0x264E4Cu;
            goto label_264e4c;
        }
    }
    ctx->pc = 0x264DE0u;
    // 0x264de0: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x264de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x264de4: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x264de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x264de8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x264DE8u;
    {
        const bool branch_taken_0x264de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264de8) {
            ctx->pc = 0x264E9Cu;
            goto label_264e9c;
        }
    }
    ctx->pc = 0x264DF0u;
    // 0x264df0: 0x236001b  divu        $zero, $s1, $s6
    ctx->pc = 0x264df0u;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x264df4: 0xa21e0000  sb          $fp, 0x0($s0)
    ctx->pc = 0x264df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 30));
    // 0x264df8: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x264DF8u;
    {
        const bool branch_taken_0x264df8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x264df8) {
            ctx->pc = 0x264DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264DF8u;
            // 0x264dfc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x264E00u;
            goto label_264e00;
        }
    }
    ctx->pc = 0x264E00u;
label_264e00:
    // 0x264e00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264e04: 0x1010  mfhi        $v0
    ctx->pc = 0x264e04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x264e08: 0x1812  mflo        $v1
    ctx->pc = 0x264e08u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x264e0c: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x264e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x264e10: 0x234001b  divu        $zero, $s1, $s4
    ctx->pc = 0x264e10u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x264e14: 0x2810  mfhi        $a1
    ctx->pc = 0x264e14u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x264e18: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x264e18u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x264e1c: 0xb72821  addu        $a1, $a1, $s7
    ctx->pc = 0x264e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x264e20: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x264e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264e24: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x264e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x264e28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264e2c: 0x2012  mflo        $a0
    ctx->pc = 0x264e2cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x264e30: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x264e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x264e34: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x264e34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264e38: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x264e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x264e3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264e40: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x264e40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x264e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264E44u;
    {
        const bool branch_taken_0x264e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264E44u;
            // 0x264e48: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e44) {
            ctx->pc = 0x264E58u;
            goto label_264e58;
        }
    }
    ctx->pc = 0x264E4Cu;
label_264e4c:
    // 0x264e4c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x264E4Cu;
    {
        const bool branch_taken_0x264e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264e4c) {
            ctx->pc = 0x264E9Cu;
            goto label_264e9c;
        }
    }
    ctx->pc = 0x264E54u;
label_264e54:
    // 0x264e54: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x264e54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
label_264e58:
    // 0x264e58: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x264e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x264e5c: 0x1640ffd0  bnez        $s2, . + 4 + (-0x30 << 2)
    ctx->pc = 0x264E5Cu;
    {
        const bool branch_taken_0x264e5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x264E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264E5Cu;
            // 0x264e60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e5c) {
            ctx->pc = 0x264DA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264da0;
        }
    }
    ctx->pc = 0x264E64u;
label_264e64:
    // 0x264e64: 0x92720000  lbu         $s2, 0x0($s3)
    ctx->pc = 0x264e64u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x264e68: 0x1640ffb7  bnez        $s2, . + 4 + (-0x49 << 2)
label_264e6c:
    if (ctx->pc == 0x264E6Cu) {
        ctx->pc = 0x264E6Cu;
            // 0x264e6c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x264E70u;
        goto label_fallthrough_0x264e68;
    }
    ctx->pc = 0x264E68u;
    {
        const bool branch_taken_0x264e68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x264E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264E68u;
            // 0x264e6c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e68) {
            ctx->pc = 0x264D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264d48;
        }
    }
label_fallthrough_0x264e68:
    ctx->pc = 0x264E70u;
    // 0x264e70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x264e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264e74: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264E74u;
    {
        const bool branch_taken_0x264e74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x264E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264E74u;
            // 0x264e78: 0x215102b  sltu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e74) {
            ctx->pc = 0x264E94u;
            goto label_264e94;
        }
    }
    ctx->pc = 0x264E7Cu;
    // 0x264e7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264E7Cu;
    {
        const bool branch_taken_0x264e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264e7c) {
            ctx->pc = 0x264E9Cu;
            goto label_264e9c;
        }
    }
    ctx->pc = 0x264E84u;
    // 0x264e84: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x264e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x264e88: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x264e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x264e8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264e90: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x264e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_264e94:
    // 0x264e94: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x264E94u;
    {
        const bool branch_taken_0x264e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264e94) {
            ctx->pc = 0x264E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264E94u;
            // 0x264e98: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264EB4u;
            goto label_264eb4;
        }
    }
    ctx->pc = 0x264E9Cu;
label_264e9c:
    // 0x264e9c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x264E9Cu;
    SET_GPR_U32(ctx, 31, 0x264EA4u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264EA4u; }
        if (ctx->pc != 0x264EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264EA4u; }
        if (ctx->pc != 0x264EA4u) { return; }
    }
    ctx->pc = 0x264EA4u;
label_264ea4:
    // 0x264ea4: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x264ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x264ea8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x264ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x264eac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264EACu;
    {
        const bool branch_taken_0x264eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264EACu;
            // 0x264eb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264eac) {
            ctx->pc = 0x264EC0u;
            goto label_264ec0;
        }
    }
    ctx->pc = 0x264EB4u;
label_264eb4:
    // 0x264eb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264eb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x264eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264ebc: 0x2031023  subu        $v0, $s0, $v1
    ctx->pc = 0x264ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_264ec0:
    // 0x264ec0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x264ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x264ec4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x264ec4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264ec8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x264ec8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x264ecc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x264eccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x264ed0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x264ed0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264ed4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x264ed4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264ed8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x264ed8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264edc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x264edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264ee0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x264ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264ee4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x264ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x264EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264EE8u;
            // 0x264eec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264EF0u;
    ctx->pc = 0x264ef0u;
}

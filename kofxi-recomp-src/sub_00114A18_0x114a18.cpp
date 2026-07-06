#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00114A18
// Address: 0x114a18 - 0x115098
void sub_00114A18_0x114a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114A18_0x114a18");
#endif

    switch (ctx->pc) {
        case 0x114a64u: goto label_114a64;
        case 0x114a84u: goto label_114a84;
        case 0x114aa0u: goto label_114aa0;
        case 0x114b08u: goto label_114b08;
        case 0x114b20u: goto label_114b20;
        case 0x114b48u: goto label_114b48;
        case 0x114ba4u: goto label_114ba4;
        case 0x114be8u: goto label_114be8;
        case 0x114c0cu: goto label_114c0c;
        case 0x114c38u: goto label_114c38;
        case 0x114c48u: goto label_114c48;
        case 0x114c50u: goto label_114c50;
        case 0x114c64u: goto label_114c64;
        case 0x114c74u: goto label_114c74;
        case 0x114c84u: goto label_114c84;
        case 0x114c8cu: goto label_114c8c;
        case 0x114cc0u: goto label_114cc0;
        case 0x114cfcu: goto label_114cfc;
        case 0x114d14u: goto label_114d14;
        case 0x114d40u: goto label_114d40;
        case 0x114da8u: goto label_114da8;
        case 0x114df8u: goto label_114df8;
        case 0x114e38u: goto label_114e38;
        case 0x114e48u: goto label_114e48;
        case 0x114e50u: goto label_114e50;
        case 0x114e64u: goto label_114e64;
        case 0x114e74u: goto label_114e74;
        case 0x114e84u: goto label_114e84;
        case 0x114e8cu: goto label_114e8c;
        case 0x114eb8u: goto label_114eb8;
        case 0x114f00u: goto label_114f00;
        case 0x114f18u: goto label_114f18;
        case 0x114f48u: goto label_114f48;
        case 0x114fb0u: goto label_114fb0;
        case 0x114fd0u: goto label_114fd0;
        case 0x115010u: goto label_115010;
        case 0x115020u: goto label_115020;
        case 0x115028u: goto label_115028;
        case 0x11503cu: goto label_11503c;
        case 0x11504cu: goto label_11504c;
        case 0x11505cu: goto label_11505c;
        case 0x115064u: goto label_115064;
        default: break;
    }

    ctx->pc = 0x114a18u;

    // 0x114a18: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x114a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x114a1c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114a20: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x114a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x114a24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x114a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a28: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x114a2c: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x114a2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a30: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x114a34: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x114a34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a38: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x114a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x114a3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x114a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a40: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114a44: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x114a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a48: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x114a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x114a4c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x114a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x114a50: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x114a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x114a54: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114a58: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x114a5c: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x114A5Cu;
    SET_GPR_U32(ctx, 31, 0x114A64u);
    ctx->pc = 0x114A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114A5Cu;
            // 0x114a60: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114A64u; }
        if (ctx->pc != 0x114A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114A64u; }
        if (ctx->pc != 0x114A64u) { return; }
    }
    ctx->pc = 0x114A64u;
label_114a64:
    // 0x114a64: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x114a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x114a68: 0x24518280  addiu       $s1, $v0, -0x7D80
    ctx->pc = 0x114a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935168));
    // 0x114a6c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x114a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x114a70: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x114a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x114a74: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114A74u;
    {
        const bool branch_taken_0x114a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114a74) {
            ctx->pc = 0x114A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114A74u;
            // 0x114a78: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114A88u;
            goto label_114a88;
        }
    }
    ctx->pc = 0x114A7Cu;
    // 0x114a7c: 0xc04471c  jal         func_111C70
    ctx->pc = 0x114A7Cu;
    SET_GPR_U32(ctx, 31, 0x114A84u);
    ctx->pc = 0x111C70u;
    if (runtime->hasFunction(0x111C70u)) {
        auto targetFn = runtime->lookupFunction(0x111C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114A84u; }
        if (ctx->pc != 0x114A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C70_0x111c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114A84u; }
        if (ctx->pc != 0x114A84u) { return; }
    }
    ctx->pc = 0x114A84u;
label_114a84:
    // 0x114a84: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x114a84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_114a88:
    // 0x114a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a8c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114a90: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x114A90u;
    {
        const bool branch_taken_0x114a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114A90u;
            // 0x114a94: 0xa222000c  sb          $v0, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a90) {
            ctx->pc = 0x114ACCu;
            goto label_114acc;
        }
    }
    ctx->pc = 0x114A98u;
    // 0x114a98: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x114a98u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x114a9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_114aa0:
    // 0x114aa0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114aa4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x114AA4u;
    {
        const bool branch_taken_0x114aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114AA4u;
            // 0x114aa8: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114aa4) {
            ctx->pc = 0x114AD0u;
            goto label_114ad0;
        }
    }
    ctx->pc = 0x114AACu;
    // 0x114aac: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x114aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x114ab0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114ab0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114ab4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x114ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x114ab8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x114abc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114ABCu;
    {
        const bool branch_taken_0x114abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114abc) {
            ctx->pc = 0x114AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114ABCu;
            // 0x114ac0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114aa0;
        }
    }
    ctx->pc = 0x114AC4u;
    // 0x114ac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114AC4u;
    {
        const bool branch_taken_0x114ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114AC4u;
            // 0x114ac8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ac4) {
            ctx->pc = 0x114AD4u;
            goto label_114ad4;
        }
    }
    ctx->pc = 0x114ACCu;
label_114acc:
    // 0x114acc: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x114accu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_114ad0:
    // 0x114ad0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x114ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_114ad4:
    // 0x114ad4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114AD4u;
    {
        const bool branch_taken_0x114ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114ad4) {
            ctx->pc = 0x114AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114AD4u;
            // 0x114ad8: 0xa220040b  sb          $zero, 0x40B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114ADCu;
            goto label_114adc;
        }
    }
    ctx->pc = 0x114ADCu;
label_114adc:
    // 0x114adc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x114ADCu;
    {
        const bool branch_taken_0x114adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114ADCu;
            // 0x114ae0: 0x2fc20401  sltiu       $v0, $fp, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114adc) {
            ctx->pc = 0x114B18u;
            goto label_114b18;
        }
    }
    ctx->pc = 0x114AE4u;
    // 0x114ae4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x114AE4u;
    {
        const bool branch_taken_0x114ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114AE4u;
            // 0x114ae8: 0x24024601  addiu       $v0, $zero, 0x4601 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ae4) {
            ctx->pc = 0x114B18u;
            goto label_114b18;
        }
    }
    ctx->pc = 0x114AECu;
    // 0x114aec: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x114AECu;
    {
        const bool branch_taken_0x114aec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x114aec) {
            ctx->pc = 0x114B28u;
            goto label_114b28;
        }
    }
    ctx->pc = 0x114AF4u;
    // 0x114af4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x114af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x114af8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x114AF8u;
    {
        const bool branch_taken_0x114af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114af8) {
            ctx->pc = 0x114AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114AF8u;
            // 0x114afc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114B10u;
            goto label_114b10;
        }
    }
    ctx->pc = 0x114B00u;
    // 0x114b00: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114B00u;
    SET_GPR_U32(ctx, 31, 0x114B08u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114B08u; }
        if (ctx->pc != 0x114B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114B08u; }
        if (ctx->pc != 0x114B08u) { return; }
    }
    ctx->pc = 0x114B08u;
label_114b08:
    // 0x114b08: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x114B08u;
    {
        const bool branch_taken_0x114b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B08u;
            // 0x114b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b08) {
            ctx->pc = 0x114C90u;
            goto label_114c90;
        }
    }
    ctx->pc = 0x114B10u;
label_114b10:
    // 0x114b10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114B10u;
    {
        const bool branch_taken_0x114b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114b10) {
            ctx->pc = 0x114B28u;
            goto label_114b28;
        }
    }
    ctx->pc = 0x114B18u;
label_114b18:
    // 0x114b18: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114B18u;
    SET_GPR_U32(ctx, 31, 0x114B20u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114B20u; }
        if (ctx->pc != 0x114B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114B20u; }
        if (ctx->pc != 0x114B20u) { return; }
    }
    ctx->pc = 0x114B20u;
label_114b20:
    // 0x114b20: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x114B20u;
    {
        const bool branch_taken_0x114b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B20u;
            // 0x114b24: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b20) {
            ctx->pc = 0x114C90u;
            goto label_114c90;
        }
    }
    ctx->pc = 0x114B28u;
label_114b28:
    // 0x114b28: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x114B28u;
    {
        const bool branch_taken_0x114b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B28u;
            // 0x114b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b28) {
            ctx->pc = 0x114B70u;
            goto label_114b70;
        }
    }
    ctx->pc = 0x114B30u;
    // 0x114b30: 0x2626040c  addiu       $a2, $s1, 0x40C
    ctx->pc = 0x114b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1036));
    // 0x114b34: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x114b34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x114b38: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114b3c: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x114b3cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x114b40: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x114b40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x114b44: 0x0  nop
    ctx->pc = 0x114b44u;
    // NOP
label_114b48:
    // 0x114b48: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x114b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x114b4c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x114b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x114b50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114b50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114b54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114b58: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x114b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x114b5c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x114b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x114b60: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x114B60u;
    {
        const bool branch_taken_0x114b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114b60) {
            ctx->pc = 0x114B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114b48;
        }
    }
    ctx->pc = 0x114B68u;
    // 0x114b68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114B68u;
    {
        const bool branch_taken_0x114b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B68u;
            // 0x114b6c: 0xae300810  sw          $s0, 0x810($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b68) {
            ctx->pc = 0x114B84u;
            goto label_114b84;
        }
    }
    ctx->pc = 0x114B70u;
label_114b70:
    // 0x114b70: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x114b70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x114b74: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114b78: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x114b78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x114b7c: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x114b7cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x114b80: 0xae300810  sw          $s0, 0x810($s1)
    ctx->pc = 0x114b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
label_114b84:
    // 0x114b84: 0x24e3aa28  addiu       $v1, $a3, -0x55D8
    ctx->pc = 0x114b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945320));
    // 0x114b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114b8c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x114b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x114b90: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x114b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x114b94: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114b98: 0xae35080c  sw          $s5, 0x80C($s1)
    ctx->pc = 0x114b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2060), GPR_U32(ctx, 21));
    // 0x114b9c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x114B9Cu;
    SET_GPR_U32(ctx, 31, 0x114BA4u);
    ctx->pc = 0x114BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114B9Cu;
            // 0x114ba0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114BA4u; }
        if (ctx->pc != 0x114BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114BA4u; }
        if (ctx->pc != 0x114BA4u) { return; }
    }
    ctx->pc = 0x114BA4u;
label_114ba4:
    // 0x114ba4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x114ba4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ba8: 0xae3e0818  sw          $fp, 0x818($s1)
    ctx->pc = 0x114ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 30));
    // 0x114bac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114bb0: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x114bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x114bb4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x114bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x114bb8: 0x24034601  addiu       $v1, $zero, 0x4601
    ctx->pc = 0x114bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x114bbc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x114bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x114bc0: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x114bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x114bc4: 0x16a3000a  bne         $s5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x114BC4u;
    {
        const bool branch_taken_0x114bc4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x114BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114BC4u;
            // 0x114bc8: 0xae220814  sw          $v0, 0x814($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bc4) {
            ctx->pc = 0x114BF0u;
            goto label_114bf0;
        }
    }
    ctx->pc = 0x114BCCu;
    // 0x114bcc: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x114bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x114bd0: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x114bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x114bd4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x114bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x114bd8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x114bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x114bdc: 0x2812  mflo        $a1
    ctx->pc = 0x114bdcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x114be0: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x114BE0u;
    SET_GPR_U32(ctx, 31, 0x114BE8u);
    ctx->pc = 0x114BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114BE0u;
            // 0x114be4: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114BE8u; }
        if (ctx->pc != 0x114BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114BE8u; }
        if (ctx->pc != 0x114BE8u) { return; }
    }
    ctx->pc = 0x114BE8u;
label_114be8:
    // 0x114be8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114BE8u;
    {
        const bool branch_taken_0x114be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114BE8u;
            // 0x114bec: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114be8) {
            ctx->pc = 0x114BF8u;
            goto label_114bf8;
        }
    }
    ctx->pc = 0x114BF0u;
label_114bf0:
    // 0x114bf0: 0x24110017  addiu       $s1, $zero, 0x17
    ctx->pc = 0x114bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x114bf4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x114bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_114bf8:
    // 0x114bf8: 0x2405081c  addiu       $a1, $zero, 0x81C
    ctx->pc = 0x114bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x114bfc: 0x24508280  addiu       $s0, $v0, -0x7D80
    ctx->pc = 0x114bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935168));
    // 0x114c00: 0x26d28ec0  addiu       $s2, $s6, -0x7140
    ctx->pc = 0x114c00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938304));
    // 0x114c04: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x114C04u;
    SET_GPR_U32(ctx, 31, 0x114C0Cu);
    ctx->pc = 0x114C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114C04u;
            // 0x114c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C0Cu; }
        if (ctx->pc != 0x114C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C0Cu; }
        if (ctx->pc != 0x114C0Cu) { return; }
    }
    ctx->pc = 0x114C0Cu;
label_114c0c:
    // 0x114c0c: 0x26e49980  addiu       $a0, $s7, -0x6680
    ctx->pc = 0x114c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941056));
    // 0x114c10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x114c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x114c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c18: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114c1c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x114c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c24: 0x2408081c  addiu       $t0, $zero, 0x81C
    ctx->pc = 0x114c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x114c28: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x114c28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c2c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114c30: 0xc044576  jal         func_1115D8
    ctx->pc = 0x114C30u;
    SET_GPR_U32(ctx, 31, 0x114C38u);
    ctx->pc = 0x114C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114C30u;
            // 0x114c34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C38u; }
        if (ctx->pc != 0x114C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C38u; }
        if (ctx->pc != 0x114C38u) { return; }
    }
    ctx->pc = 0x114C38u;
label_114c38:
    // 0x114c38: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114C38u;
    {
        const bool branch_taken_0x114c38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C38u;
            // 0x114c3c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c38) {
            ctx->pc = 0x114C58u;
            goto label_114c58;
        }
    }
    ctx->pc = 0x114C40u;
    // 0x114c40: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114C40u;
    SET_GPR_U32(ctx, 31, 0x114C48u);
    ctx->pc = 0x114C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114C40u;
            // 0x114c44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C48u; }
        if (ctx->pc != 0x114C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C48u; }
        if (ctx->pc != 0x114C48u) { return; }
    }
    ctx->pc = 0x114C48u;
label_114c48:
    // 0x114c48: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114C48u;
    SET_GPR_U32(ctx, 31, 0x114C50u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C50u; }
        if (ctx->pc != 0x114C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C50u; }
        if (ctx->pc != 0x114C50u) { return; }
    }
    ctx->pc = 0x114C50u;
label_114c50:
    // 0x114c50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114C50u;
    {
        const bool branch_taken_0x114c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C50u;
            // 0x114c54: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c50) {
            ctx->pc = 0x114C90u;
            goto label_114c90;
        }
    }
    ctx->pc = 0x114C58u;
label_114c58:
    // 0x114c58: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x114c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x114c5c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114C5Cu;
    SET_GPR_U32(ctx, 31, 0x114C64u);
    ctx->pc = 0x114C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114C5Cu;
            // 0x114c60: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C64u; }
        if (ctx->pc != 0x114C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C64u; }
        if (ctx->pc != 0x114C64u) { return; }
    }
    ctx->pc = 0x114C64u;
label_114c64:
    // 0x114c64: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114C64u;
    {
        const bool branch_taken_0x114c64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114c64) {
            ctx->pc = 0x114C7Cu;
            goto label_114c7c;
        }
    }
    ctx->pc = 0x114C6Cu;
    // 0x114c6c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114C6Cu;
    SET_GPR_U32(ctx, 31, 0x114C74u);
    ctx->pc = 0x114C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114C6Cu;
            // 0x114c70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C74u; }
        if (ctx->pc != 0x114C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C74u; }
        if (ctx->pc != 0x114C74u) { return; }
    }
    ctx->pc = 0x114C74u;
label_114c74:
    // 0x114c74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114C74u;
    {
        const bool branch_taken_0x114c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C74u;
            // 0x114c78: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c74) {
            ctx->pc = 0x114C90u;
            goto label_114c90;
        }
    }
    ctx->pc = 0x114C7Cu;
label_114c7c:
    // 0x114c7c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x114C7Cu;
    SET_GPR_U32(ctx, 31, 0x114C84u);
    ctx->pc = 0x114C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114C7Cu;
            // 0x114c80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C84u; }
        if (ctx->pc != 0x114C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C84u; }
        if (ctx->pc != 0x114C84u) { return; }
    }
    ctx->pc = 0x114C84u;
label_114c84:
    // 0x114c84: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114C84u;
    SET_GPR_U32(ctx, 31, 0x114C8Cu);
    ctx->pc = 0x114C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114C84u;
            // 0x114c88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C8Cu; }
        if (ctx->pc != 0x114C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114C8Cu; }
        if (ctx->pc != 0x114C8Cu) { return; }
    }
    ctx->pc = 0x114C8Cu;
label_114c8c:
    // 0x114c8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114c90:
    // 0x114c90: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x114c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x114c94: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x114c94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x114c98: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x114c98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114c9c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x114c9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114ca0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x114ca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114ca4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x114ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114ca8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114cac: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114cb0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114cb4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x114CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114CB8u;
            // 0x114cbc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114CC0u;
label_114cc0:
    // 0x114cc0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x114cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x114cc4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x114cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x114cc8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cd0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114cd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x114cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cd8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x114cdc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x114cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x114ce0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x114ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x114ce4: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x114ce4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x114ce8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x114cec: 0x26d28280  addiu       $s2, $s6, -0x7D80
    ctx->pc = 0x114cecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
    // 0x114cf0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x114cf4: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x114CF4u;
    SET_GPR_U32(ctx, 31, 0x114CFCu);
    ctx->pc = 0x114CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114CF4u;
            // 0x114cf8: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114CFCu; }
        if (ctx->pc != 0x114CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114CFCu; }
        if (ctx->pc != 0x114CFCu) { return; }
    }
    ctx->pc = 0x114CFCu;
label_114cfc:
    // 0x114cfc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x114cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x114d00: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x114d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x114d04: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114D04u;
    {
        const bool branch_taken_0x114d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114d04) {
            ctx->pc = 0x114D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114D04u;
            // 0x114d08: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114D18u;
            goto label_114d18;
        }
    }
    ctx->pc = 0x114D0Cu;
    // 0x114d0c: 0xc04471c  jal         func_111C70
    ctx->pc = 0x114D0Cu;
    SET_GPR_U32(ctx, 31, 0x114D14u);
    ctx->pc = 0x111C70u;
    if (runtime->hasFunction(0x111C70u)) {
        auto targetFn = runtime->lookupFunction(0x111C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114D14u; }
        if (ctx->pc != 0x114D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C70_0x111c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114D14u; }
        if (ctx->pc != 0x114D14u) { return; }
    }
    ctx->pc = 0x114D14u;
label_114d14:
    // 0x114d14: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x114d14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_114d18:
    // 0x114d18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d1c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114d20: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x114D20u;
    {
        const bool branch_taken_0x114d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D20u;
            // 0x114d24: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d20) {
            ctx->pc = 0x114D6Cu;
            goto label_114d6c;
        }
    }
    ctx->pc = 0x114D28u;
    // 0x114d28: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x114d28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x114d2c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114d30: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x114d30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x114d34: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x114d34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x114d38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114d3c: 0x0  nop
    ctx->pc = 0x114d3cu;
    // NOP
label_114d40:
    // 0x114d40: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114d44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114D44u;
    {
        const bool branch_taken_0x114d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D44u;
            // 0x114d48: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d44) {
            ctx->pc = 0x114D7Cu;
            goto label_114d7c;
        }
    }
    ctx->pc = 0x114D4Cu;
    // 0x114d4c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x114d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x114d50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114d54: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x114d54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x114d58: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x114d5c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114D5Cu;
    {
        const bool branch_taken_0x114d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114d5c) {
            ctx->pc = 0x114D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114D5Cu;
            // 0x114d60: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114d40;
        }
    }
    ctx->pc = 0x114D64u;
    // 0x114d64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114D64u;
    {
        const bool branch_taken_0x114d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D64u;
            // 0x114d68: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d64) {
            ctx->pc = 0x114D80u;
            goto label_114d80;
        }
    }
    ctx->pc = 0x114D6Cu;
label_114d6c:
    // 0x114d6c: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x114d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x114d70: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114d70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114d74: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x114d74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x114d78: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x114d78u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_114d7c:
    // 0x114d7c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x114d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_114d80:
    // 0x114d80: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114D80u;
    {
        const bool branch_taken_0x114d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114d80) {
            ctx->pc = 0x114D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114D80u;
            // 0x114d84: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114D88u;
            goto label_114d88;
        }
    }
    ctx->pc = 0x114D88u;
label_114d88:
    // 0x114d88: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x114d88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x114d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d90: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114d94: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x114D94u;
    {
        const bool branch_taken_0x114d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D94u;
            // 0x114d98: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d94) {
            ctx->pc = 0x114DCCu;
            goto label_114dcc;
        }
    }
    ctx->pc = 0x114D9Cu;
    // 0x114d9c: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x114d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x114da0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114da4: 0x0  nop
    ctx->pc = 0x114da4u;
    // NOP
label_114da8:
    // 0x114da8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114dac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114DACu;
    {
        const bool branch_taken_0x114dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114DACu;
            // 0x114db0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dac) {
            ctx->pc = 0x114DCCu;
            goto label_114dcc;
        }
    }
    ctx->pc = 0x114DB4u;
    // 0x114db4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x114db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x114db8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114db8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114dbc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x114dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x114dc0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x114dc4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114DC4u;
    {
        const bool branch_taken_0x114dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114dc4) {
            ctx->pc = 0x114DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114DC4u;
            // 0x114dc8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114da8;
        }
    }
    ctx->pc = 0x114DCCu;
label_114dcc:
    // 0x114dcc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x114dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x114dd0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114DD0u;
    {
        const bool branch_taken_0x114dd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114dd0) {
            ctx->pc = 0x114DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114DD0u;
            // 0x114dd4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114DD8u;
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114DD8u;
label_114dd8:
    // 0x114dd8: 0x24e2aa40  addiu       $v0, $a3, -0x55C0
    ctx->pc = 0x114dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945344));
    // 0x114ddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114de0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x114de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x114de4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114de8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x114de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x114dec: 0x26908ec0  addiu       $s0, $s4, -0x7140
    ctx->pc = 0x114decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938304));
    // 0x114df0: 0xc043318  jal         func_10CC60
    ctx->pc = 0x114DF0u;
    SET_GPR_U32(ctx, 31, 0x114DF8u);
    ctx->pc = 0x114DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114DF0u;
            // 0x114df4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114DF8u; }
        if (ctx->pc != 0x114DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114DF8u; }
        if (ctx->pc != 0x114DF8u) { return; }
    }
    ctx->pc = 0x114DF8u;
label_114df8:
    // 0x114df8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114dfc: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x114dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x114e00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114e04: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x114e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x114e08: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x114e08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x114e0c: 0x26a49980  addiu       $a0, $s5, -0x6680
    ctx->pc = 0x114e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941056));
    // 0x114e10: 0x26c78280  addiu       $a3, $s6, -0x7D80
    ctx->pc = 0x114e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
    // 0x114e14: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x114e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x114e18: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e20: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x114e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114e24: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x114e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x114e28: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x114e28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e2c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114e30: 0xc044576  jal         func_1115D8
    ctx->pc = 0x114E30u;
    SET_GPR_U32(ctx, 31, 0x114E38u);
    ctx->pc = 0x114E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114E30u;
            // 0x114e34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E38u; }
        if (ctx->pc != 0x114E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E38u; }
        if (ctx->pc != 0x114E38u) { return; }
    }
    ctx->pc = 0x114E38u;
label_114e38:
    // 0x114e38: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114E38u;
    {
        const bool branch_taken_0x114e38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114E38u;
            // 0x114e3c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e38) {
            ctx->pc = 0x114E58u;
            goto label_114e58;
        }
    }
    ctx->pc = 0x114E40u;
    // 0x114e40: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114E40u;
    SET_GPR_U32(ctx, 31, 0x114E48u);
    ctx->pc = 0x114E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114E40u;
            // 0x114e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E48u; }
        if (ctx->pc != 0x114E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E48u; }
        if (ctx->pc != 0x114E48u) { return; }
    }
    ctx->pc = 0x114E48u;
label_114e48:
    // 0x114e48: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114E48u;
    SET_GPR_U32(ctx, 31, 0x114E50u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E50u; }
        if (ctx->pc != 0x114E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E50u; }
        if (ctx->pc != 0x114E50u) { return; }
    }
    ctx->pc = 0x114E50u;
label_114e50:
    // 0x114e50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114E50u;
    {
        const bool branch_taken_0x114e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114E50u;
            // 0x114e54: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e50) {
            ctx->pc = 0x114E90u;
            goto label_114e90;
        }
    }
    ctx->pc = 0x114E58u;
label_114e58:
    // 0x114e58: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x114e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x114e5c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114E5Cu;
    SET_GPR_U32(ctx, 31, 0x114E64u);
    ctx->pc = 0x114E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114E5Cu;
            // 0x114e60: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E64u; }
        if (ctx->pc != 0x114E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E64u; }
        if (ctx->pc != 0x114E64u) { return; }
    }
    ctx->pc = 0x114E64u;
label_114e64:
    // 0x114e64: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114E64u;
    {
        const bool branch_taken_0x114e64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114e64) {
            ctx->pc = 0x114E7Cu;
            goto label_114e7c;
        }
    }
    ctx->pc = 0x114E6Cu;
    // 0x114e6c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114E6Cu;
    SET_GPR_U32(ctx, 31, 0x114E74u);
    ctx->pc = 0x114E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114E6Cu;
            // 0x114e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E74u; }
        if (ctx->pc != 0x114E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E74u; }
        if (ctx->pc != 0x114E74u) { return; }
    }
    ctx->pc = 0x114E74u;
label_114e74:
    // 0x114e74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114E74u;
    {
        const bool branch_taken_0x114e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114E74u;
            // 0x114e78: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e74) {
            ctx->pc = 0x114E90u;
            goto label_114e90;
        }
    }
    ctx->pc = 0x114E7Cu;
label_114e7c:
    // 0x114e7c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x114E7Cu;
    SET_GPR_U32(ctx, 31, 0x114E84u);
    ctx->pc = 0x114E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114E7Cu;
            // 0x114e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E84u; }
        if (ctx->pc != 0x114E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E84u; }
        if (ctx->pc != 0x114E84u) { return; }
    }
    ctx->pc = 0x114E84u;
label_114e84:
    // 0x114e84: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114E84u;
    SET_GPR_U32(ctx, 31, 0x114E8Cu);
    ctx->pc = 0x114E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114E84u;
            // 0x114e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E8Cu; }
        if (ctx->pc != 0x114E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E8Cu; }
        if (ctx->pc != 0x114E8Cu) { return; }
    }
    ctx->pc = 0x114E8Cu;
label_114e8c:
    // 0x114e8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114e90:
    // 0x114e90: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x114e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114e94: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x114e94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114e98: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x114e98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114e9c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x114e9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114ea0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114ea0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114ea4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114ea8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114eac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x114EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114EB0u;
            // 0x114eb4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114EB8u;
label_114eb8:
    // 0x114eb8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x114eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x114ebc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114ec0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x114ec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ec8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x114ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x114ecc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x114eccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ed0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x114ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x114ed4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x114ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ed8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x114edc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x114edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x114ee0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x114ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x114ee4: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x114ee4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x114ee8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x114ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x114eec: 0x27d28280  addiu       $s2, $fp, -0x7D80
    ctx->pc = 0x114eecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x114ef0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114ef4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x114ef8: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x114EF8u;
    SET_GPR_U32(ctx, 31, 0x114F00u);
    ctx->pc = 0x114EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114EF8u;
            // 0x114efc: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114F00u; }
        if (ctx->pc != 0x114F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114F00u; }
        if (ctx->pc != 0x114F00u) { return; }
    }
    ctx->pc = 0x114F00u;
label_114f00:
    // 0x114f00: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x114f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x114f04: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x114f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x114f08: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114F08u;
    {
        const bool branch_taken_0x114f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114f08) {
            ctx->pc = 0x114F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114F08u;
            // 0x114f0c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114F1Cu;
            goto label_114f1c;
        }
    }
    ctx->pc = 0x114F10u;
    // 0x114f10: 0xc04471c  jal         func_111C70
    ctx->pc = 0x114F10u;
    SET_GPR_U32(ctx, 31, 0x114F18u);
    ctx->pc = 0x111C70u;
    if (runtime->hasFunction(0x111C70u)) {
        auto targetFn = runtime->lookupFunction(0x111C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114F18u; }
        if (ctx->pc != 0x114F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C70_0x111c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114F18u; }
        if (ctx->pc != 0x114F18u) { return; }
    }
    ctx->pc = 0x114F18u;
label_114f18:
    // 0x114f18: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x114f18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_114f1c:
    // 0x114f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114f20: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114f24: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x114F24u;
    {
        const bool branch_taken_0x114f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114F24u;
            // 0x114f28: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f24) {
            ctx->pc = 0x114F74u;
            goto label_114f74;
        }
    }
    ctx->pc = 0x114F2Cu;
    // 0x114f2c: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x114f2cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114f30: 0x3c16003e  lui         $s6, 0x3E
    ctx->pc = 0x114f30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)62 << 16));
    // 0x114f34: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114f34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114f38: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x114f38u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x114f3c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x114f3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x114f40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114f44: 0x0  nop
    ctx->pc = 0x114f44u;
    // NOP
label_114f48:
    // 0x114f48: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114f4c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x114F4Cu;
    {
        const bool branch_taken_0x114f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114F4Cu;
            // 0x114f50: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f4c) {
            ctx->pc = 0x114F88u;
            goto label_114f88;
        }
    }
    ctx->pc = 0x114F54u;
    // 0x114f54: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x114f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x114f58: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114f58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114f5c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x114f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x114f60: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x114f64: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114F64u;
    {
        const bool branch_taken_0x114f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114f64) {
            ctx->pc = 0x114F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114F64u;
            // 0x114f68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114f48;
        }
    }
    ctx->pc = 0x114F6Cu;
    // 0x114f6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x114F6Cu;
    {
        const bool branch_taken_0x114f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114F6Cu;
            // 0x114f70: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f6c) {
            ctx->pc = 0x114F8Cu;
            goto label_114f8c;
        }
    }
    ctx->pc = 0x114F74u;
label_114f74:
    // 0x114f74: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x114f74u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114f78: 0x3c16003e  lui         $s6, 0x3E
    ctx->pc = 0x114f78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)62 << 16));
    // 0x114f7c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114f80: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x114f80u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x114f84: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x114f84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_114f88:
    // 0x114f88: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x114f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_114f8c:
    // 0x114f8c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114F8Cu;
    {
        const bool branch_taken_0x114f8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114f8c) {
            ctx->pc = 0x114F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114F8Cu;
            // 0x114f90: 0xa2400413  sb          $zero, 0x413($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114F94u;
            goto label_114f94;
        }
    }
    ctx->pc = 0x114F94u;
label_114f94:
    // 0x114f94: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x114f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x114f98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x114f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114f9c: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x114f9cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x114fa0: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x114fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x114fa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fa8: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x114FA8u;
    SET_GPR_U32(ctx, 31, 0x114FB0u);
    ctx->pc = 0x114FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114FA8u;
            // 0x114fac: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114FB0u; }
        if (ctx->pc != 0x114FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114FB0u; }
        if (ctx->pc != 0x114FB0u) { return; }
    }
    ctx->pc = 0x114FB0u;
label_114fb0:
    // 0x114fb0: 0x26908ec0  addiu       $s0, $s4, -0x7140
    ctx->pc = 0x114fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938304));
    // 0x114fb4: 0x26c3aa58  addiu       $v1, $s6, -0x55A8
    ctx->pc = 0x114fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945368));
    // 0x114fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114fbc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x114fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x114fc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114fc4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x114fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x114fc8: 0xc043318  jal         func_10CC60
    ctx->pc = 0x114FC8u;
    SET_GPR_U32(ctx, 31, 0x114FD0u);
    ctx->pc = 0x114FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114FC8u;
            // 0x114fcc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114FD0u; }
        if (ctx->pc != 0x114FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114FD0u; }
        if (ctx->pc != 0x114FD0u) { return; }
    }
    ctx->pc = 0x114FD0u;
label_114fd0:
    // 0x114fd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fd4: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x114fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x114fd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114fdc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x114fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x114fe0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x114fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x114fe4: 0x26e49980  addiu       $a0, $s7, -0x6680
    ctx->pc = 0x114fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941056));
    // 0x114fe8: 0x27c78280  addiu       $a3, $fp, -0x7D80
    ctx->pc = 0x114fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x114fec: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x114fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x114ff0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ff8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x114ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114ffc: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x114ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x115000: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x115000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115004: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115008: 0xc044576  jal         func_1115D8
    ctx->pc = 0x115008u;
    SET_GPR_U32(ctx, 31, 0x115010u);
    ctx->pc = 0x11500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115008u;
            // 0x11500c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115010u; }
        if (ctx->pc != 0x115010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115010u; }
        if (ctx->pc != 0x115010u) { return; }
    }
    ctx->pc = 0x115010u;
label_115010:
    // 0x115010: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115010u;
    {
        const bool branch_taken_0x115010 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115010u;
            // 0x115014: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115010) {
            ctx->pc = 0x115030u;
            goto label_115030;
        }
    }
    ctx->pc = 0x115018u;
    // 0x115018: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x115018u;
    SET_GPR_U32(ctx, 31, 0x115020u);
    ctx->pc = 0x11501Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115018u;
            // 0x11501c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115020u; }
        if (ctx->pc != 0x115020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115020u; }
        if (ctx->pc != 0x115020u) { return; }
    }
    ctx->pc = 0x115020u;
label_115020:
    // 0x115020: 0xc0446de  jal         func_111B78
    ctx->pc = 0x115020u;
    SET_GPR_U32(ctx, 31, 0x115028u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115028u; }
        if (ctx->pc != 0x115028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115028u; }
        if (ctx->pc != 0x115028u) { return; }
    }
    ctx->pc = 0x115028u;
label_115028:
    // 0x115028: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115028u;
    {
        const bool branch_taken_0x115028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115028u;
            // 0x11502c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115028) {
            ctx->pc = 0x115068u;
            goto label_115068;
        }
    }
    ctx->pc = 0x115030u;
label_115030:
    // 0x115030: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x115030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x115034: 0xc0446de  jal         func_111B78
    ctx->pc = 0x115034u;
    SET_GPR_U32(ctx, 31, 0x11503Cu);
    ctx->pc = 0x115038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115034u;
            // 0x115038: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11503Cu; }
        if (ctx->pc != 0x11503Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11503Cu; }
        if (ctx->pc != 0x11503Cu) { return; }
    }
    ctx->pc = 0x11503Cu;
label_11503c:
    // 0x11503c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11503Cu;
    {
        const bool branch_taken_0x11503c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11503c) {
            ctx->pc = 0x115054u;
            goto label_115054;
        }
    }
    ctx->pc = 0x115044u;
    // 0x115044: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x115044u;
    SET_GPR_U32(ctx, 31, 0x11504Cu);
    ctx->pc = 0x115048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115044u;
            // 0x115048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11504Cu; }
        if (ctx->pc != 0x11504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11504Cu; }
        if (ctx->pc != 0x11504Cu) { return; }
    }
    ctx->pc = 0x11504Cu;
label_11504c:
    // 0x11504c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11504Cu;
    {
        const bool branch_taken_0x11504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11504Cu;
            // 0x115050: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11504c) {
            ctx->pc = 0x115068u;
            goto label_115068;
        }
    }
    ctx->pc = 0x115054u;
label_115054:
    // 0x115054: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x115054u;
    SET_GPR_U32(ctx, 31, 0x11505Cu);
    ctx->pc = 0x115058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115054u;
            // 0x115058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11505Cu; }
        if (ctx->pc != 0x11505Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11505Cu; }
        if (ctx->pc != 0x11505Cu) { return; }
    }
    ctx->pc = 0x11505Cu;
label_11505c:
    // 0x11505c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11505Cu;
    SET_GPR_U32(ctx, 31, 0x115064u);
    ctx->pc = 0x115060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11505Cu;
            // 0x115060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115064u; }
        if (ctx->pc != 0x115064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115064u; }
        if (ctx->pc != 0x115064u) { return; }
    }
    ctx->pc = 0x115064u;
label_115064:
    // 0x115064: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_115068:
    // 0x115068: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x115068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11506c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x11506cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x115070: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x115070u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x115074: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x115074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115078: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x115078u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11507c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11507cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115080: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115084: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x115084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115088: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11508c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11508cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115090: 0x3e00008  jr          $ra
    ctx->pc = 0x115090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115090u;
            // 0x115094: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115098u;
    ctx->pc = 0x115098u;
}

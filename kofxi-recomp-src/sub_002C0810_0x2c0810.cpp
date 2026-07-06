#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0810
// Address: 0x2c0810 - 0x2c0938
void sub_002C0810_0x2c0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0810_0x2c0810");
#endif

    switch (ctx->pc) {
        case 0x2c0840u: goto label_2c0840;
        case 0x2c0850u: goto label_2c0850;
        case 0x2c0874u: goto label_2c0874;
        case 0x2c0888u: goto label_2c0888;
        case 0x2c08b0u: goto label_2c08b0;
        case 0x2c08ccu: goto label_2c08cc;
        case 0x2c08e0u: goto label_2c08e0;
        case 0x2c08f4u: goto label_2c08f4;
        case 0x2c0900u: goto label_2c0900;
        case 0x2c0918u: goto label_2c0918;
        default: break;
    }

    ctx->pc = 0x2c0810u;

    // 0x2c0810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c0810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c0814: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c0814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c0818: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c0818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c081c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c081cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0820: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0824: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c0824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0828: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c0828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c082c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c082cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0830: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0830u;
    {
        const bool branch_taken_0x2c0830 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0830u;
            // 0x2c0834: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0830) {
            ctx->pc = 0x2C0848u;
            goto label_2c0848;
        }
    }
    ctx->pc = 0x2C0838u;
    // 0x2c0838: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2C0838u;
    SET_GPR_U32(ctx, 31, 0x2C0840u);
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0840u; }
        if (ctx->pc != 0x2C0840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0840u; }
        if (ctx->pc != 0x2C0840u) { return; }
    }
    ctx->pc = 0x2C0840u;
label_2c0840:
    // 0x2c0840: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C0840u;
    {
        const bool branch_taken_0x2c0840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0840u;
            // 0x2c0844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0840) {
            ctx->pc = 0x2C091Cu;
            goto label_2c091c;
        }
    }
    ctx->pc = 0x2C0848u;
label_2c0848:
    // 0x2c0848: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0848u;
    {
        const bool branch_taken_0x2c0848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0848u;
            // 0x2c084c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0848) {
            ctx->pc = 0x2C0854u;
            goto label_2c0854;
        }
    }
    ctx->pc = 0x2C0850u;
label_2c0850:
    // 0x2c0850: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c0854:
    // 0x2c0854: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c0854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c0858: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c0858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c085c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C085Cu;
    {
        const bool branch_taken_0x2c085c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C085Cu;
            // 0x2c0860: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c085c) {
            ctx->pc = 0x2C0890u;
            goto label_2c0890;
        }
    }
    ctx->pc = 0x2C0864u;
    // 0x2c0864: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2c0864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c0868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c086c: 0xc0afcf8  jal         func_2BF3E0
    ctx->pc = 0x2C086Cu;
    SET_GPR_U32(ctx, 31, 0x2C0874u);
    ctx->pc = 0x2C0870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C086Cu;
            // 0x2c0870: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF3E0u;
    if (runtime->hasFunction(0x2BF3E0u)) {
        auto targetFn = runtime->lookupFunction(0x2BF3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0874u; }
        if (ctx->pc != 0x2C0874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF3E0_0x2bf3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0874u; }
        if (ctx->pc != 0x2C0874u) { return; }
    }
    ctx->pc = 0x2C0874u;
label_2c0874:
    // 0x2c0874: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c0874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0878: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2C0878u;
    {
        const bool branch_taken_0x2c0878 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0878u;
            // 0x2c087c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0878) {
            ctx->pc = 0x2C08B8u;
            goto label_2c08b8;
        }
    }
    ctx->pc = 0x2C0880u;
    // 0x2c0880: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2C0880u;
    SET_GPR_U32(ctx, 31, 0x2C0888u);
    ctx->pc = 0x2C0884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0880u;
            // 0x2c0884: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0888u; }
        if (ctx->pc != 0x2C0888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0888u; }
        if (ctx->pc != 0x2C0888u) { return; }
    }
    ctx->pc = 0x2C0888u;
label_2c0888:
    // 0x2c0888: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C0888u;
    {
        const bool branch_taken_0x2c0888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0888) {
            ctx->pc = 0x2C088Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0888u;
            // 0x2c088c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0850;
        }
    }
    ctx->pc = 0x2C0890u;
label_2c0890:
    // 0x2c0890: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C0890u;
    {
        const bool branch_taken_0x2c0890 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0890u;
            // 0x2c0894: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0890) {
            ctx->pc = 0x2C08D4u;
            goto label_2c08d4;
        }
    }
    ctx->pc = 0x2C0898u;
    // 0x2c0898: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c0898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c089c: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x2c089cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x2c08a0: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x2c08a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x2c08a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c08a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08a8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C08A8u;
    SET_GPR_U32(ctx, 31, 0x2C08B0u);
    ctx->pc = 0x2C08ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08A8u;
            // 0x2c08ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08B0u; }
        if (ctx->pc != 0x2C08B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08B0u; }
        if (ctx->pc != 0x2C08B0u) { return; }
    }
    ctx->pc = 0x2C08B0u;
label_2c08b0:
    // 0x2c08b0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C08B0u;
    {
        const bool branch_taken_0x2c08b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C08B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08B0u;
            // 0x2c08b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08b0) {
            ctx->pc = 0x2C091Cu;
            goto label_2c091c;
        }
    }
    ctx->pc = 0x2C08B8u;
label_2c08b8:
    // 0x2c08b8: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x2c08b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x2c08bc: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x2c08bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x2c08c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c08c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08c4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C08C4u;
    SET_GPR_U32(ctx, 31, 0x2C08CCu);
    ctx->pc = 0x2C08C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08C4u;
            // 0x2c08c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08CCu; }
        if (ctx->pc != 0x2C08CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08CCu; }
        if (ctx->pc != 0x2C08CCu) { return; }
    }
    ctx->pc = 0x2C08CCu;
label_2c08cc:
    // 0x2c08cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C08CCu;
    {
        const bool branch_taken_0x2c08cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C08D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08CCu;
            // 0x2c08d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08cc) {
            ctx->pc = 0x2C091Cu;
            goto label_2c091c;
        }
    }
    ctx->pc = 0x2C08D4u;
label_2c08d4:
    // 0x2c08d4: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C08D4u;
    {
        const bool branch_taken_0x2c08d4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2c08d4) {
            ctx->pc = 0x2C0908u;
            goto label_2c0908;
        }
    }
    ctx->pc = 0x2C08DCu;
    // 0x2c08dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2c08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c08e0:
    // 0x2c08e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c08e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c08e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c08e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c08ec: 0xc0afcf8  jal         func_2BF3E0
    ctx->pc = 0x2C08ECu;
    SET_GPR_U32(ctx, 31, 0x2C08F4u);
    ctx->pc = 0x2C08F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08ECu;
            // 0x2c08f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF3E0u;
    if (runtime->hasFunction(0x2BF3E0u)) {
        auto targetFn = runtime->lookupFunction(0x2BF3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08F4u; }
        if (ctx->pc != 0x2C08F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF3E0_0x2bf3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08F4u; }
        if (ctx->pc != 0x2C08F4u) { return; }
    }
    ctx->pc = 0x2C08F4u;
label_2c08f4:
    // 0x2c08f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c08f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08f8: 0xc0a723e  jal         func_29C8F8
    ctx->pc = 0x2C08F8u;
    SET_GPR_U32(ctx, 31, 0x2C0900u);
    ctx->pc = 0x2C08FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C08F8u;
            // 0x2c08fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F8u;
    if (runtime->hasFunction(0x29C8F8u)) {
        auto targetFn = runtime->lookupFunction(0x29C8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0900u; }
        if (ctx->pc != 0x2C0900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C8F8_0x29c8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0900u; }
        if (ctx->pc != 0x2C0900u) { return; }
    }
    ctx->pc = 0x2C0900u;
label_2c0900:
    // 0x2c0900: 0x603fff7  bgezl       $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C0900u;
    {
        const bool branch_taken_0x2c0900 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2c0900) {
            ctx->pc = 0x2C0904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0900u;
            // 0x2c0904: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C08E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c08e0;
        }
    }
    ctx->pc = 0x2C0908u;
label_2c0908:
    // 0x2c0908: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0908u;
    {
        const bool branch_taken_0x2c0908 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0908u;
            // 0x2c090c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0908) {
            ctx->pc = 0x2C0918u;
            goto label_2c0918;
        }
    }
    ctx->pc = 0x2C0910u;
    // 0x2c0910: 0xc0a723e  jal         func_29C8F8
    ctx->pc = 0x2C0910u;
    SET_GPR_U32(ctx, 31, 0x2C0918u);
    ctx->pc = 0x2C0914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0910u;
            // 0x2c0914: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F8u;
    if (runtime->hasFunction(0x29C8F8u)) {
        auto targetFn = runtime->lookupFunction(0x29C8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0918u; }
        if (ctx->pc != 0x2C0918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C8F8_0x29c8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0918u; }
        if (ctx->pc != 0x2C0918u) { return; }
    }
    ctx->pc = 0x2C0918u;
label_2c0918:
    // 0x2c0918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c091c:
    // 0x2c091c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c091cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0920: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c0920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0924: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c0924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0928: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c0928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c092c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c092cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0930: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0930u;
            // 0x2c0934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0938u;
    ctx->pc = 0x2c0938u;
}

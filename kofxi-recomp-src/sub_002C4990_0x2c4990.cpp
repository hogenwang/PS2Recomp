#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4990
// Address: 0x2c4990 - 0x2c4a10
void sub_002C4990_0x2c4990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4990_0x2c4990");
#endif

    switch (ctx->pc) {
        case 0x2c49a0u: goto label_2c49a0;
        case 0x2c49a4u: goto label_2c49a4;
        case 0x2c49b4u: goto label_2c49b4;
        case 0x2c49ccu: goto label_2c49cc;
        case 0x2c49dcu: goto label_2c49dc;
        case 0x2c49ecu: goto label_2c49ec;
        case 0x2c4a00u: goto label_2c4a00;
        default: break;
    }

    ctx->pc = 0x2c4990u;

    // 0x2c4990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c4994: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c4994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c4998: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c4998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c499c: 0xc0a8bf6  jal         func_2A2FD8
label_2c49a0:
    if (ctx->pc == 0x2C49A0u) {
        ctx->pc = 0x2C49A0u;
            // 0x2c49a0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2C49A4u;
        goto label_2c49a4;
    }
    ctx->pc = 0x2C499Cu;
    SET_GPR_U32(ctx, 31, 0x2C49A4u);
    ctx->pc = 0x2C49A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C499Cu;
            // 0x2c49a0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49A4u; }
        if (ctx->pc != 0x2C49A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49A4u; }
        if (ctx->pc != 0x2C49A4u) { return; }
    }
    ctx->pc = 0x2C49A4u;
label_2c49a4:
    // 0x2c49a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c49a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49a8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C49A8u;
    {
        const bool branch_taken_0x2c49a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C49ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49A8u;
            // 0x2c49ac: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49a8) {
            ctx->pc = 0x2C49D4u;
            goto label_2c49d4;
        }
    }
    ctx->pc = 0x2C49B0u;
    // 0x2c49b0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2c49b4:
    // 0x2c49b4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c49b8: 0x240500d7  addiu       $a1, $zero, 0xD7
    ctx->pc = 0x2c49b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x2c49bc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c49bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c49c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c49c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49c4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C49C4u;
    SET_GPR_U32(ctx, 31, 0x2C49CCu);
    ctx->pc = 0x2C49C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49C4u;
            // 0x2c49c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49CCu; }
        if (ctx->pc != 0x2C49CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49CCu; }
        if (ctx->pc != 0x2C49CCu) { return; }
    }
    ctx->pc = 0x2C49CCu;
label_2c49cc:
    // 0x2c49cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C49CCu;
    {
        const bool branch_taken_0x2c49cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C49D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49CCu;
            // 0x2c49d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49cc) {
            ctx->pc = 0x2C49FCu;
            goto label_2c49fc;
        }
    }
    ctx->pc = 0x2C49D4u;
label_2c49d4:
    // 0x2c49d4: 0xc0b09ee  jal         func_2C27B8
    ctx->pc = 0x2C49D4u;
    SET_GPR_U32(ctx, 31, 0x2C49DCu);
    ctx->pc = 0x2C27B8u;
    if (runtime->hasFunction(0x2C27B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C27B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49DCu; }
        if (ctx->pc != 0x2C49DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C27B8_0x2c27b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49DCu; }
        if (ctx->pc != 0x2C49DCu) { return; }
    }
    ctx->pc = 0x2C49DCu;
label_2c49dc:
    // 0x2c49dc: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C49DCu;
    {
        const bool branch_taken_0x2c49dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C49E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49DCu;
            // 0x2c49e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49dc) {
            ctx->pc = 0x2C49CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c49cc;
        }
    }
    ctx->pc = 0x2C49E4u;
    // 0x2c49e4: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C49E4u;
    SET_GPR_U32(ctx, 31, 0x2C49ECu);
    ctx->pc = 0x2C49E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49E4u;
            // 0x2c49e8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (runtime->hasFunction(0x281BC8u)) {
        auto targetFn = runtime->lookupFunction(0x281BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49ECu; }
        if (ctx->pc != 0x2C49ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BC8_0x281bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C49ECu; }
        if (ctx->pc != 0x2C49ECu) { return; }
    }
    ctx->pc = 0x2C49ECu;
label_2c49ec:
    // 0x2c49ec: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C49ECu;
    {
        const bool branch_taken_0x2c49ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C49F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C49ECu;
            // 0x2c49f0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49ec) {
            ctx->pc = 0x2C49CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c49cc;
        }
    }
    ctx->pc = 0x2C49F4u;
    // 0x2c49f4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2c49f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2c49f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c49f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c49fc:
    // 0x2c49fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c49fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4a00:
    // 0x2c4a00: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c4a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4a04: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4A04u;
            // 0x2c4a08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4A0Cu;
    // 0x2c4a0c: 0x0  nop
    ctx->pc = 0x2c4a0cu;
    // NOP
    ctx->pc = 0x2c4a10u;
}

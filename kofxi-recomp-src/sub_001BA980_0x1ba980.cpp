#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA980
// Address: 0x1ba980 - 0x1ba9f0
void sub_001BA980_0x1ba980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA980_0x1ba980");
#endif

    switch (ctx->pc) {
        case 0x1ba980u: goto label_1ba980;
        case 0x1ba984u: goto label_1ba984;
        case 0x1ba988u: goto label_1ba988;
        case 0x1ba98cu: goto label_1ba98c;
        case 0x1ba990u: goto label_1ba990;
        case 0x1ba994u: goto label_1ba994;
        case 0x1ba998u: goto label_1ba998;
        case 0x1ba99cu: goto label_1ba99c;
        case 0x1ba9a0u: goto label_1ba9a0;
        case 0x1ba9a4u: goto label_1ba9a4;
        case 0x1ba9a8u: goto label_1ba9a8;
        case 0x1ba9acu: goto label_1ba9ac;
        case 0x1ba9b0u: goto label_1ba9b0;
        case 0x1ba9b4u: goto label_1ba9b4;
        case 0x1ba9b8u: goto label_1ba9b8;
        case 0x1ba9bcu: goto label_1ba9bc;
        case 0x1ba9c0u: goto label_1ba9c0;
        case 0x1ba9c4u: goto label_1ba9c4;
        case 0x1ba9c8u: goto label_1ba9c8;
        case 0x1ba9ccu: goto label_1ba9cc;
        case 0x1ba9d0u: goto label_1ba9d0;
        case 0x1ba9d4u: goto label_1ba9d4;
        case 0x1ba9d8u: goto label_1ba9d8;
        case 0x1ba9dcu: goto label_1ba9dc;
        case 0x1ba9e0u: goto label_1ba9e0;
        case 0x1ba9e4u: goto label_1ba9e4;
        case 0x1ba9e8u: goto label_1ba9e8;
        case 0x1ba9ecu: goto label_1ba9ec;
        default: break;
    }

    ctx->pc = 0x1ba980u;

label_1ba980:
    // 0x1ba980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ba984:
    // 0x1ba984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ba988:
    // 0x1ba988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba98c:
    // 0x1ba98c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_1ba990:
    if (ctx->pc == 0x1BA990u) {
        ctx->pc = 0x1BA990u;
            // 0x1ba990: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1BA994u;
        goto label_1ba994;
    }
    ctx->pc = 0x1BA98Cu;
    {
        const bool branch_taken_0x1ba98c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA98Cu;
            // 0x1ba990: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba98c) {
            ctx->pc = 0x1BA9A8u;
            goto label_1ba9a8;
        }
    }
    ctx->pc = 0x1BA994u;
label_1ba994:
    // 0x1ba994: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ba998:
    // 0x1ba998: 0xc06ba0a  jal         func_1AE828
label_1ba99c:
    if (ctx->pc == 0x1BA99Cu) {
        ctx->pc = 0x1BA99Cu;
            // 0x1ba99c: 0x248484e0  addiu       $a0, $a0, -0x7B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935776));
        ctx->pc = 0x1BA9A0u;
        goto label_1ba9a0;
    }
    ctx->pc = 0x1BA998u;
    SET_GPR_U32(ctx, 31, 0x1BA9A0u);
    ctx->pc = 0x1BA99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA998u;
            // 0x1ba99c: 0x248484e0  addiu       $a0, $a0, -0x7B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9A0u; }
        if (ctx->pc != 0x1BA9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9A0u; }
        if (ctx->pc != 0x1BA9A0u) { return; }
    }
    ctx->pc = 0x1BA9A0u;
label_1ba9a0:
    // 0x1ba9a0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ba9a4:
    if (ctx->pc == 0x1BA9A4u) {
        ctx->pc = 0x1BA9A4u;
            // 0x1ba9a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BA9A8u;
        goto label_1ba9a8;
    }
    ctx->pc = 0x1BA9A0u;
    {
        const bool branch_taken_0x1ba9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9A0u;
            // 0x1ba9a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9a0) {
            ctx->pc = 0x1BA9DCu;
            goto label_1ba9dc;
        }
    }
    ctx->pc = 0x1BA9A8u;
label_1ba9a8:
    // 0x1ba9a8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1ba9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ba9ac:
    // 0x1ba9ac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1ba9b0:
    if (ctx->pc == 0x1BA9B0u) {
        ctx->pc = 0x1BA9B0u;
            // 0x1ba9b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9B4u;
        goto label_1ba9b4;
    }
    ctx->pc = 0x1BA9ACu;
    {
        const bool branch_taken_0x1ba9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9ACu;
            // 0x1ba9b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9ac) {
            ctx->pc = 0x1BA9D8u;
            goto label_1ba9d8;
        }
    }
    ctx->pc = 0x1BA9B4u;
label_1ba9b4:
    // 0x1ba9b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ba9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba9b8:
    // 0x1ba9b8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ba9bc:
    // 0x1ba9bc: 0x40f809  jalr        $v0
label_1ba9c0:
    if (ctx->pc == 0x1BA9C0u) {
        ctx->pc = 0x1BA9C0u;
            // 0x1ba9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BA9C4u;
        goto label_1ba9c4;
    }
    ctx->pc = 0x1BA9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA9C4u);
        ctx->pc = 0x1BA9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9BCu;
            // 0x1ba9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BA9C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9C4u; }
            if (ctx->pc != 0x1BA9C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1BA9C4u;
label_1ba9c4:
    // 0x1ba9c4: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x1ba9c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_1ba9c8:
    // 0x1ba9c8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1ba9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_1ba9cc:
    // 0x1ba9cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ba9ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ba9d0:
    // 0x1ba9d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ba9d4:
    if (ctx->pc == 0x1BA9D4u) {
        ctx->pc = 0x1BA9D4u;
            // 0x1ba9d4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x1BA9D8u;
        goto label_1ba9d8;
    }
    ctx->pc = 0x1BA9D0u;
    {
        const bool branch_taken_0x1ba9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9D0u;
            // 0x1ba9d4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9d0) {
            ctx->pc = 0x1BA9DCu;
            goto label_1ba9dc;
        }
    }
    ctx->pc = 0x1BA9D8u;
label_1ba9d8:
    // 0x1ba9d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba9dc:
    // 0x1ba9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba9e0:
    // 0x1ba9e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ba9e4:
    // 0x1ba9e4: 0x3e00008  jr          $ra
label_1ba9e8:
    if (ctx->pc == 0x1BA9E8u) {
        ctx->pc = 0x1BA9E8u;
            // 0x1ba9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BA9ECu;
        goto label_1ba9ec;
    }
    ctx->pc = 0x1BA9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9E4u;
            // 0x1ba9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA9ECu;
label_1ba9ec:
    // 0x1ba9ec: 0x0  nop
    ctx->pc = 0x1ba9ecu;
    // NOP
    ctx->pc = 0x1ba9f0u;
}

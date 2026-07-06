#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBC38
// Address: 0x2bbc38 - 0x2bbce0
void sub_002BBC38_0x2bbc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBC38_0x2bbc38");
#endif

    switch (ctx->pc) {
        case 0x2bbc64u: goto label_2bbc64;
        case 0x2bbc74u: goto label_2bbc74;
        case 0x2bbc90u: goto label_2bbc90;
        case 0x2bbcb0u: goto label_2bbcb0;
        case 0x2bbcc0u: goto label_2bbcc0;
        default: break;
    }

    ctx->pc = 0x2bbc38u;

    // 0x2bbc38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbc3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc44: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BBC44u;
    {
        const bool branch_taken_0x2bbc44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC44u;
            // 0x2bbc48: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc44) {
            ctx->pc = 0x2BBC7Cu;
            goto label_2bbc7c;
        }
    }
    ctx->pc = 0x2BBC4Cu;
    // 0x2bbc4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbc50: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x2bbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2bbc54: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBC54u;
    {
        const bool branch_taken_0x2bbc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbc54) {
            ctx->pc = 0x2BBC6Cu;
            goto label_2bbc6c;
        }
    }
    ctx->pc = 0x2BBC5Cu;
    // 0x2bbc5c: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2BBC5Cu;
    SET_GPR_U32(ctx, 31, 0x2BBC64u);
    ctx->pc = 0x2BBC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC5Cu;
            // 0x2bbc60: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (runtime->hasFunction(0x2B1898u)) {
        auto targetFn = runtime->lookupFunction(0x2B1898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC64u; }
        if (ctx->pc != 0x2BBC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1898_0x2b1898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC64u; }
        if (ctx->pc != 0x2BBC64u) { return; }
    }
    ctx->pc = 0x2BBC64u;
label_2bbc64:
    // 0x2bbc64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBC64u;
    {
        const bool branch_taken_0x2bbc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC64u;
            // 0x2bbc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc64) {
            ctx->pc = 0x2BBC80u;
            goto label_2bbc80;
        }
    }
    ctx->pc = 0x2BBC6Cu;
label_2bbc6c:
    // 0x2bbc6c: 0xc0a721c  jal         func_29C870
    ctx->pc = 0x2BBC6Cu;
    SET_GPR_U32(ctx, 31, 0x2BBC74u);
    ctx->pc = 0x2BBC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC6Cu;
            // 0x2bbc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C870u;
    if (runtime->hasFunction(0x29C870u)) {
        auto targetFn = runtime->lookupFunction(0x29C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC74u; }
        if (ctx->pc != 0x2BBC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C870_0x29c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC74u; }
        if (ctx->pc != 0x2BBC74u) { return; }
    }
    ctx->pc = 0x2BBC74u;
label_2bbc74:
    // 0x2bbc74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBC74u;
    {
        const bool branch_taken_0x2bbc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC74u;
            // 0x2bbc78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc74) {
            ctx->pc = 0x2BBC84u;
            goto label_2bbc84;
        }
    }
    ctx->pc = 0x2BBC7Cu;
label_2bbc7c:
    // 0x2bbc7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bbc7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbc80:
    // 0x2bbc80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bbc84:
    // 0x2bbc84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbc84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbc88: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC88u;
            // 0x2bbc8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBC90u;
label_2bbc90:
    // 0x2bbc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bbc94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbc98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bbc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbc9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbca0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bbca4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bbca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbca8: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2BBCA8u;
    SET_GPR_U32(ctx, 31, 0x2BBCB0u);
    ctx->pc = 0x2BBCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCA8u;
            // 0x2bbcac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (runtime->hasFunction(0x2B1898u)) {
        auto targetFn = runtime->lookupFunction(0x2B1898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCB0u; }
        if (ctx->pc != 0x2BBCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1898_0x2b1898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCB0u; }
        if (ctx->pc != 0x2BBCB0u) { return; }
    }
    ctx->pc = 0x2BBCB0u;
label_2bbcb0:
    // 0x2bbcb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBCB0u;
    {
        const bool branch_taken_0x2bbcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCB0u;
            // 0x2bbcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbcb0) {
            ctx->pc = 0x2BBCC8u;
            goto label_2bbcc8;
        }
    }
    ctx->pc = 0x2BBCB8u;
    // 0x2bbcb8: 0xc0a7232  jal         func_29C8C8
    ctx->pc = 0x2BBCB8u;
    SET_GPR_U32(ctx, 31, 0x2BBCC0u);
    ctx->pc = 0x2BBCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCB8u;
            // 0x2bbcbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C8C8u;
    if (runtime->hasFunction(0x29C8C8u)) {
        auto targetFn = runtime->lookupFunction(0x29C8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCC0u; }
        if (ctx->pc != 0x2BBCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C8C8_0x29c8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCC0u; }
        if (ctx->pc != 0x2BBCC0u) { return; }
    }
    ctx->pc = 0x2BBCC0u;
label_2bbcc0:
    // 0x2bbcc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBCC0u;
    {
        const bool branch_taken_0x2bbcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCC0u;
            // 0x2bbcc4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbcc0) {
            ctx->pc = 0x2BBCD0u;
            goto label_2bbcd0;
        }
    }
    ctx->pc = 0x2BBCC8u;
label_2bbcc8:
    // 0x2bbcc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bbcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbcd0:
    // 0x2bbcd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bbcd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbcd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbcd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCD8u;
            // 0x2bbcdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBCE0u;
    ctx->pc = 0x2bbce0u;
}

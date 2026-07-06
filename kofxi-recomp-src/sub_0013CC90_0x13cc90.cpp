#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CC90
// Address: 0x13cc90 - 0x13cd10
void sub_0013CC90_0x13cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CC90_0x13cc90");
#endif

    switch (ctx->pc) {
        case 0x13cc90u: goto label_13cc90;
        case 0x13cc94u: goto label_13cc94;
        case 0x13cc98u: goto label_13cc98;
        case 0x13cc9cu: goto label_13cc9c;
        case 0x13cca0u: goto label_13cca0;
        case 0x13cca4u: goto label_13cca4;
        case 0x13cca8u: goto label_13cca8;
        case 0x13ccacu: goto label_13ccac;
        case 0x13ccb0u: goto label_13ccb0;
        case 0x13ccb4u: goto label_13ccb4;
        case 0x13ccb8u: goto label_13ccb8;
        case 0x13ccbcu: goto label_13ccbc;
        case 0x13ccc0u: goto label_13ccc0;
        case 0x13ccc4u: goto label_13ccc4;
        case 0x13ccc8u: goto label_13ccc8;
        case 0x13ccccu: goto label_13cccc;
        case 0x13ccd0u: goto label_13ccd0;
        case 0x13ccd4u: goto label_13ccd4;
        case 0x13ccd8u: goto label_13ccd8;
        case 0x13ccdcu: goto label_13ccdc;
        case 0x13cce0u: goto label_13cce0;
        case 0x13cce4u: goto label_13cce4;
        case 0x13cce8u: goto label_13cce8;
        case 0x13ccecu: goto label_13ccec;
        case 0x13ccf0u: goto label_13ccf0;
        case 0x13ccf4u: goto label_13ccf4;
        case 0x13ccf8u: goto label_13ccf8;
        case 0x13ccfcu: goto label_13ccfc;
        case 0x13cd00u: goto label_13cd00;
        case 0x13cd04u: goto label_13cd04;
        case 0x13cd08u: goto label_13cd08;
        case 0x13cd0cu: goto label_13cd0c;
        default: break;
    }

    ctx->pc = 0x13cc90u;

label_13cc90:
    // 0x13cc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13cc94:
    // 0x13cc94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13cc98:
    // 0x13cc98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13cc9c:
    // 0x13cc9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13cca0:
    // 0x13cca0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13cca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13cca4:
    // 0x13cca4: 0xc04f530  jal         func_13D4C0
label_13cca8:
    if (ctx->pc == 0x13CCA8u) {
        ctx->pc = 0x13CCA8u;
            // 0x13cca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CCACu;
        goto label_13ccac;
    }
    ctx->pc = 0x13CCA4u;
    SET_GPR_U32(ctx, 31, 0x13CCACu);
    ctx->pc = 0x13CCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CCA4u;
            // 0x13cca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D4C0u;
    if (runtime->hasFunction(0x13D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CCACu; }
        if (ctx->pc != 0x13CCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4C0_0x13d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CCACu; }
        if (ctx->pc != 0x13CCACu) { return; }
    }
    ctx->pc = 0x13CCACu;
label_13ccac:
    // 0x13ccac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ccb0:
    // 0x13ccb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ccb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ccb4:
    // 0x13ccb4: 0xc04f544  jal         func_13D510
label_13ccb8:
    if (ctx->pc == 0x13CCB8u) {
        ctx->pc = 0x13CCB8u;
            // 0x13ccb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CCBCu;
        goto label_13ccbc;
    }
    ctx->pc = 0x13CCB4u;
    SET_GPR_U32(ctx, 31, 0x13CCBCu);
    ctx->pc = 0x13CCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CCB4u;
            // 0x13ccb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D510u;
    if (runtime->hasFunction(0x13D510u)) {
        auto targetFn = runtime->lookupFunction(0x13D510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CCBCu; }
        if (ctx->pc != 0x13CCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D510_0x13d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CCBCu; }
        if (ctx->pc != 0x13CCBCu) { return; }
    }
    ctx->pc = 0x13CCBCu;
label_13ccbc:
    // 0x13ccbc: 0x8623020c  lh          $v1, 0x20C($s1)
    ctx->pc = 0x13ccbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 524)));
label_13ccc0:
    // 0x13ccc0: 0x58600003  blezl       $v1, . + 4 + (0x3 << 2)
label_13ccc4:
    if (ctx->pc == 0x13CCC4u) {
        ctx->pc = 0x13CCC4u;
            // 0x13ccc4: 0xa620020c  sh          $zero, 0x20C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x13CCC8u;
        goto label_13ccc8;
    }
    ctx->pc = 0x13CCC0u;
    {
        const bool branch_taken_0x13ccc0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13ccc0) {
            ctx->pc = 0x13CCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13CCC0u;
            // 0x13ccc4: 0xa620020c  sh          $zero, 0x20C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13CCD0u;
            goto label_13ccd0;
        }
    }
    ctx->pc = 0x13CCC8u;
label_13ccc8:
    // 0x13ccc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_13cccc:
    // 0x13cccc: 0xa623020c  sh          $v1, 0x20C($s1)
    ctx->pc = 0x13ccccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 3));
label_13ccd0:
    // 0x13ccd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13ccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ccd4:
    // 0x13ccd4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x13ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13ccd8:
    // 0x13ccd8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x13ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_13ccdc:
    // 0x13ccdc: 0x2442dcc0  addiu       $v0, $v0, -0x2340
    ctx->pc = 0x13ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958272));
label_13cce0:
    // 0x13cce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13cce4:
    // 0x13cce4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cce8:
    // 0x13cce8: 0x40f809  jalr        $v0
label_13ccec:
    if (ctx->pc == 0x13CCECu) {
        ctx->pc = 0x13CCECu;
            // 0x13ccec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CCF0u;
        goto label_13ccf0;
    }
    ctx->pc = 0x13CCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CCF0u);
        ctx->pc = 0x13CCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CCE8u;
            // 0x13ccec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13CCF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13CCF0u; }
            if (ctx->pc != 0x13CCF0u) { return; }
        }
        }
    }
    ctx->pc = 0x13CCF0u;
label_13ccf0:
    // 0x13ccf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13ccf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13ccf4:
    // 0x13ccf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ccf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ccf8:
    // 0x13ccf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ccf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13ccfc:
    // 0x13ccfc: 0x3e00008  jr          $ra
label_13cd00:
    if (ctx->pc == 0x13CD00u) {
        ctx->pc = 0x13CD00u;
            // 0x13cd00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13CD04u;
        goto label_13cd04;
    }
    ctx->pc = 0x13CCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CCFCu;
            // 0x13cd00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CD04u;
label_13cd04:
    // 0x13cd04: 0x0  nop
    ctx->pc = 0x13cd04u;
    // NOP
label_13cd08:
    // 0x13cd08: 0x0  nop
    ctx->pc = 0x13cd08u;
    // NOP
label_13cd0c:
    // 0x13cd0c: 0x0  nop
    ctx->pc = 0x13cd0cu;
    // NOP
    ctx->pc = 0x13cd10u;
}

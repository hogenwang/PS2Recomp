#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4730
// Address: 0x1e4730 - 0x1e47b8
void sub_001E4730_0x1e4730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4730_0x1e4730");
#endif

    switch (ctx->pc) {
        case 0x1e4730u: goto label_1e4730;
        case 0x1e4734u: goto label_1e4734;
        case 0x1e4738u: goto label_1e4738;
        case 0x1e473cu: goto label_1e473c;
        case 0x1e4740u: goto label_1e4740;
        case 0x1e4744u: goto label_1e4744;
        case 0x1e4748u: goto label_1e4748;
        case 0x1e474cu: goto label_1e474c;
        case 0x1e4750u: goto label_1e4750;
        case 0x1e4754u: goto label_1e4754;
        case 0x1e4758u: goto label_1e4758;
        case 0x1e475cu: goto label_1e475c;
        case 0x1e4760u: goto label_1e4760;
        case 0x1e4764u: goto label_1e4764;
        case 0x1e4768u: goto label_1e4768;
        case 0x1e476cu: goto label_1e476c;
        case 0x1e4770u: goto label_1e4770;
        case 0x1e4774u: goto label_1e4774;
        case 0x1e4778u: goto label_1e4778;
        case 0x1e477cu: goto label_1e477c;
        case 0x1e4780u: goto label_1e4780;
        case 0x1e4784u: goto label_1e4784;
        case 0x1e4788u: goto label_1e4788;
        case 0x1e478cu: goto label_1e478c;
        case 0x1e4790u: goto label_1e4790;
        case 0x1e4794u: goto label_1e4794;
        case 0x1e4798u: goto label_1e4798;
        case 0x1e479cu: goto label_1e479c;
        case 0x1e47a0u: goto label_1e47a0;
        case 0x1e47a4u: goto label_1e47a4;
        case 0x1e47a8u: goto label_1e47a8;
        case 0x1e47acu: goto label_1e47ac;
        case 0x1e47b0u: goto label_1e47b0;
        case 0x1e47b4u: goto label_1e47b4;
        default: break;
    }

    ctx->pc = 0x1e4730u;

label_1e4730:
    // 0x1e4730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4734:
    // 0x1e4734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4738:
    // 0x1e4738: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x1e4738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
label_1e473c:
    // 0x1e473c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e4740:
    if (ctx->pc == 0x1E4740u) {
        ctx->pc = 0x1E4740u;
            // 0x1e4740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4744u;
        goto label_1e4744;
    }
    ctx->pc = 0x1E473Cu;
    {
        const bool branch_taken_0x1e473c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E473Cu;
            // 0x1e4740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e473c) {
            ctx->pc = 0x1E4754u;
            goto label_1e4754;
        }
    }
    ctx->pc = 0x1E4744u;
label_1e4744:
    // 0x1e4744: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4748:
    // 0x1e4748: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1e4748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1e474c:
    // 0x1e474c: 0x60f809  jalr        $v1
label_1e4750:
    if (ctx->pc == 0x1E4750u) {
        ctx->pc = 0x1E4754u;
        goto label_1e4754;
    }
    ctx->pc = 0x1E474Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E4754u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4754u; }
            if (ctx->pc != 0x1E4754u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4754u;
label_1e4754:
    // 0x1e4754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4758:
    // 0x1e4758: 0x3e00008  jr          $ra
label_1e475c:
    if (ctx->pc == 0x1E475Cu) {
        ctx->pc = 0x1E475Cu;
            // 0x1e475c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E4760u;
        goto label_1e4760;
    }
    ctx->pc = 0x1E4758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4758u;
            // 0x1e475c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4760u;
label_1e4760:
    // 0x1e4760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4764:
    // 0x1e4764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e4768:
    // 0x1e4768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e476c:
    // 0x1e476c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e4770:
    // 0x1e4770: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x1e4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_1e4774:
    // 0x1e4774: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e4778:
    if (ctx->pc == 0x1E4778u) {
        ctx->pc = 0x1E4778u;
            // 0x1e4778: 0x26030398  addiu       $v1, $s0, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 920));
        ctx->pc = 0x1E477Cu;
        goto label_1e477c;
    }
    ctx->pc = 0x1E4774u;
    {
        const bool branch_taken_0x1e4774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4774u;
            // 0x1e4778: 0x26030398  addiu       $v1, $s0, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4774) {
            ctx->pc = 0x1E47A8u;
            goto label_1e47a8;
        }
    }
    ctx->pc = 0x1E477Cu;
label_1e477c:
    // 0x1e477c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4780:
    // 0x1e4780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4784:
    // 0x1e4784: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_1e4788:
    if (ctx->pc == 0x1E4788u) {
        ctx->pc = 0x1E4788u;
            // 0x1e4788: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E478Cu;
        goto label_1e478c;
    }
    ctx->pc = 0x1E4784u;
    {
        const bool branch_taken_0x1e4784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4784) {
            ctx->pc = 0x1E4788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4784u;
            // 0x1e4788: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E47ACu;
            goto label_1e47ac;
        }
    }
    ctx->pc = 0x1E478Cu;
label_1e478c:
    // 0x1e478c: 0xc079200  jal         func_1E4800
label_1e4790:
    if (ctx->pc == 0x1E4790u) {
        ctx->pc = 0x1E4794u;
        goto label_1e4794;
    }
    ctx->pc = 0x1E478Cu;
    SET_GPR_U32(ctx, 31, 0x1E4794u);
    ctx->pc = 0x1E4800u;
    if (runtime->hasFunction(0x1E4800u)) {
        auto targetFn = runtime->lookupFunction(0x1E4800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4794u; }
        if (ctx->pc != 0x1E4794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4800_0x1e4800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4794u; }
        if (ctx->pc != 0x1E4794u) { return; }
    }
    ctx->pc = 0x1E4794u;
label_1e4794:
    // 0x1e4794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4798:
    // 0x1e4798: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e4798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e479c:
    // 0x1e479c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e479cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e47a0:
    // 0x1e47a0: 0x807926c  j           func_1E49B0
label_1e47a4:
    if (ctx->pc == 0x1E47A4u) {
        ctx->pc = 0x1E47A4u;
            // 0x1e47a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E47A8u;
        goto label_1e47a8;
    }
    ctx->pc = 0x1E47A0u;
    ctx->pc = 0x1E47A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47A0u;
            // 0x1e47a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E49B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1E49B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E47A8u;
label_1e47a8:
    // 0x1e47a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e47a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e47ac:
    // 0x1e47ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e47acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e47b0:
    // 0x1e47b0: 0x3e00008  jr          $ra
label_1e47b4:
    if (ctx->pc == 0x1E47B4u) {
        ctx->pc = 0x1E47B4u;
            // 0x1e47b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E47B8u;
        goto label_fallthrough_0x1e47b0;
    }
    ctx->pc = 0x1E47B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E47B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47B0u;
            // 0x1e47b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e47b0:
    ctx->pc = 0x1E47B8u;
    ctx->pc = 0x1e47b8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E7D8
// Address: 0x28e7d8 - 0x28e870
void sub_0028E7D8_0x28e7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E7D8_0x28e7d8");
#endif

    switch (ctx->pc) {
        case 0x28e7d8u: goto label_28e7d8;
        case 0x28e7dcu: goto label_28e7dc;
        case 0x28e7e0u: goto label_28e7e0;
        case 0x28e7e4u: goto label_28e7e4;
        case 0x28e7e8u: goto label_28e7e8;
        case 0x28e7ecu: goto label_28e7ec;
        case 0x28e7f0u: goto label_28e7f0;
        case 0x28e7f4u: goto label_28e7f4;
        case 0x28e7f8u: goto label_28e7f8;
        case 0x28e7fcu: goto label_28e7fc;
        case 0x28e800u: goto label_28e800;
        case 0x28e804u: goto label_28e804;
        case 0x28e808u: goto label_28e808;
        case 0x28e80cu: goto label_28e80c;
        case 0x28e810u: goto label_28e810;
        case 0x28e814u: goto label_28e814;
        case 0x28e818u: goto label_28e818;
        case 0x28e81cu: goto label_28e81c;
        case 0x28e820u: goto label_28e820;
        case 0x28e824u: goto label_28e824;
        case 0x28e828u: goto label_28e828;
        case 0x28e82cu: goto label_28e82c;
        case 0x28e830u: goto label_28e830;
        case 0x28e834u: goto label_28e834;
        case 0x28e838u: goto label_28e838;
        case 0x28e83cu: goto label_28e83c;
        case 0x28e840u: goto label_28e840;
        case 0x28e844u: goto label_28e844;
        case 0x28e848u: goto label_28e848;
        case 0x28e84cu: goto label_28e84c;
        case 0x28e850u: goto label_28e850;
        case 0x28e854u: goto label_28e854;
        case 0x28e858u: goto label_28e858;
        case 0x28e85cu: goto label_28e85c;
        case 0x28e860u: goto label_28e860;
        case 0x28e864u: goto label_28e864;
        case 0x28e868u: goto label_28e868;
        case 0x28e86cu: goto label_28e86c;
        default: break;
    }

    ctx->pc = 0x28e7d8u;

label_28e7d8:
    // 0x28e7d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28e7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28e7dc:
    // 0x28e7dc: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e7e0:
    // 0x28e7e0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x28e7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_28e7e4:
    // 0x28e7e4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x28e7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_28e7e8:
    // 0x28e7e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28e7e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28e7ec:
    // 0x28e7ec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28e7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_28e7f0:
    // 0x28e7f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28e7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28e7f4:
    // 0x28e7f4: 0x8c4245f4  lw          $v0, 0x45F4($v0)
    ctx->pc = 0x28e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17908)));
label_28e7f8:
    // 0x28e7f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28e7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28e7fc:
    // 0x28e7fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e800:
    if (ctx->pc == 0x28E800u) {
        ctx->pc = 0x28E800u;
            // 0x28e800: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->pc = 0x28E804u;
        goto label_28e804;
    }
    ctx->pc = 0x28E7FCu;
    {
        const bool branch_taken_0x28e7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7FCu;
            // 0x28e800: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7fc) {
            ctx->pc = 0x28E824u;
            goto label_28e824;
        }
    }
    ctx->pc = 0x28E804u;
label_28e804:
    // 0x28e804: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e808:
    // 0x28e808: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x28e808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_28e80c:
    // 0x28e80c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e810:
    // 0x28e810: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e814:
    // 0x28e814: 0xc0a5648  jal         func_295920
label_28e818:
    if (ctx->pc == 0x28E818u) {
        ctx->pc = 0x28E818u;
            // 0x28e818: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E81Cu;
        goto label_28e81c;
    }
    ctx->pc = 0x28E814u;
    SET_GPR_U32(ctx, 31, 0x28E81Cu);
    ctx->pc = 0x28E818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E814u;
            // 0x28e818: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E81Cu; }
        if (ctx->pc != 0x28E81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E81Cu; }
        if (ctx->pc != 0x28E81Cu) { return; }
    }
    ctx->pc = 0x28E81Cu;
label_28e81c:
    // 0x28e81c: 0x1000000e  b           . + 4 + (0xE << 2)
label_28e820:
    if (ctx->pc == 0x28E820u) {
        ctx->pc = 0x28E820u;
            // 0x28e820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E824u;
        goto label_28e824;
    }
    ctx->pc = 0x28E81Cu;
    {
        const bool branch_taken_0x28e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E81Cu;
            // 0x28e820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e81c) {
            ctx->pc = 0x28E858u;
            goto label_28e858;
        }
    }
    ctx->pc = 0x28E824u;
label_28e824:
    // 0x28e824: 0x40f809  jalr        $v0
label_28e828:
    if (ctx->pc == 0x28E828u) {
        ctx->pc = 0x28E828u;
            // 0x28e828: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E82Cu;
        goto label_28e82c;
    }
    ctx->pc = 0x28E824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E82Cu);
        ctx->pc = 0x28E828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E824u;
            // 0x28e828: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E82Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E82Cu; }
            if (ctx->pc != 0x28E82Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28E82Cu;
label_28e82c:
    // 0x28e82c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28e82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e830:
    // 0x28e830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e834:
    // 0x28e834: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_28e838:
    if (ctx->pc == 0x28E838u) {
        ctx->pc = 0x28E838u;
            // 0x28e838: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E83Cu;
        goto label_28e83c;
    }
    ctx->pc = 0x28E834u;
    {
        const bool branch_taken_0x28e834 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E834u;
            // 0x28e838: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e834) {
            ctx->pc = 0x28E858u;
            goto label_28e858;
        }
    }
    ctx->pc = 0x28E83Cu;
label_28e83c:
    // 0x28e83c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28e840:
    // 0x28e840: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28e840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28e844:
    // 0x28e844: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28e844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28e848:
    // 0x28e848: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x28e848u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_28e84c:
    // 0x28e84c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x28e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_28e850:
    // 0x28e850: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x28e850u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_28e854:
    // 0x28e854: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28e854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28e858:
    // 0x28e858: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28e858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28e85c:
    // 0x28e85c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x28e85cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28e860:
    // 0x28e860: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x28e860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28e864:
    // 0x28e864: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28e864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28e868:
    // 0x28e868: 0x3e00008  jr          $ra
label_28e86c:
    if (ctx->pc == 0x28E86Cu) {
        ctx->pc = 0x28E86Cu;
            // 0x28e86c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28E870u;
        goto label_fallthrough_0x28e868;
    }
    ctx->pc = 0x28E868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E868u;
            // 0x28e86c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28e868:
    ctx->pc = 0x28E870u;
    ctx->pc = 0x28e870u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F378
// Address: 0x28f378 - 0x28f408
void sub_0028F378_0x28f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F378_0x28f378");
#endif

    switch (ctx->pc) {
        case 0x28f378u: goto label_28f378;
        case 0x28f37cu: goto label_28f37c;
        case 0x28f380u: goto label_28f380;
        case 0x28f384u: goto label_28f384;
        case 0x28f388u: goto label_28f388;
        case 0x28f38cu: goto label_28f38c;
        case 0x28f390u: goto label_28f390;
        case 0x28f394u: goto label_28f394;
        case 0x28f398u: goto label_28f398;
        case 0x28f39cu: goto label_28f39c;
        case 0x28f3a0u: goto label_28f3a0;
        case 0x28f3a4u: goto label_28f3a4;
        case 0x28f3a8u: goto label_28f3a8;
        case 0x28f3acu: goto label_28f3ac;
        case 0x28f3b0u: goto label_28f3b0;
        case 0x28f3b4u: goto label_28f3b4;
        case 0x28f3b8u: goto label_28f3b8;
        case 0x28f3bcu: goto label_28f3bc;
        case 0x28f3c0u: goto label_28f3c0;
        case 0x28f3c4u: goto label_28f3c4;
        case 0x28f3c8u: goto label_28f3c8;
        case 0x28f3ccu: goto label_28f3cc;
        case 0x28f3d0u: goto label_28f3d0;
        case 0x28f3d4u: goto label_28f3d4;
        case 0x28f3d8u: goto label_28f3d8;
        case 0x28f3dcu: goto label_28f3dc;
        case 0x28f3e0u: goto label_28f3e0;
        case 0x28f3e4u: goto label_28f3e4;
        case 0x28f3e8u: goto label_28f3e8;
        case 0x28f3ecu: goto label_28f3ec;
        case 0x28f3f0u: goto label_28f3f0;
        case 0x28f3f4u: goto label_28f3f4;
        case 0x28f3f8u: goto label_28f3f8;
        case 0x28f3fcu: goto label_28f3fc;
        case 0x28f400u: goto label_28f400;
        case 0x28f404u: goto label_28f404;
        default: break;
    }

    ctx->pc = 0x28f378u;

label_28f378:
    // 0x28f378: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f37c:
    // 0x28f37c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f37cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f380:
    // 0x28f380: 0x8c424684  lw          $v0, 0x4684($v0)
    ctx->pc = 0x28f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18052)));
label_28f384:
    // 0x28f384: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f388:
    if (ctx->pc == 0x28F388u) {
        ctx->pc = 0x28F388u;
            // 0x28f388: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28F38Cu;
        goto label_28f38c;
    }
    ctx->pc = 0x28F384u;
    {
        const bool branch_taken_0x28f384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F384u;
            // 0x28f388: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f384) {
            ctx->pc = 0x28F3ACu;
            goto label_28f3ac;
        }
    }
    ctx->pc = 0x28F38Cu;
label_28f38c:
    // 0x28f38c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f390:
    // 0x28f390: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x28f390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_28f394:
    // 0x28f394: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f398:
    // 0x28f398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f39c:
    // 0x28f39c: 0xc0a5648  jal         func_295920
label_28f3a0:
    if (ctx->pc == 0x28F3A0u) {
        ctx->pc = 0x28F3A0u;
            // 0x28f3a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F3A4u;
        goto label_28f3a4;
    }
    ctx->pc = 0x28F39Cu;
    SET_GPR_U32(ctx, 31, 0x28F3A4u);
    ctx->pc = 0x28F3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F39Cu;
            // 0x28f3a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3A4u; }
        if (ctx->pc != 0x28F3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3A4u; }
        if (ctx->pc != 0x28F3A4u) { return; }
    }
    ctx->pc = 0x28F3A4u;
label_28f3a4:
    // 0x28f3a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f3a8:
    if (ctx->pc == 0x28F3A8u) {
        ctx->pc = 0x28F3A8u;
            // 0x28f3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F3ACu;
        goto label_28f3ac;
    }
    ctx->pc = 0x28F3A4u;
    {
        const bool branch_taken_0x28f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3A4u;
            // 0x28f3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3a4) {
            ctx->pc = 0x28F3B4u;
            goto label_28f3b4;
        }
    }
    ctx->pc = 0x28F3ACu;
label_28f3ac:
    // 0x28f3ac: 0x40f809  jalr        $v0
label_28f3b0:
    if (ctx->pc == 0x28F3B0u) {
        ctx->pc = 0x28F3B4u;
        goto label_28f3b4;
    }
    ctx->pc = 0x28F3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F3B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28F3B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28F3B4u; }
            if (ctx->pc != 0x28F3B4u) { return; }
        }
        }
    }
    ctx->pc = 0x28F3B4u;
label_28f3b4:
    // 0x28f3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f3b8:
    // 0x28f3b8: 0x3e00008  jr          $ra
label_28f3bc:
    if (ctx->pc == 0x28F3BCu) {
        ctx->pc = 0x28F3BCu;
            // 0x28f3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28F3C0u;
        goto label_28f3c0;
    }
    ctx->pc = 0x28F3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3B8u;
            // 0x28f3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F3C0u;
label_28f3c0:
    // 0x28f3c0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f3c4:
    // 0x28f3c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f3c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f3c8:
    // 0x28f3c8: 0x8c424688  lw          $v0, 0x4688($v0)
    ctx->pc = 0x28f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18056)));
label_28f3cc:
    // 0x28f3cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f3d0:
    if (ctx->pc == 0x28F3D0u) {
        ctx->pc = 0x28F3D0u;
            // 0x28f3d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28F3D4u;
        goto label_28f3d4;
    }
    ctx->pc = 0x28F3CCu;
    {
        const bool branch_taken_0x28f3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3CCu;
            // 0x28f3d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3cc) {
            ctx->pc = 0x28F3F4u;
            goto label_28f3f4;
        }
    }
    ctx->pc = 0x28F3D4u;
label_28f3d4:
    // 0x28f3d4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f3d8:
    // 0x28f3d8: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x28f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_28f3dc:
    // 0x28f3dc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f3e0:
    // 0x28f3e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f3e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f3e4:
    // 0x28f3e4: 0xc0a5648  jal         func_295920
label_28f3e8:
    if (ctx->pc == 0x28F3E8u) {
        ctx->pc = 0x28F3E8u;
            // 0x28f3e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F3ECu;
        goto label_28f3ec;
    }
    ctx->pc = 0x28F3E4u;
    SET_GPR_U32(ctx, 31, 0x28F3ECu);
    ctx->pc = 0x28F3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3E4u;
            // 0x28f3e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3ECu; }
        if (ctx->pc != 0x28F3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3ECu; }
        if (ctx->pc != 0x28F3ECu) { return; }
    }
    ctx->pc = 0x28F3ECu;
label_28f3ec:
    // 0x28f3ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f3f0:
    if (ctx->pc == 0x28F3F0u) {
        ctx->pc = 0x28F3F0u;
            // 0x28f3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F3F4u;
        goto label_28f3f4;
    }
    ctx->pc = 0x28F3ECu;
    {
        const bool branch_taken_0x28f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3ECu;
            // 0x28f3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3ec) {
            ctx->pc = 0x28F3FCu;
            goto label_28f3fc;
        }
    }
    ctx->pc = 0x28F3F4u;
label_28f3f4:
    // 0x28f3f4: 0x40f809  jalr        $v0
label_28f3f8:
    if (ctx->pc == 0x28F3F8u) {
        ctx->pc = 0x28F3FCu;
        goto label_28f3fc;
    }
    ctx->pc = 0x28F3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F3FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28F3FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28F3FCu; }
            if (ctx->pc != 0x28F3FCu) { return; }
        }
        }
    }
    ctx->pc = 0x28F3FCu;
label_28f3fc:
    // 0x28f3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f400:
    // 0x28f400: 0x3e00008  jr          $ra
label_28f404:
    if (ctx->pc == 0x28F404u) {
        ctx->pc = 0x28F404u;
            // 0x28f404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28F408u;
        goto label_fallthrough_0x28f400;
    }
    ctx->pc = 0x28F400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F400u;
            // 0x28f404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28f400:
    ctx->pc = 0x28F408u;
    ctx->pc = 0x28f408u;
}

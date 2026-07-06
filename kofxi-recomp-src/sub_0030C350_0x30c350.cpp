#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C350
// Address: 0x30c350 - 0x30c3f0
void sub_0030C350_0x30c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C350_0x30c350");
#endif

    switch (ctx->pc) {
        case 0x30c390u: goto label_30c390;
        case 0x30c39cu: goto label_30c39c;
        case 0x30c3acu: goto label_30c3ac;
        case 0x30c3bcu: goto label_30c3bc;
        default: break;
    }

    ctx->pc = 0x30c350u;

    // 0x30c350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30c354: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x30c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c358: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30c35c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x30c35cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x30c360: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30c364: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30c368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c36c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c378: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30c378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c37c: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x30c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x30c380: 0x509823  subu        $s3, $v0, $s0
    ctx->pc = 0x30c380u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30c384: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x30c384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x30c388: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C388u;
    SET_GPR_U32(ctx, 31, 0x30C390u);
    ctx->pc = 0x30C38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C388u;
            // 0x30c38c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C390u; }
        if (ctx->pc != 0x30C390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C390u; }
        if (ctx->pc != 0x30C390u) { return; }
    }
    ctx->pc = 0x30C390u;
label_30c390:
    // 0x30c390: 0x3c1201d1  lui         $s2, 0x1D1
    ctx->pc = 0x30c390u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)465 << 16));
    // 0x30c394: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30c394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c398: 0x26521e00  addiu       $s2, $s2, 0x1E00
    ctx->pc = 0x30c398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7680));
label_30c39c:
    // 0x30c39c: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x30c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x30c3a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30c3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c3a4: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C3A4u;
    SET_GPR_U32(ctx, 31, 0x30C3ACu);
    ctx->pc = 0x30C3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C3A4u;
            // 0x30c3a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3ACu; }
        if (ctx->pc != 0x30C3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3ACu; }
        if (ctx->pc != 0x30C3ACu) { return; }
    }
    ctx->pc = 0x30C3ACu;
label_30c3ac:
    // 0x30c3ac: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x30c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x30c3b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c3b4: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C3B4u;
    SET_GPR_U32(ctx, 31, 0x30C3BCu);
    ctx->pc = 0x30C3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C3B4u;
            // 0x30c3b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3BCu; }
        if (ctx->pc != 0x30C3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3BCu; }
        if (ctx->pc != 0x30C3BCu) { return; }
    }
    ctx->pc = 0x30C3BCu;
label_30c3bc:
    // 0x30c3bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30c3bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30c3c0: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x30c3c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x30c3c4: 0x2a830100  slti        $v1, $s4, 0x100
    ctx->pc = 0x30c3c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30c3c8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x30C3C8u;
    {
        const bool branch_taken_0x30c3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C3C8u;
            // 0x30c3cc: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3c8) {
            ctx->pc = 0x30C39Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c39c;
        }
    }
    ctx->pc = 0x30C3D0u;
    // 0x30c3d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30c3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30c3d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30c3d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c3d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30c3d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c3dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c3e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x30C3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C3E8u;
            // 0x30c3ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C3F0u;
    ctx->pc = 0x30c3f0u;
}

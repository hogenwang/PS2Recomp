#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC390
// Address: 0x1cc390 - 0x1cc438
void sub_001CC390_0x1cc390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC390_0x1cc390");
#endif

    switch (ctx->pc) {
        case 0x1cc3d4u: goto label_1cc3d4;
        case 0x1cc3e8u: goto label_1cc3e8;
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc41cu: goto label_1cc41c;
        default: break;
    }

    ctx->pc = 0x1cc390u;

    // 0x1cc390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc394: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC394u;
    {
        const bool branch_taken_0x1cc394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC394u;
            // 0x1cc398: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc394) {
            ctx->pc = 0x1CC3B0u;
            goto label_1cc3b0;
        }
    }
    ctx->pc = 0x1CC39Cu;
    // 0x1cc39c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cc3a0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cc3a4: 0x2484bbc0  addiu       $a0, $a0, -0x4440
    ctx->pc = 0x1cc3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949824));
    // 0x1cc3a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC3A8u;
    {
        const bool branch_taken_0x1cc3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3A8u;
            // 0x1cc3ac: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3a8) {
            ctx->pc = 0x1CC3CCu;
            goto label_1cc3cc;
        }
    }
    ctx->pc = 0x1CC3B0u;
label_1cc3b0:
    // 0x1cc3b0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1cc3b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cc3b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC3B4u;
    {
        const bool branch_taken_0x1cc3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3b4) {
            ctx->pc = 0x1CC3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3B4u;
            // 0x1cc3b8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC3D8u;
            goto label_1cc3d8;
        }
    }
    ctx->pc = 0x1CC3BCu;
    // 0x1cc3bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cc3c0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cc3c4: 0x2484bbd0  addiu       $a0, $a0, -0x4430
    ctx->pc = 0x1cc3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949840));
    // 0x1cc3c8: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1cc3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
label_1cc3cc:
    // 0x1cc3cc: 0xc073006  jal         func_1CC018
    ctx->pc = 0x1CC3CCu;
    SET_GPR_U32(ctx, 31, 0x1CC3D4u);
    ctx->pc = 0x1CC018u;
    if (runtime->hasFunction(0x1CC018u)) {
        auto targetFn = runtime->lookupFunction(0x1CC018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3D4u; }
        if (ctx->pc != 0x1CC3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC018_0x1cc018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3D4u; }
        if (ctx->pc != 0x1CC3D4u) { return; }
    }
    ctx->pc = 0x1CC3D4u;
label_1cc3d4:
    // 0x1cc3d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc3d8:
    // 0x1cc3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3DCu;
            // 0x1cc3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC3E4u;
    // 0x1cc3e4: 0x0  nop
    ctx->pc = 0x1cc3e4u;
    // NOP
label_1cc3e8:
    // 0x1cc3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc3f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cc400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cc404: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CC404u;
    SET_GPR_U32(ctx, 31, 0x1CC40Cu);
    ctx->pc = 0x1CC408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC404u;
            // 0x1cc408: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC40Cu; }
        if (ctx->pc != 0x1CC40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC40Cu; }
        if (ctx->pc != 0x1CC40Cu) { return; }
    }
    ctx->pc = 0x1CC40Cu;
label_1cc40c:
    // 0x1cc40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cc410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc414: 0xc07310e  jal         func_1CC438
    ctx->pc = 0x1CC414u;
    SET_GPR_U32(ctx, 31, 0x1CC41Cu);
    ctx->pc = 0x1CC418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC414u;
            // 0x1cc418: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC438u;
    if (runtime->hasFunction(0x1CC438u)) {
        auto targetFn = runtime->lookupFunction(0x1CC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC41Cu; }
        if (ctx->pc != 0x1CC41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC438_0x1cc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC41Cu; }
        if (ctx->pc != 0x1CC41Cu) { return; }
    }
    ctx->pc = 0x1CC41Cu;
label_1cc41c:
    // 0x1cc41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc428: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cc428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc42c: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CC42Cu;
    ctx->pc = 0x1CC430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC42Cu;
            // 0x1cc430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CC434u;
    // 0x1cc434: 0x0  nop
    ctx->pc = 0x1cc434u;
    // NOP
    ctx->pc = 0x1cc438u;
}

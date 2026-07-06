#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343740
// Address: 0x343740 - 0x3437a0
void sub_00343740_0x343740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343740_0x343740");
#endif

    switch (ctx->pc) {
        case 0x343760u: goto label_343760;
        case 0x343790u: goto label_343790;
        default: break;
    }

    ctx->pc = 0x343740u;

    // 0x343740: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x343740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x343744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34374c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x34374cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x343750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x343750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x343754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343758: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343758u;
    SET_GPR_U32(ctx, 31, 0x343760u);
    ctx->pc = 0x34375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343758u;
            // 0x34375c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343760u; }
        if (ctx->pc != 0x343760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343760u; }
        if (ctx->pc != 0x343760u) { return; }
    }
    ctx->pc = 0x343760u;
label_343760:
    // 0x343760: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x343760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x343764: 0x24051140  addiu       $a1, $zero, 0x1140
    ctx->pc = 0x343764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4416));
    // 0x343768: 0x8c4340b0  lw          $v1, 0x40B0($v0)
    ctx->pc = 0x343768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16560)));
    // 0x34376c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x34376cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x343770: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x343770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x343774: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x343774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x343778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34377c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x34377cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x343780: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343784: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x343784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x343788: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x343788u;
    SET_GPR_U32(ctx, 31, 0x343790u);
    ctx->pc = 0x34378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343788u;
            // 0x34378c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343790u; }
        if (ctx->pc != 0x343790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343790u; }
        if (ctx->pc != 0x343790u) { return; }
    }
    ctx->pc = 0x343790u;
label_343790:
    // 0x343790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343798: 0x3e00008  jr          $ra
    ctx->pc = 0x343798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343798u;
            // 0x34379c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3437A0u;
    ctx->pc = 0x3437a0u;
}

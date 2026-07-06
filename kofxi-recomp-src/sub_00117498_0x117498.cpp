#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117498
// Address: 0x117498 - 0x117510
void sub_00117498_0x117498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117498_0x117498");
#endif

    switch (ctx->pc) {
        case 0x1174a0u: goto label_1174a0;
        case 0x1174d4u: goto label_1174d4;
        case 0x1174dcu: goto label_1174dc;
        case 0x1174f8u: goto label_1174f8;
        default: break;
    }

    ctx->pc = 0x117498u;

label_117498:
    // 0x117498: 0x8045a40  j           func_116900
    ctx->pc = 0x117498u;
    ctx->pc = 0x116900u;
    {
        auto targetFn = runtime->lookupFunction(0x116900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1174A0u;
label_1174a0:
    // 0x1174a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1174a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1174a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1174a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1174a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1174a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1174acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1174b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1174b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1174b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1174b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1174b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174bc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1174bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1174c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1174c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1174c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1174c8: 0x2484ab50  addiu       $a0, $a0, -0x54B0
    ctx->pc = 0x1174c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945616));
    // 0x1174cc: 0xc045ce0  jal         func_117380
    ctx->pc = 0x1174CCu;
    SET_GPR_U32(ctx, 31, 0x1174D4u);
    ctx->pc = 0x1174D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1174CCu;
            // 0x1174d0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117380u;
    if (runtime->hasFunction(0x117380u)) {
        auto targetFn = runtime->lookupFunction(0x117380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174D4u; }
        if (ctx->pc != 0x1174D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117380_0x117380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174D4u; }
        if (ctx->pc != 0x1174D4u) { return; }
    }
    ctx->pc = 0x1174D4u;
label_1174d4:
    // 0x1174d4: 0xc045d26  jal         func_117498
    ctx->pc = 0x1174D4u;
    SET_GPR_U32(ctx, 31, 0x1174DCu);
    ctx->pc = 0x117498u;
    goto label_117498;
    ctx->pc = 0x1174DCu;
label_1174dc:
    // 0x1174dc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1174dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1174e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1174e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174e4: 0x8c478ae0  lw          $a3, -0x7520($v0)
    ctx->pc = 0x1174e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937312)));
    // 0x1174e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1174e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1174ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174f0: 0xc04322c  jal         func_10C8B0
    ctx->pc = 0x1174F0u;
    SET_GPR_U32(ctx, 31, 0x1174F8u);
    ctx->pc = 0x1174F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1174F0u;
            // 0x1174f4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C8B0u;
    if (runtime->hasFunction(0x10C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174F8u; }
        if (ctx->pc != 0x1174F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C8B0_0x10c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174F8u; }
        if (ctx->pc != 0x1174F8u) { return; }
    }
    ctx->pc = 0x1174F8u;
label_1174f8:
    // 0x1174f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1174f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1174fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1174fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117500: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117508: 0x3e00008  jr          $ra
    ctx->pc = 0x117508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11750Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117508u;
            // 0x11750c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117510u;
    ctx->pc = 0x117510u;
}

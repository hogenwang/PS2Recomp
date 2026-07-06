#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB658
// Address: 0x1bb658 - 0x1bb6c8
void sub_001BB658_0x1bb658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB658_0x1bb658");
#endif

    switch (ctx->pc) {
        case 0x1bb680u: goto label_1bb680;
        case 0x1bb690u: goto label_1bb690;
        case 0x1bb6a4u: goto label_1bb6a4;
        case 0x1bb6acu: goto label_1bb6ac;
        case 0x1bb6b4u: goto label_1bb6b4;
        default: break;
    }

    ctx->pc = 0x1bb658u;

    // 0x1bb658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb660: 0xa0850098  sb          $a1, 0x98($a0)
    ctx->pc = 0x1bb660u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bb664: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bb664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb668: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB668u;
    {
        const bool branch_taken_0x1bb668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB668u;
            // 0x1bb66c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb668) {
            ctx->pc = 0x1BB680u;
            goto label_1bb680;
        }
    }
    ctx->pc = 0x1BB670u;
    // 0x1bb670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb674: 0x806d83c  j           func_1B60F0
    ctx->pc = 0x1BB674u;
    ctx->pc = 0x1BB678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB674u;
            // 0x1bb678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B60F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BB67Cu;
    // 0x1bb67c: 0x0  nop
    ctx->pc = 0x1bb67cu;
    // NOP
label_1bb680:
    // 0x1bb680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb684: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB684u;
            // 0x1bb688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB68Cu;
    // 0x1bb68c: 0x0  nop
    ctx->pc = 0x1bb68cu;
    // NOP
label_1bb690:
    // 0x1bb690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb698: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb69c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB69Cu;
    SET_GPR_U32(ctx, 31, 0x1BB6A4u);
    ctx->pc = 0x1BB6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB69Cu;
            // 0x1bb6a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6A4u; }
        if (ctx->pc != 0x1BB6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6A4u; }
        if (ctx->pc != 0x1BB6A4u) { return; }
    }
    ctx->pc = 0x1BB6A4u;
label_1bb6a4:
    // 0x1bb6a4: 0xc06edb2  jal         func_1BB6C8
    ctx->pc = 0x1BB6A4u;
    SET_GPR_U32(ctx, 31, 0x1BB6ACu);
    ctx->pc = 0x1BB6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6A4u;
            // 0x1bb6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB6C8u;
    if (runtime->hasFunction(0x1BB6C8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6ACu; }
        if (ctx->pc != 0x1BB6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB6C8_0x1bb6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6ACu; }
        if (ctx->pc != 0x1BB6ACu) { return; }
    }
    ctx->pc = 0x1BB6ACu;
label_1bb6ac:
    // 0x1bb6ac: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB6ACu;
    SET_GPR_U32(ctx, 31, 0x1BB6B4u);
    ctx->pc = 0x1BB6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6ACu;
            // 0x1bb6b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6B4u; }
        if (ctx->pc != 0x1BB6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6B4u; }
        if (ctx->pc != 0x1BB6B4u) { return; }
    }
    ctx->pc = 0x1BB6B4u;
label_1bb6b4:
    // 0x1bb6b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb6b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6C0u;
            // 0x1bb6c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB6C8u;
    ctx->pc = 0x1bb6c8u;
}

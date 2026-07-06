#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244070
// Address: 0x244070 - 0x244118
void sub_00244070_0x244070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244070_0x244070");
#endif

    switch (ctx->pc) {
        case 0x244098u: goto label_244098;
        case 0x2440a0u: goto label_2440a0;
        case 0x2440bcu: goto label_2440bc;
        default: break;
    }

    ctx->pc = 0x244070u;

    // 0x244070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244074: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x244074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x244078: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x244078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24407c: 0x8c62fee0  lw          $v0, -0x120($v1)
    ctx->pc = 0x24407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967008)));
    // 0x244080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x244084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x244088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244088u;
    {
        const bool branch_taken_0x244088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244088u;
            // 0x24408c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244088) {
            ctx->pc = 0x244098u;
            goto label_244098;
        }
    }
    ctx->pc = 0x244090u;
    // 0x244090: 0xc091006  jal         func_244018
    ctx->pc = 0x244090u;
    SET_GPR_U32(ctx, 31, 0x244098u);
    ctx->pc = 0x244018u;
    if (runtime->hasFunction(0x244018u)) {
        auto targetFn = runtime->lookupFunction(0x244018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244098u; }
        if (ctx->pc != 0x244098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244018_0x244018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244098u; }
        if (ctx->pc != 0x244098u) { return; }
    }
    ctx->pc = 0x244098u;
label_244098:
    // 0x244098: 0xc098552  jal         func_261548
    ctx->pc = 0x244098u;
    SET_GPR_U32(ctx, 31, 0x2440A0u);
    ctx->pc = 0x24409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244098u;
            // 0x24409c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440A0u; }
        if (ctx->pc != 0x2440A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440A0u; }
        if (ctx->pc != 0x2440A0u) { return; }
    }
    ctx->pc = 0x2440A0u;
label_2440a0:
    // 0x2440a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2440a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440a4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2440A4u;
    {
        const bool branch_taken_0x2440a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2440A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2440A4u;
            // 0x2440a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440a4) {
            ctx->pc = 0x2440B4u;
            goto label_2440b4;
        }
    }
    ctx->pc = 0x2440ACu;
    // 0x2440ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2440ACu;
    {
        const bool branch_taken_0x2440ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2440B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2440ACu;
            // 0x2440b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440ac) {
            ctx->pc = 0x244104u;
            goto label_244104;
        }
    }
    ctx->pc = 0x2440B4u;
label_2440b4:
    // 0x2440b4: 0xc048c96  jal         func_123258
    ctx->pc = 0x2440B4u;
    SET_GPR_U32(ctx, 31, 0x2440BCu);
    ctx->pc = 0x2440B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2440B4u;
            // 0x2440b8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440BCu; }
        if (ctx->pc != 0x2440BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440BCu; }
        if (ctx->pc != 0x2440BCu) { return; }
    }
    ctx->pc = 0x2440BCu;
label_2440bc:
    // 0x2440bc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2440bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2440c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2440c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2440c4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2440c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2440c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2440c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2440cc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2440ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2440d0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2440d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2440d4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2440d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2440d8: 0x8c82ffb8  lw          $v0, -0x48($a0)
    ctx->pc = 0x2440d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967224)));
    // 0x2440dc: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x2440dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
    // 0x2440e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2440E0u;
    {
        const bool branch_taken_0x2440e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2440E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2440E0u;
            // 0x2440e4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440e0) {
            ctx->pc = 0x2440F8u;
            goto label_2440f8;
        }
    }
    ctx->pc = 0x2440E8u;
    // 0x2440e8: 0x8c83ffb8  lw          $v1, -0x48($a0)
    ctx->pc = 0x2440e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967224)));
    // 0x2440ec: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2440ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2440f0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2440f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2440f4: 0x0  nop
    ctx->pc = 0x2440f4u;
    // NOP
label_2440f8:
    // 0x2440f8: 0xac90ffb8  sw          $s0, -0x48($a0)
    ctx->pc = 0x2440f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967224), GPR_U32(ctx, 16));
    // 0x2440fc: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x2440fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x244100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244104:
    // 0x244104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x244104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244108: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x244108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24410c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24410cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244110: 0x3e00008  jr          $ra
    ctx->pc = 0x244110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244110u;
            // 0x244114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244118u;
    ctx->pc = 0x244118u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230488
// Address: 0x230488 - 0x2304f0
void sub_00230488_0x230488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230488_0x230488");
#endif

    switch (ctx->pc) {
        case 0x2304b0u: goto label_2304b0;
        case 0x2304c8u: goto label_2304c8;
        case 0x2304e0u: goto label_2304e0;
        default: break;
    }

    ctx->pc = 0x230488u;

    // 0x230488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23048c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230490: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230498: 0x26040036  addiu       $a0, $s0, 0x36
    ctx->pc = 0x230498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
    // 0x23049c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x23049cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2304a0: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x2304a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x2304a4: 0x34420038  ori         $v0, $v0, 0x38
    ctx->pc = 0x2304a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56);
    // 0x2304a8: 0xc08b6f0  jal         func_22DBC0
    ctx->pc = 0x2304A8u;
    SET_GPR_U32(ctx, 31, 0x2304B0u);
    ctx->pc = 0x2304ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2304A8u;
            // 0x2304ac: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (runtime->hasFunction(0x22DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x22DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304B0u; }
        if (ctx->pc != 0x2304B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DBC0_0x22dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304B0u; }
        if (ctx->pc != 0x2304B0u) { return; }
    }
    ctx->pc = 0x2304B0u;
label_2304b0:
    // 0x2304b0: 0x960200b0  lhu         $v0, 0xB0($s0)
    ctx->pc = 0x2304b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2304b4: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2304b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2304b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2304B8u;
    {
        const bool branch_taken_0x2304b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2304B8u;
            // 0x2304bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304b8) {
            ctx->pc = 0x2304C8u;
            goto label_2304c8;
        }
    }
    ctx->pc = 0x2304C0u;
    // 0x2304c0: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x2304C0u;
    SET_GPR_U32(ctx, 31, 0x2304C8u);
    ctx->pc = 0x2304C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2304C0u;
            // 0x2304c4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (runtime->hasFunction(0x2308F0u)) {
        auto targetFn = runtime->lookupFunction(0x2308F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304C8u; }
        if (ctx->pc != 0x2304C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002308F0_0x2308f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304C8u; }
        if (ctx->pc != 0x2304C8u) { return; }
    }
    ctx->pc = 0x2304C8u;
label_2304c8:
    // 0x2304c8: 0x96020078  lhu         $v0, 0x78($s0)
    ctx->pc = 0x2304c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2304cc: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2304ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2304d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2304D0u;
    {
        const bool branch_taken_0x2304d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2304D0u;
            // 0x2304d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304d0) {
            ctx->pc = 0x2304E0u;
            goto label_2304e0;
        }
    }
    ctx->pc = 0x2304D8u;
    // 0x2304d8: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x2304D8u;
    SET_GPR_U32(ctx, 31, 0x2304E0u);
    ctx->pc = 0x2304DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2304D8u;
            // 0x2304dc: 0x24850048  addiu       $a1, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (runtime->hasFunction(0x2308F0u)) {
        auto targetFn = runtime->lookupFunction(0x2308F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304E0u; }
        if (ctx->pc != 0x2304E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002308F0_0x2308f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304E0u; }
        if (ctx->pc != 0x2304E0u) { return; }
    }
    ctx->pc = 0x2304E0u;
label_2304e0:
    // 0x2304e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2304e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2304e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2304e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2304e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2304E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2304ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2304E8u;
            // 0x2304ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2304F0u;
    ctx->pc = 0x2304f0u;
}

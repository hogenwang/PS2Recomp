#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1640
// Address: 0x1c1640 - 0x1c16a8
void sub_001C1640_0x1c1640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1640_0x1c1640");
#endif

    switch (ctx->pc) {
        case 0x1c165cu: goto label_1c165c;
        case 0x1c1668u: goto label_1c1668;
        case 0x1c1684u: goto label_1c1684;
        case 0x1c168cu: goto label_1c168c;
        default: break;
    }

    ctx->pc = 0x1c1640u;

    // 0x1c1640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c164c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1654: 0xc070506  jal         func_1C1418
    ctx->pc = 0x1C1654u;
    SET_GPR_U32(ctx, 31, 0x1C165Cu);
    ctx->pc = 0x1C1658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1654u;
            // 0x1c1658: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1418u;
    if (runtime->hasFunction(0x1C1418u)) {
        auto targetFn = runtime->lookupFunction(0x1C1418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C165Cu; }
        if (ctx->pc != 0x1C165Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1418_0x1c1418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C165Cu; }
        if (ctx->pc != 0x1C165Cu) { return; }
    }
    ctx->pc = 0x1C165Cu;
label_1c165c:
    // 0x1c165c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1660: 0xc04485c  jal         func_112170
    ctx->pc = 0x1C1660u;
    SET_GPR_U32(ctx, 31, 0x1C1668u);
    ctx->pc = 0x1C1664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1660u;
            // 0x1c1664: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (runtime->hasFunction(0x112170u)) {
        auto targetFn = runtime->lookupFunction(0x112170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1668u; }
        if (ctx->pc != 0x1C1668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112170_0x112170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1668u; }
        if (ctx->pc != 0x1C1668u) { return; }
    }
    ctx->pc = 0x1C1668u;
label_1c1668:
    // 0x1c1668: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c166c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c166cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1670: 0x24849a10  addiu       $a0, $a0, -0x65F0
    ctx->pc = 0x1c1670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941200));
    // 0x1c1674: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1674u;
    {
        const bool branch_taken_0x1c1674 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C1678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1674u;
            // 0x1c1678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1674) {
            ctx->pc = 0x1C1684u;
            goto label_1c1684;
        }
    }
    ctx->pc = 0x1C167Cu;
    // 0x1c167c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C167Cu;
    SET_GPR_U32(ctx, 31, 0x1C1684u);
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1684u; }
        if (ctx->pc != 0x1C1684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1684u; }
        if (ctx->pc != 0x1C1684u) { return; }
    }
    ctx->pc = 0x1C1684u;
label_1c1684:
    // 0x1c1684: 0xc070514  jal         func_1C1450
    ctx->pc = 0x1C1684u;
    SET_GPR_U32(ctx, 31, 0x1C168Cu);
    ctx->pc = 0x1C1450u;
    if (runtime->hasFunction(0x1C1450u)) {
        auto targetFn = runtime->lookupFunction(0x1C1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C168Cu; }
        if (ctx->pc != 0x1C168Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1450_0x1c1450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C168Cu; }
        if (ctx->pc != 0x1C168Cu) { return; }
    }
    ctx->pc = 0x1C168Cu;
label_1c168c:
    // 0x1c168c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c168cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c169c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C169Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C16A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C169Cu;
            // 0x1c16a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C16A4u;
    // 0x1c16a4: 0x0  nop
    ctx->pc = 0x1c16a4u;
    // NOP
    ctx->pc = 0x1c16a8u;
}

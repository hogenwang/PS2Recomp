#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA728
// Address: 0x1aa728 - 0x1aa780
void sub_001AA728_0x1aa728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA728_0x1aa728");
#endif

    switch (ctx->pc) {
        case 0x1aa748u: goto label_1aa748;
        case 0x1aa764u: goto label_1aa764;
        default: break;
    }

    ctx->pc = 0x1aa728u;

    // 0x1aa728: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1aa728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1aa72c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa730: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1aa730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa734: 0x24a56a48  addiu       $a1, $a1, 0x6A48
    ctx->pc = 0x1aa734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27208));
    // 0x1aa738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa73c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aa73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aa740: 0xc049c22  jal         func_127088
    ctx->pc = 0x1AA740u;
    SET_GPR_U32(ctx, 31, 0x1AA748u);
    ctx->pc = 0x1AA744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA740u;
            // 0x1aa744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA748u; }
        if (ctx->pc != 0x1AA748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA748u; }
        if (ctx->pc != 0x1AA748u) { return; }
    }
    ctx->pc = 0x1AA748u;
label_1aa748:
    // 0x1aa748: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1aa748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1aa74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa750: 0x24a56a50  addiu       $a1, $a1, 0x6A50
    ctx->pc = 0x1aa750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27216));
    // 0x1aa754: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA754u;
    {
        const bool branch_taken_0x1aa754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA754u;
            // 0x1aa758: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa754) {
            ctx->pc = 0x1AA76Cu;
            goto label_1aa76c;
        }
    }
    ctx->pc = 0x1AA75Cu;
    // 0x1aa75c: 0xc049c22  jal         func_127088
    ctx->pc = 0x1AA75Cu;
    SET_GPR_U32(ctx, 31, 0x1AA764u);
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA764u; }
        if (ctx->pc != 0x1AA764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA764u; }
        if (ctx->pc != 0x1AA764u) { return; }
    }
    ctx->pc = 0x1AA764u;
label_1aa764:
    // 0x1aa764: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA764u;
    {
        const bool branch_taken_0x1aa764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa764) {
            ctx->pc = 0x1AA768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA764u;
            // 0x1aa768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA770u;
            goto label_1aa770;
        }
    }
    ctx->pc = 0x1AA76Cu;
label_1aa76c:
    // 0x1aa76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa770:
    // 0x1aa770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aa774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa778: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA778u;
            // 0x1aa77c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA780u;
    ctx->pc = 0x1aa780u;
}

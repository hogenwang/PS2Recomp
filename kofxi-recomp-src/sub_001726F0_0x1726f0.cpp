#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001726F0
// Address: 0x1726f0 - 0x172740
void sub_001726F0_0x1726f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001726F0_0x1726f0");
#endif

    switch (ctx->pc) {
        case 0x17272cu: goto label_17272c;
        default: break;
    }

    ctx->pc = 0x1726f0u;

    // 0x1726f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1726f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1726f4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1726f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1726f8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1726f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1726fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1726fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172700: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x172700u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x172704: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x172704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x172708: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x172708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17270c: 0x246348c0  addiu       $v1, $v1, 0x48C0
    ctx->pc = 0x17270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18624));
    // 0x172710: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x172710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x172714: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x172714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x172718: 0x9463022c  lhu         $v1, 0x22C($v1)
    ctx->pc = 0x172718u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 556)));
    // 0x17271c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17271Cu;
    {
        const bool branch_taken_0x17271c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17271c) {
            ctx->pc = 0x172720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17271Cu;
            // 0x172720: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172730u;
            goto label_172730;
        }
    }
    ctx->pc = 0x172724u;
    // 0x172724: 0xc05ca84  jal         func_172A10
    ctx->pc = 0x172724u;
    SET_GPR_U32(ctx, 31, 0x17272Cu);
    ctx->pc = 0x172A10u;
    if (runtime->hasFunction(0x172A10u)) {
        auto targetFn = runtime->lookupFunction(0x172A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17272Cu; }
        if (ctx->pc != 0x17272Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172A10_0x172a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17272Cu; }
        if (ctx->pc != 0x17272Cu) { return; }
    }
    ctx->pc = 0x17272Cu;
label_17272c:
    // 0x17272c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17272cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172730:
    // 0x172730: 0x3e00008  jr          $ra
    ctx->pc = 0x172730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172730u;
            // 0x172734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172738u;
    // 0x172738: 0x0  nop
    ctx->pc = 0x172738u;
    // NOP
    // 0x17273c: 0x0  nop
    ctx->pc = 0x17273cu;
    // NOP
    ctx->pc = 0x172740u;
}

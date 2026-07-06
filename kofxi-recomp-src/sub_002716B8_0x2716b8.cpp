#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002716B8
// Address: 0x2716b8 - 0x271750
void sub_002716B8_0x2716b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002716B8_0x2716b8");
#endif

    switch (ctx->pc) {
        case 0x2716f0u: goto label_2716f0;
        case 0x271708u: goto label_271708;
        case 0x271724u: goto label_271724;
        default: break;
    }

    ctx->pc = 0x2716b8u;

    // 0x2716b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2716b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2716bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2716bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2716c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2716c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2716c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2716c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2716c8: 0x251000f8  addiu       $s0, $t0, 0xF8
    ctx->pc = 0x2716c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 248));
    // 0x2716cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2716ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2716d0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2716d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2716d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2716d8: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x2716d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2716dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2716dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2716e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2716e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2716e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2716e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2716e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2716ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2716f0:
    // 0x2716f0: 0xde06fff8  ld          $a2, -0x8($s0)
    ctx->pc = 0x2716f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x2716f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2716f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716f8: 0xde070000  ld          $a3, 0x0($s0)
    ctx->pc = 0x2716f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2716fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2716fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271700: 0xc09c3a8  jal         func_270EA0
    ctx->pc = 0x271700u;
    SET_GPR_U32(ctx, 31, 0x271708u);
    ctx->pc = 0x271704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271700u;
            // 0x271704: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270EA0u;
    if (runtime->hasFunction(0x270EA0u)) {
        auto targetFn = runtime->lookupFunction(0x270EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271708u; }
        if (ctx->pc != 0x271708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270EA0_0x270ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271708u; }
        if (ctx->pc != 0x271708u) { return; }
    }
    ctx->pc = 0x271708u;
label_271708:
    // 0x271708: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x271708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x27170c: 0xdfaf0000  ld          $t7, 0x0($sp)
    ctx->pc = 0x27170cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271710: 0x220702d  daddu       $t6, $s1, $zero
    ctx->pc = 0x271710u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271714: 0x26f8826  xor         $s1, $s3, $t7
    ctx->pc = 0x271714u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 15));
    // 0x271718: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x271718u;
    {
        const bool branch_taken_0x271718 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x27171Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271718u;
            // 0x27171c: 0x1c0982d  daddu       $s3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271718) {
            ctx->pc = 0x2716F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2716f0;
        }
    }
    ctx->pc = 0x271720u;
    // 0x271720: 0xfe8e0000  sd          $t6, 0x0($s4)
    ctx->pc = 0x271720u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 14));
label_271724:
    // 0x271724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271728: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x271728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27172c: 0xfeb10000  sd          $s1, 0x0($s5)
    ctx->pc = 0x27172cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 17));
    // 0x271730: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x271730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271734: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x271734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271738: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x271738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27173c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x27173cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271740: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x271740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271744: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x271744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271748: 0x3e00008  jr          $ra
    ctx->pc = 0x271748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27174Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271748u;
            // 0x27174c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271750u;
    ctx->pc = 0x271750u;
}

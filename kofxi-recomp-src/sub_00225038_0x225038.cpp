#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225038
// Address: 0x225038 - 0x2250f0
void sub_00225038_0x225038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225038_0x225038");
#endif

    switch (ctx->pc) {
        case 0x22506cu: goto label_22506c;
        case 0x225078u: goto label_225078;
        case 0x22508cu: goto label_22508c;
        case 0x2250b4u: goto label_2250b4;
        case 0x2250ccu: goto label_2250cc;
        default: break;
    }

    ctx->pc = 0x225038u;

    // 0x225038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22503c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22503cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225040: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225044: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x225044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x225048: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x225048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22504c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x225050: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x225050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225058: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x225058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22505c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x22505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x225060: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x225060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225064: 0xc089486  jal         func_225218
    ctx->pc = 0x225064u;
    SET_GPR_U32(ctx, 31, 0x22506Cu);
    ctx->pc = 0x225068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225064u;
            // 0x225068: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225218u;
    if (runtime->hasFunction(0x225218u)) {
        auto targetFn = runtime->lookupFunction(0x225218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22506Cu; }
        if (ctx->pc != 0x22506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225218_0x225218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22506Cu; }
        if (ctx->pc != 0x22506Cu) { return; }
    }
    ctx->pc = 0x22506Cu;
label_22506c:
    // 0x22506c: 0x2a2f0008  slti        $t7, $s1, 0x8
    ctx->pc = 0x22506cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x225070: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x225070u;
    {
        const bool branch_taken_0x225070 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x225074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225070u;
            // 0x225074: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225070) {
            ctx->pc = 0x2250A0u;
            goto label_2250a0;
        }
    }
    ctx->pc = 0x225078u;
label_225078:
    // 0x225078: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22507c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225080: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x225080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x225084: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x225084u;
    SET_GPR_U32(ctx, 31, 0x22508Cu);
    ctx->pc = 0x225088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225084u;
            // 0x225088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B28u;
    if (runtime->hasFunction(0x225B28u)) {
        auto targetFn = runtime->lookupFunction(0x225B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22508Cu; }
        if (ctx->pc != 0x22508Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225B28_0x225b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22508Cu; }
        if (ctx->pc != 0x22508Cu) { return; }
    }
    ctx->pc = 0x22508Cu;
label_22508c:
    // 0x22508c: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x22508cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x225090: 0x2a2f0008  slti        $t7, $s1, 0x8
    ctx->pc = 0x225090u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x225094: 0x11e0fff8  beqz        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x225094u;
    {
        const bool branch_taken_0x225094 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x225098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225094u;
            // 0x225098: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225094) {
            ctx->pc = 0x225078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225078;
        }
    }
    ctx->pc = 0x22509Cu;
    // 0x22509c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x22509cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2250a0:
    // 0x2250a0: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x2250a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2250a4: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x2250a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2250a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2250a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250ac: 0xc08947a  jal         func_2251E8
    ctx->pc = 0x2250ACu;
    SET_GPR_U32(ctx, 31, 0x2250B4u);
    ctx->pc = 0x2250B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2250ACu;
            // 0x2250b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2251E8u;
    if (runtime->hasFunction(0x2251E8u)) {
        auto targetFn = runtime->lookupFunction(0x2251E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250B4u; }
        if (ctx->pc != 0x2250B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002251E8_0x2251e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250B4u; }
        if (ctx->pc != 0x2250B4u) { return; }
    }
    ctx->pc = 0x2250B4u;
label_2250b4:
    // 0x2250b4: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2250b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2250b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2250b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2250bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250c0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2250c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2250c4: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x2250C4u;
    SET_GPR_U32(ctx, 31, 0x2250CCu);
    ctx->pc = 0x2250C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2250C4u;
            // 0x2250c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B28u;
    if (runtime->hasFunction(0x225B28u)) {
        auto targetFn = runtime->lookupFunction(0x225B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250CCu; }
        if (ctx->pc != 0x2250CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225B28_0x225b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250CCu; }
        if (ctx->pc != 0x2250CCu) { return; }
    }
    ctx->pc = 0x2250CCu;
label_2250cc:
    // 0x2250cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2250ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2250d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2250d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2250d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2250d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2250d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2250dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2250dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2250e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2250e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2250e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2250e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2250E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2250ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2250E8u;
            // 0x2250ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2250F0u;
    ctx->pc = 0x2250f0u;
}

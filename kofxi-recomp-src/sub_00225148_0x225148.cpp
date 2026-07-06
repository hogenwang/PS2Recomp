#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225148
// Address: 0x225148 - 0x2251e8
void sub_00225148_0x225148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225148_0x225148");
#endif

    switch (ctx->pc) {
        case 0x225178u: goto label_225178;
        case 0x225184u: goto label_225184;
        case 0x225198u: goto label_225198;
        case 0x2251bcu: goto label_2251bc;
        default: break;
    }

    ctx->pc = 0x225148u;

    // 0x225148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22514c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22514cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22515c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x225160: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x225160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x225164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x225168: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x225168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22516c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x22516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225170: 0xc089486  jal         func_225218
    ctx->pc = 0x225170u;
    SET_GPR_U32(ctx, 31, 0x225178u);
    ctx->pc = 0x225174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225170u;
    // 0x225174: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225218u, 0x225170u, 0x225178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225178u;
label_225178:
    // 0x225178: 0x2a0f0009  slti        $t7, $s0, 0x9
    ctx->pc = 0x225178u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22517c: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x22517Cu;
    {
        const bool branch_taken_0x22517c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x225180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22517Cu;
        // 0x225180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22517c) {
            ctx->pc = 0x2251ACu;
            goto label_2251ac;
        }
    }
    ctx->pc = 0x225184u;
label_225184:
    // 0x225184: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x225188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22518c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22518cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x225190: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x225190u;
    SET_GPR_U32(ctx, 31, 0x225198u);
    ctx->pc = 0x225194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225190u;
    // 0x225194: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B28u, 0x225190u, 0x225198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225198u;
label_225198:
    // 0x225198: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x225198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x22519c: 0x2a0f0009  slti        $t7, $s0, 0x9
    ctx->pc = 0x22519cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2251a0: 0x11e0fff8  beqz        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2251A0u;
    {
        const bool branch_taken_0x2251a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2251A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251A0u;
        // 0x2251a4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251a0) {
            ctx->pc = 0x225184u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225184;
        }
    }
    ctx->pc = 0x2251A8u;
    // 0x2251a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2251a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2251ac:
    // 0x2251ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2251acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251b0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2251b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2251b4: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x2251B4u;
    SET_GPR_U32(ctx, 31, 0x2251BCu);
    ctx->pc = 0x2251B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251B4u;
    // 0x2251b8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B28u, 0x2251B4u, 0x2251BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251BCu;
label_2251bc:
    // 0x2251bc: 0x2307821  addu        $t7, $s1, $s0
    ctx->pc = 0x2251bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2251c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2251c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2251c4: 0x81eeffff  lb          $t6, -0x1($t7)
    ctx->pc = 0x2251c4u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294967295)));
    // 0x2251c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2251c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2251cc: 0x26e9823  subu        $s3, $s3, $t6
    ctx->pc = 0x2251ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x2251d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2251d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2251d4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2251d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2251d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2251dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2251dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2251e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2251E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2251E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251E0u;
        // 0x2251e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2251E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2251E8u;
}

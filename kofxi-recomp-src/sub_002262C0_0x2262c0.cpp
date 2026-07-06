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

// Function: sub_002262C0
// Address: 0x2262c0 - 0x226358
void sub_002262C0_0x2262c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002262C0_0x2262c0");
#endif

    switch (ctx->pc) {
        case 0x2262f4u: goto label_2262f4;
        case 0x226310u: goto label_226310;
        case 0x226320u: goto label_226320;
        default: break;
    }

    ctx->pc = 0x2262c0u;

    // 0x2262c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2262c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2262c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2262c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2262c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2262c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2262cc: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x2262ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x2262d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2262d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2262d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2262d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2262d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262dc: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x2262dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x2262e0: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x2262e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2262e4: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x2262e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x2262e8: 0xffaa0040  sd          $t2, 0x40($sp)
    ctx->pc = 0x2262e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 10));
    // 0x2262ec: 0xc04b952  jal         func_12E548
    ctx->pc = 0x2262ECu;
    SET_GPR_U32(ctx, 31, 0x2262F4u);
    ctx->pc = 0x2262F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2262ECu;
    // 0x2262f0: 0xffab0048  sd          $t3, 0x48($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E548u, 0x2262ECu, 0x2262F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262F4u;
label_2262f4:
    // 0x2262f4: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2262F4u;
    {
        const bool branch_taken_0x2262f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2262F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262F4u;
        // 0x2262f8: 0x51782b  sltu        $t7, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262f4) {
            ctx->pc = 0x22634Cu;
            goto label_22634c;
        }
    }
    ctx->pc = 0x2262FCu;
    // 0x2262fc: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x2262FCu;
    {
        const bool branch_taken_0x2262fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2262fc) {
            ctx->pc = 0x22633Cu;
            goto label_22633c;
        }
    }
    ctx->pc = 0x226304u;
    // 0x226304: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x226304u;
    {
        const bool branch_taken_0x226304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226304u;
        // 0x226308: 0x2027821  addu        $t7, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226304) {
            ctx->pc = 0x226334u;
            goto label_226334;
        }
    }
    ctx->pc = 0x22630Cu;
    // 0x22630c: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x22630cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
label_226310:
    // 0x226310: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226310u;
    {
        const bool branch_taken_0x226310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226310u;
        // 0x226314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226310) {
            ctx->pc = 0x226320u;
            goto label_226320;
        }
    }
    ctx->pc = 0x226318u;
    // 0x226318: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x226318u;
    SET_GPR_U32(ctx, 31, 0x226320u);
    ctx->pc = 0x22631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226318u;
    // 0x22631c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x226318u, 0x226320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226320u;
label_226320:
    // 0x226320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22632c: 0x3e00008  jr          $ra
    ctx->pc = 0x22632Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22632Cu;
        // 0x226330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22632Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226334u;
label_226334:
    // 0x226334: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x226334u;
    {
        const bool branch_taken_0x226334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226334u;
        // 0x226338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226334) {
            ctx->pc = 0x226320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226320;
        }
    }
    ctx->pc = 0x22633Cu;
label_22633c:
    // 0x22633c: 0x1220fff4  beqz        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x22633Cu;
    {
        const bool branch_taken_0x22633c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22633c) {
            ctx->pc = 0x226310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226310;
        }
    }
    ctx->pc = 0x226344u;
    // 0x226344: 0x1200fff6  beqz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x226344u;
    {
        const bool branch_taken_0x226344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226344u;
        // 0x226348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226344) {
            ctx->pc = 0x226320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226320;
        }
    }
    ctx->pc = 0x22634Cu;
label_22634c:
    // 0x22634c: 0x2117821  addu        $t7, $s0, $s1
    ctx->pc = 0x22634cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x226350: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x226350u;
    {
        const bool branch_taken_0x226350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226350u;
        // 0x226354: 0xa1e0ffff  sb          $zero, -0x1($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 4294967295), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226350) {
            ctx->pc = 0x226310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226310;
        }
    }
    ctx->pc = 0x226358u;
}

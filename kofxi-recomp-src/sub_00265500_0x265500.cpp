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

// Function: sub_00265500
// Address: 0x265500 - 0x2655b8
void sub_00265500_0x265500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265500_0x265500");
#endif

    switch (ctx->pc) {
        case 0x26553cu: goto label_26553c;
        case 0x265568u: goto label_265568;
        case 0x265580u: goto label_265580;
        case 0x265590u: goto label_265590;
        default: break;
    }

    ctx->pc = 0x265500u;

    // 0x265500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x265500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x265504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x265504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x265508: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x265508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26550c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26550cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265510: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x265510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x265514: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x265514u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265518: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x265518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26551c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x26551cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265520: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x265520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x265524: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x265524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265528: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x265528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26552c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26552cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265530: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x265530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x265534: 0xc098552  jal         func_261548
    ctx->pc = 0x265534u;
    SET_GPR_U32(ctx, 31, 0x26553Cu);
    ctx->pc = 0x265538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265534u;
    // 0x265538: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x265534u, 0x26553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26553Cu;
label_26553c:
    // 0x26553c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26553cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265540: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x265540u;
    {
        const bool branch_taken_0x265540 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x265540) {
            ctx->pc = 0x265544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265540u;
            // 0x265544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265550u;
            goto label_265550;
        }
    }
    ctx->pc = 0x265548u;
    // 0x265548: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x265548u;
    {
        const bool branch_taken_0x265548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265548u;
        // 0x26554c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265548) {
            ctx->pc = 0x265594u;
            goto label_265594;
        }
    }
    ctx->pc = 0x265550u;
label_265550:
    // 0x265550: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x265550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265554: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x265554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265558: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x265558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26555c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x26555cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x265560: 0xc09944c  jal         func_265130
    ctx->pc = 0x265560u;
    SET_GPR_U32(ctx, 31, 0x265568u);
    ctx->pc = 0x265564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265560u;
    // 0x265564: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265130u, 0x265560u, 0x265568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265568u;
label_265568:
    // 0x265568: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x265568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26556c: 0x12500006  beq         $s2, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26556Cu;
    {
        const bool branch_taken_0x26556c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x265570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26556Cu;
        // 0x265570: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26556c) {
            ctx->pc = 0x265588u;
            goto label_265588;
        }
    }
    ctx->pc = 0x265574u;
    // 0x265574: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x265574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265578: 0xc099342  jal         func_264D08
    ctx->pc = 0x265578u;
    SET_GPR_U32(ctx, 31, 0x265580u);
    ctx->pc = 0x26557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265578u;
    // 0x26557c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D08u, 0x265578u, 0x265580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265580u;
label_265580:
    // 0x265580: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x265580u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x265584: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x265584u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_265588:
    // 0x265588: 0xc098560  jal         func_261580
    ctx->pc = 0x265588u;
    SET_GPR_U32(ctx, 31, 0x265590u);
    ctx->pc = 0x26558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265588u;
    // 0x26558c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x265588u, 0x265590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265590u;
label_265590:
    // 0x265590: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x265590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265594:
    // 0x265594: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x265594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265598: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x265598u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26559c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26559cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2655a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2655a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2655a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2655a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2655a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2655a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2655ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2655acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2655b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2655B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2655B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655B0u;
        // 0x2655b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2655B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2655B8u;
}

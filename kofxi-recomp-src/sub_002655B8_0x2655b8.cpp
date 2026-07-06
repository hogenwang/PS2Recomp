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

// Function: sub_002655B8
// Address: 0x2655b8 - 0x265670
void sub_002655B8_0x2655b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002655B8_0x2655b8");
#endif

    switch (ctx->pc) {
        case 0x2655f4u: goto label_2655f4;
        case 0x265614u: goto label_265614;
        case 0x26563cu: goto label_26563c;
        case 0x265648u: goto label_265648;
        default: break;
    }

    ctx->pc = 0x2655b8u;

    // 0x2655b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2655b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2655bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2655bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2655c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2655c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2655c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2655c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2655c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2655cc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2655ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2655d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2655d4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2655d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2655d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2655dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2655dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2655e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2655e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2655e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2655e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2655ec: 0xc098552  jal         func_261548
    ctx->pc = 0x2655ECu;
    SET_GPR_U32(ctx, 31, 0x2655F4u);
    ctx->pc = 0x2655F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2655ECu;
    // 0x2655f0: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2655ECu, 0x2655F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655F4u;
label_2655f4:
    // 0x2655f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2655f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655f8: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2655F8u;
    {
        const bool branch_taken_0x2655f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2655f8) {
            ctx->pc = 0x2655FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2655F8u;
            // 0x2655fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265608u;
            goto label_265608;
        }
    }
    ctx->pc = 0x265600u;
    // 0x265600: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x265600u;
    {
        const bool branch_taken_0x265600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265600u;
        // 0x265604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265600) {
            ctx->pc = 0x26564Cu;
            goto label_26564c;
        }
    }
    ctx->pc = 0x265608u;
label_265608:
    // 0x265608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26560c: 0xc0993bc  jal         func_264EF0
    ctx->pc = 0x26560Cu;
    SET_GPR_U32(ctx, 31, 0x265614u);
    ctx->pc = 0x265610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26560Cu;
    // 0x265610: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264EF0u, 0x26560Cu, 0x265614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265614u;
label_265614:
    // 0x265614: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265618: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265618u;
    {
        const bool branch_taken_0x265618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265618u;
        // 0x26561c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265618) {
            ctx->pc = 0x265628u;
            goto label_265628;
        }
    }
    ctx->pc = 0x265620u;
    // 0x265620: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x265620u;
    {
        const bool branch_taken_0x265620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265620u;
        // 0x265624: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265620) {
            ctx->pc = 0x265640u;
            goto label_265640;
        }
    }
    ctx->pc = 0x265628u;
label_265628:
    // 0x265628: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x265628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26562c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26562cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265630: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x265630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265634: 0xc0994b8  jal         func_2652E0
    ctx->pc = 0x265634u;
    SET_GPR_U32(ctx, 31, 0x26563Cu);
    ctx->pc = 0x265638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265634u;
    // 0x265638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2652E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2652E0u, 0x265634u, 0x26563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26563Cu;
label_26563c:
    // 0x26563c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26563cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265640:
    // 0x265640: 0xc098560  jal         func_261580
    ctx->pc = 0x265640u;
    SET_GPR_U32(ctx, 31, 0x265648u);
    ctx->pc = 0x265644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265640u;
    // 0x265644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x265640u, 0x265648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265648u;
label_265648:
    // 0x265648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x265648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26564c:
    // 0x26564c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26564cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265650: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x265650u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265654: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x265654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265658: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x265658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26565c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26565cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265660: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x265660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x265664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265668: 0x3e00008  jr          $ra
    ctx->pc = 0x265668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265668u;
        // 0x26566c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265670u;
}

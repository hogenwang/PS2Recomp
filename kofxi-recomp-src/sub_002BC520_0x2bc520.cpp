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

// Function: sub_002BC520
// Address: 0x2bc520 - 0x2bc5b0
void sub_002BC520_0x2bc520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC520_0x2bc520");
#endif

    switch (ctx->pc) {
        case 0x2bc520u: goto label_2bc520;
        case 0x2bc524u: goto label_2bc524;
        case 0x2bc528u: goto label_2bc528;
        case 0x2bc52cu: goto label_2bc52c;
        case 0x2bc530u: goto label_2bc530;
        case 0x2bc534u: goto label_2bc534;
        case 0x2bc538u: goto label_2bc538;
        case 0x2bc53cu: goto label_2bc53c;
        case 0x2bc540u: goto label_2bc540;
        case 0x2bc544u: goto label_2bc544;
        case 0x2bc548u: goto label_2bc548;
        case 0x2bc54cu: goto label_2bc54c;
        case 0x2bc550u: goto label_2bc550;
        case 0x2bc554u: goto label_2bc554;
        case 0x2bc558u: goto label_2bc558;
        case 0x2bc55cu: goto label_2bc55c;
        case 0x2bc560u: goto label_2bc560;
        case 0x2bc564u: goto label_2bc564;
        case 0x2bc568u: goto label_2bc568;
        case 0x2bc56cu: goto label_2bc56c;
        case 0x2bc570u: goto label_2bc570;
        case 0x2bc574u: goto label_2bc574;
        case 0x2bc578u: goto label_2bc578;
        case 0x2bc57cu: goto label_2bc57c;
        case 0x2bc580u: goto label_2bc580;
        case 0x2bc584u: goto label_2bc584;
        case 0x2bc588u: goto label_2bc588;
        case 0x2bc58cu: goto label_2bc58c;
        case 0x2bc590u: goto label_2bc590;
        case 0x2bc594u: goto label_2bc594;
        case 0x2bc598u: goto label_2bc598;
        case 0x2bc59cu: goto label_2bc59c;
        case 0x2bc5a0u: goto label_2bc5a0;
        case 0x2bc5a4u: goto label_2bc5a4;
        case 0x2bc5a8u: goto label_2bc5a8;
        case 0x2bc5acu: goto label_2bc5ac;
        default: break;
    }

    ctx->pc = 0x2bc520u;

label_2bc520:
    // 0x2bc520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bc520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bc524:
    // 0x2bc524: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bc524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2bc528:
    // 0x2bc528: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bc528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bc52c:
    // 0x2bc52c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bc52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bc530:
    // 0x2bc530: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bc530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2bc534:
    // 0x2bc534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bc538:
    // 0x2bc538: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2bc53c:
    if (ctx->pc == 0x2BC53Cu) {
        ctx->pc = 0x2BC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC538u;
        // 0x2bc53c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC540u;
        goto label_2bc540;
    }
    ctx->pc = 0x2BC538u;
    {
        const bool branch_taken_0x2bc538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC538u;
        // 0x2bc53c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc538) {
            ctx->pc = 0x2BC598u;
            goto label_2bc598;
        }
    }
    ctx->pc = 0x2BC540u;
label_2bc540:
    // 0x2bc540: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc544:
    // 0x2bc544: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
label_2bc548:
    if (ctx->pc == 0x2BC548u) {
        ctx->pc = 0x2BC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC544u;
        // 0x2bc548: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC54Cu;
        goto label_2bc54c;
    }
    ctx->pc = 0x2BC544u;
    {
        const bool branch_taken_0x2bc544 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2BC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC544u;
        // 0x2bc548: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc544) {
            ctx->pc = 0x2BC57Cu;
            goto label_2bc57c;
        }
    }
    ctx->pc = 0x2BC54Cu;
label_2bc54c:
    // 0x2bc54c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2bc54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bc550:
    // 0x2bc550: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2bc550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2bc554:
    // 0x2bc554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bc558:
    // 0x2bc558: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2bc558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bc55c:
    // 0x2bc55c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2bc560:
    if (ctx->pc == 0x2BC560u) {
        ctx->pc = 0x2BC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC55Cu;
        // 0x2bc560: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC564u;
        goto label_2bc564;
    }
    ctx->pc = 0x2BC55Cu;
    {
        const bool branch_taken_0x2bc55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC55Cu;
        // 0x2bc560: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc55c) {
            ctx->pc = 0x2BC570u;
            goto label_2bc570;
        }
    }
    ctx->pc = 0x2BC564u;
label_2bc564:
    // 0x2bc564: 0x240f809  jalr        $s2
label_2bc568:
    if (ctx->pc == 0x2BC568u) {
        ctx->pc = 0x2BC56Cu;
        goto label_2bc56c;
    }
    ctx->pc = 0x2BC564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2BC56Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC564u, 0x2BC56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC56Cu;
label_2bc56c:
    // 0x2bc56c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc570:
    // 0x2bc570: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2bc570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2bc574:
    // 0x2bc574: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_2bc578:
    if (ctx->pc == 0x2BC578u) {
        ctx->pc = 0x2BC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC574u;
        // 0x2bc578: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC57Cu;
        goto label_2bc57c;
    }
    ctx->pc = 0x2BC574u;
    {
        const bool branch_taken_0x2bc574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc574) {
            ctx->pc = 0x2BC578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC574u;
            // 0x2bc578: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc550;
        }
    }
    ctx->pc = 0x2BC57Cu;
label_2bc57c:
    // 0x2bc57c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc580:
    // 0x2bc580: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bc580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bc584:
    // 0x2bc584: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bc584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc588:
    // 0x2bc588: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bc588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc58c:
    // 0x2bc58c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc590:
    // 0x2bc590: 0x80af138  j           func_2BC4E0
label_2bc594:
    if (ctx->pc == 0x2BC594u) {
        ctx->pc = 0x2BC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC590u;
        // 0x2bc594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC598u;
        goto label_2bc598;
    }
    ctx->pc = 0x2BC590u;
    ctx->pc = 0x2BC594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC590u;
    // 0x2bc594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4E0u;
    sub_002BC4E0_0x2bc4e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2BC598u;
label_2bc598:
    // 0x2bc598: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bc598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bc59c:
    // 0x2bc59c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bc59cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc5a0:
    // 0x2bc5a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bc5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc5a4:
    // 0x2bc5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc5a8:
    // 0x2bc5a8: 0x3e00008  jr          $ra
label_2bc5ac:
    if (ctx->pc == 0x2BC5ACu) {
        ctx->pc = 0x2BC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5A8u;
        // 0x2bc5ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC5B0u;
        goto label_fallthrough_0x2bc5a8;
    }
    ctx->pc = 0x2BC5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5A8u;
        // 0x2bc5ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bc5a8:
    ctx->pc = 0x2BC5B0u;
}

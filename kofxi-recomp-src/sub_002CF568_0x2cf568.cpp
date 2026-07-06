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

// Function: sub_002CF568
// Address: 0x2cf568 - 0x2cf600
void sub_002CF568_0x2cf568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF568_0x2cf568");
#endif

    switch (ctx->pc) {
        case 0x2cf568u: goto label_2cf568;
        case 0x2cf56cu: goto label_2cf56c;
        case 0x2cf570u: goto label_2cf570;
        case 0x2cf574u: goto label_2cf574;
        case 0x2cf578u: goto label_2cf578;
        case 0x2cf57cu: goto label_2cf57c;
        case 0x2cf580u: goto label_2cf580;
        case 0x2cf584u: goto label_2cf584;
        case 0x2cf588u: goto label_2cf588;
        case 0x2cf58cu: goto label_2cf58c;
        case 0x2cf590u: goto label_2cf590;
        case 0x2cf594u: goto label_2cf594;
        case 0x2cf598u: goto label_2cf598;
        case 0x2cf59cu: goto label_2cf59c;
        case 0x2cf5a0u: goto label_2cf5a0;
        case 0x2cf5a4u: goto label_2cf5a4;
        case 0x2cf5a8u: goto label_2cf5a8;
        case 0x2cf5acu: goto label_2cf5ac;
        case 0x2cf5b0u: goto label_2cf5b0;
        case 0x2cf5b4u: goto label_2cf5b4;
        case 0x2cf5b8u: goto label_2cf5b8;
        case 0x2cf5bcu: goto label_2cf5bc;
        case 0x2cf5c0u: goto label_2cf5c0;
        case 0x2cf5c4u: goto label_2cf5c4;
        case 0x2cf5c8u: goto label_2cf5c8;
        case 0x2cf5ccu: goto label_2cf5cc;
        case 0x2cf5d0u: goto label_2cf5d0;
        case 0x2cf5d4u: goto label_2cf5d4;
        case 0x2cf5d8u: goto label_2cf5d8;
        case 0x2cf5dcu: goto label_2cf5dc;
        case 0x2cf5e0u: goto label_2cf5e0;
        case 0x2cf5e4u: goto label_2cf5e4;
        case 0x2cf5e8u: goto label_2cf5e8;
        case 0x2cf5ecu: goto label_2cf5ec;
        case 0x2cf5f0u: goto label_2cf5f0;
        case 0x2cf5f4u: goto label_2cf5f4;
        case 0x2cf5f8u: goto label_2cf5f8;
        case 0x2cf5fcu: goto label_2cf5fc;
        default: break;
    }

    ctx->pc = 0x2cf568u;

label_2cf568:
    // 0x2cf568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cf56c:
    // 0x2cf56c: 0x24020212  addiu       $v0, $zero, 0x212
    ctx->pc = 0x2cf56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
label_2cf570:
    // 0x2cf570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2cf574:
    // 0x2cf574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf578:
    // 0x2cf578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2cf57c:
    // 0x2cf57c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cf57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cf580:
    // 0x2cf580: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2cf584:
    // 0x2cf584: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cf584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cf588:
    // 0x2cf588: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_2cf58c:
    if (ctx->pc == 0x2CF58Cu) {
        ctx->pc = 0x2CF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF588u;
        // 0x2cf58c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF590u;
        goto label_2cf590;
    }
    ctx->pc = 0x2CF588u;
    {
        const bool branch_taken_0x2cf588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF588u;
        // 0x2cf58c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf588) {
            ctx->pc = 0x2CF5E8u;
            goto label_2cf5e8;
        }
    }
    ctx->pc = 0x2CF590u;
label_2cf590:
    // 0x2cf590: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2cf590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cf594:
    // 0x2cf594: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2cf598:
    if (ctx->pc == 0x2CF598u) {
        ctx->pc = 0x2CF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF594u;
        // 0x2cf598: 0x24020211  addiu       $v0, $zero, 0x211 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF59Cu;
        goto label_2cf59c;
    }
    ctx->pc = 0x2CF594u;
    {
        const bool branch_taken_0x2cf594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF594u;
        // 0x2cf598: 0x24020211  addiu       $v0, $zero, 0x211 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf594) {
            ctx->pc = 0x2CF5E8u;
            goto label_2cf5e8;
        }
    }
    ctx->pc = 0x2CF59Cu;
label_2cf59c:
    // 0x2cf59c: 0xc0b3d2e  jal         func_2CF4B8
label_2cf5a0:
    if (ctx->pc == 0x2CF5A0u) {
        ctx->pc = 0x2CF5A4u;
        goto label_2cf5a4;
    }
    ctx->pc = 0x2CF59Cu;
    SET_GPR_U32(ctx, 31, 0x2CF5A4u);
    ctx->pc = 0x2CF4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4B8u, 0x2CF59Cu, 0x2CF5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5A4u;
label_2cf5a4:
    // 0x2cf5a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cf5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cf5a8:
    // 0x2cf5a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2cf5ac:
    if (ctx->pc == 0x2CF5ACu) {
        ctx->pc = 0x2CF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5A8u;
        // 0x2cf5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF5B0u;
        goto label_2cf5b0;
    }
    ctx->pc = 0x2CF5A8u;
    {
        const bool branch_taken_0x2cf5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5A8u;
        // 0x2cf5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf5a8) {
            ctx->pc = 0x2CF5E8u;
            goto label_2cf5e8;
        }
    }
    ctx->pc = 0x2CF5B0u;
label_2cf5b0:
    // 0x2cf5b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2cf5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2cf5b4:
    // 0x2cf5b4: 0x40f809  jalr        $v0
label_2cf5b8:
    if (ctx->pc == 0x2CF5B8u) {
        ctx->pc = 0x2CF5BCu;
        goto label_2cf5bc;
    }
    ctx->pc = 0x2CF5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF5BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF5B4u, 0x2CF5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF5BCu;
label_2cf5bc:
    // 0x2cf5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf5c0:
    // 0x2cf5c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2cf5c4:
    if (ctx->pc == 0x2CF5C4u) {
        ctx->pc = 0x2CF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5C0u;
        // 0x2cf5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF5C8u;
        goto label_2cf5c8;
    }
    ctx->pc = 0x2CF5C0u;
    {
        const bool branch_taken_0x2cf5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5C0u;
        // 0x2cf5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf5c0) {
            ctx->pc = 0x2CF5E8u;
            goto label_2cf5e8;
        }
    }
    ctx->pc = 0x2CF5C8u;
label_2cf5c8:
    // 0x2cf5c8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2cf5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cf5cc:
    // 0x2cf5cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf5d0:
    // 0x2cf5d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cf5d4:
    // 0x2cf5d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf5d8:
    // 0x2cf5d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cf5dc:
    // 0x2cf5dc: 0x80b3d08  j           func_2CF420
label_2cf5e0:
    if (ctx->pc == 0x2CF5E0u) {
        ctx->pc = 0x2CF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5DCu;
        // 0x2cf5e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF5E4u;
        goto label_2cf5e4;
    }
    ctx->pc = 0x2CF5DCu;
    ctx->pc = 0x2CF5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5DCu;
    // 0x2cf5e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    sub_002CF420_0x2cf420(rdram, ctx, runtime); return;
    ctx->pc = 0x2CF5E4u;
label_2cf5e4:
    // 0x2cf5e4: 0x0  nop
    ctx->pc = 0x2cf5e4u;
    // NOP
label_2cf5e8:
    // 0x2cf5e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf5ec:
    // 0x2cf5ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2cf5f0:
    // 0x2cf5f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf5f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf5f4:
    // 0x2cf5f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cf5f8:
    // 0x2cf5f8: 0x3e00008  jr          $ra
label_2cf5fc:
    if (ctx->pc == 0x2CF5FCu) {
        ctx->pc = 0x2CF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5F8u;
        // 0x2cf5fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF600u;
        goto label_fallthrough_0x2cf5f8;
    }
    ctx->pc = 0x2CF5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5F8u;
        // 0x2cf5fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cf5f8:
    ctx->pc = 0x2CF600u;
}

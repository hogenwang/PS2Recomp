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

// Function: sub_001F0528
// Address: 0x1f0528 - 0x1f05d8
void sub_001F0528_0x1f0528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0528_0x1f0528");
#endif

    switch (ctx->pc) {
        case 0x1f055cu: goto label_1f055c;
        case 0x1f0570u: goto label_1f0570;
        case 0x1f0580u: goto label_1f0580;
        case 0x1f0594u: goto label_1f0594;
        default: break;
    }

    ctx->pc = 0x1f0528u;

    // 0x1f0528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f052c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f0530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0534: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f0534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f0538: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1f0538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f053c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0540: 0x26222010  addiu       $v0, $s1, 0x2010
    ctx->pc = 0x1f0540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8208));
    // 0x1f0544: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f0544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f0548: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f0548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f054c: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x1f054cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f0550: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x1f0550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f0554: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1F0554u;
    SET_GPR_U32(ctx, 31, 0x1F055Cu);
    ctx->pc = 0x1F0558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0554u;
    // 0x1f0558: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB570u, 0x1F0554u, 0x1F055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F055Cu;
label_1f055c:
    // 0x1f055c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f055cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0560: 0x10530015  beq         $v0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0560u;
    {
        const bool branch_taken_0x1f0560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1F0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0560u;
        // 0x1f0564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0560) {
            ctx->pc = 0x1F05B8u;
            goto label_1f05b8;
        }
    }
    ctx->pc = 0x1F0568u;
    // 0x1f0568: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1F0568u;
    SET_GPR_U32(ctx, 31, 0x1F0570u);
    ctx->pc = 0x1EB570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB570u, 0x1F0568u, 0x1F0570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0570u;
label_1f0570:
    // 0x1f0570: 0x54530012  bnel        $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F0570u;
    {
        const bool branch_taken_0x1f0570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1f0570) {
            ctx->pc = 0x1F0574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0570u;
            // 0x1f0574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F05BCu;
            goto label_1f05bc;
        }
    }
    ctx->pc = 0x1F0578u;
    // 0x1f0578: 0xc07c176  jal         func_1F05D8
    ctx->pc = 0x1F0578u;
    SET_GPR_U32(ctx, 31, 0x1F0580u);
    ctx->pc = 0x1F057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0578u;
    // 0x1f057c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F05D8u, 0x1F0578u, 0x1F0580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0580u;
label_1f0580:
    // 0x1f0580: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0580u;
    {
        const bool branch_taken_0x1f0580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0580u;
        // 0x1f0584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0580) {
            ctx->pc = 0x1F05B8u;
            goto label_1f05b8;
        }
    }
    ctx->pc = 0x1F0588u;
    // 0x1f0588: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f0588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f058c: 0xc07ad50  jal         func_1EB540
    ctx->pc = 0x1F058Cu;
    SET_GPR_U32(ctx, 31, 0x1F0594u);
    ctx->pc = 0x1F0590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F058Cu;
    // 0x1f0590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB540u, 0x1F058Cu, 0x1F0594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0594u;
label_1f0594:
    // 0x1f0594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f059c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f059cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f05a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f05a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f05a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f05a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f05a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f05a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f05ac: 0x807c1e2  j           func_1F0788
    ctx->pc = 0x1F05ACu;
    ctx->pc = 0x1F05B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05ACu;
    // 0x1f05b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0788u, 0x1F05ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F05B4u;
    // 0x1f05b4: 0x0  nop
    ctx->pc = 0x1f05b4u;
    // NOP
label_1f05b8:
    // 0x1f05b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f05b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f05bc:
    // 0x1f05bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f05bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f05c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f05c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f05c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f05c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f05c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f05c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f05cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F05CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05CCu;
        // 0x1f05d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F05CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F05D4u;
    // 0x1f05d4: 0x0  nop
    ctx->pc = 0x1f05d4u;
    // NOP
}

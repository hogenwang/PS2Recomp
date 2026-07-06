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

// Function: sub_001BA710
// Address: 0x1ba710 - 0x1ba7b8
void sub_001BA710_0x1ba710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA710_0x1ba710");
#endif

    switch (ctx->pc) {
        case 0x1ba710u: goto label_1ba710;
        case 0x1ba714u: goto label_1ba714;
        case 0x1ba718u: goto label_1ba718;
        case 0x1ba71cu: goto label_1ba71c;
        case 0x1ba720u: goto label_1ba720;
        case 0x1ba724u: goto label_1ba724;
        case 0x1ba728u: goto label_1ba728;
        case 0x1ba72cu: goto label_1ba72c;
        case 0x1ba730u: goto label_1ba730;
        case 0x1ba734u: goto label_1ba734;
        case 0x1ba738u: goto label_1ba738;
        case 0x1ba73cu: goto label_1ba73c;
        case 0x1ba740u: goto label_1ba740;
        case 0x1ba744u: goto label_1ba744;
        case 0x1ba748u: goto label_1ba748;
        case 0x1ba74cu: goto label_1ba74c;
        case 0x1ba750u: goto label_1ba750;
        case 0x1ba754u: goto label_1ba754;
        case 0x1ba758u: goto label_1ba758;
        case 0x1ba75cu: goto label_1ba75c;
        case 0x1ba760u: goto label_1ba760;
        case 0x1ba764u: goto label_1ba764;
        case 0x1ba768u: goto label_1ba768;
        case 0x1ba76cu: goto label_1ba76c;
        case 0x1ba770u: goto label_1ba770;
        case 0x1ba774u: goto label_1ba774;
        case 0x1ba778u: goto label_1ba778;
        case 0x1ba77cu: goto label_1ba77c;
        case 0x1ba780u: goto label_1ba780;
        case 0x1ba784u: goto label_1ba784;
        case 0x1ba788u: goto label_1ba788;
        case 0x1ba78cu: goto label_1ba78c;
        case 0x1ba790u: goto label_1ba790;
        case 0x1ba794u: goto label_1ba794;
        case 0x1ba798u: goto label_1ba798;
        case 0x1ba79cu: goto label_1ba79c;
        case 0x1ba7a0u: goto label_1ba7a0;
        case 0x1ba7a4u: goto label_1ba7a4;
        case 0x1ba7a8u: goto label_1ba7a8;
        case 0x1ba7acu: goto label_1ba7ac;
        case 0x1ba7b0u: goto label_1ba7b0;
        case 0x1ba7b4u: goto label_1ba7b4;
        default: break;
    }

    ctx->pc = 0x1ba710u;

label_1ba710:
    // 0x1ba710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ba714:
    // 0x1ba714: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1ba718:
    if (ctx->pc == 0x1BA718u) {
        ctx->pc = 0x1BA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA714u;
        // 0x1ba718: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA71Cu;
        goto label_1ba71c;
    }
    ctx->pc = 0x1BA714u;
    {
        const bool branch_taken_0x1ba714 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA714u;
        // 0x1ba718: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba714) {
            ctx->pc = 0x1BA730u;
            goto label_1ba730;
        }
    }
    ctx->pc = 0x1BA71Cu;
label_1ba71c:
    // 0x1ba71c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ba720:
    // 0x1ba720: 0xc06ba0a  jal         func_1AE828
label_1ba724:
    if (ctx->pc == 0x1BA724u) {
        ctx->pc = 0x1BA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA720u;
        // 0x1ba724: 0x24848448  addiu       $a0, $a0, -0x7BB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA728u;
        goto label_1ba728;
    }
    ctx->pc = 0x1BA720u;
    SET_GPR_U32(ctx, 31, 0x1BA728u);
    ctx->pc = 0x1BA724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA720u;
    // 0x1ba724: 0x24848448  addiu       $a0, $a0, -0x7BB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1BA720u, 0x1BA728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA728u;
label_1ba728:
    // 0x1ba728: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ba72c:
    if (ctx->pc == 0x1BA72Cu) {
        ctx->pc = 0x1BA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA728u;
        // 0x1ba72c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA730u;
        goto label_1ba730;
    }
    ctx->pc = 0x1BA728u;
    {
        const bool branch_taken_0x1ba728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA728u;
        // 0x1ba72c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba728) {
            ctx->pc = 0x1BA764u;
            goto label_1ba764;
        }
    }
    ctx->pc = 0x1BA730u;
label_1ba730:
    // 0x1ba730: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1ba730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1ba734:
    // 0x1ba734: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1ba738:
    if (ctx->pc == 0x1BA738u) {
        ctx->pc = 0x1BA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA734u;
        // 0x1ba738: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA73Cu;
        goto label_1ba73c;
    }
    ctx->pc = 0x1BA734u;
    {
        const bool branch_taken_0x1ba734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA734u;
        // 0x1ba738: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba734) {
            ctx->pc = 0x1BA760u;
            goto label_1ba760;
        }
    }
    ctx->pc = 0x1BA73Cu;
label_1ba73c:
    // 0x1ba73c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ba73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba740:
    // 0x1ba740: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ba740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ba744:
    // 0x1ba744: 0x40f809  jalr        $v0
label_1ba748:
    if (ctx->pc == 0x1BA748u) {
        ctx->pc = 0x1BA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA744u;
        // 0x1ba748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA74Cu;
        goto label_1ba74c;
    }
    ctx->pc = 0x1BA744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA74Cu);
        ctx->pc = 0x1BA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA744u;
        // 0x1ba748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA744u, 0x1BA74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA74Cu;
label_1ba74c:
    // 0x1ba74c: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x1ba74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_1ba750:
    // 0x1ba750: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1ba750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1ba754:
    // 0x1ba754: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1ba754u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1ba758:
    // 0x1ba758: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ba75c:
    if (ctx->pc == 0x1BA75Cu) {
        ctx->pc = 0x1BA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA758u;
        // 0x1ba75c: 0x212c3  sra         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA760u;
        goto label_1ba760;
    }
    ctx->pc = 0x1BA758u;
    {
        const bool branch_taken_0x1ba758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA758u;
        // 0x1ba75c: 0x212c3  sra         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba758) {
            ctx->pc = 0x1BA764u;
            goto label_1ba764;
        }
    }
    ctx->pc = 0x1BA760u;
label_1ba760:
    // 0x1ba760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba764:
    // 0x1ba764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba768:
    // 0x1ba768: 0x3e00008  jr          $ra
label_1ba76c:
    if (ctx->pc == 0x1BA76Cu) {
        ctx->pc = 0x1BA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA768u;
        // 0x1ba76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA770u;
        goto label_1ba770;
    }
    ctx->pc = 0x1BA768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA768u;
        // 0x1ba76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA770u;
label_1ba770:
    // 0x1ba770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ba774:
    // 0x1ba774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ba778:
    // 0x1ba778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba77c:
    // 0x1ba77c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ba780:
    // 0x1ba780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ba784:
    // 0x1ba784: 0xc06b49a  jal         func_1AD268
label_1ba788:
    if (ctx->pc == 0x1BA788u) {
        ctx->pc = 0x1BA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA784u;
        // 0x1ba788: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA78Cu;
        goto label_1ba78c;
    }
    ctx->pc = 0x1BA784u;
    SET_GPR_U32(ctx, 31, 0x1BA78Cu);
    ctx->pc = 0x1BA788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA784u;
    // 0x1ba788: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BA784u, 0x1BA78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA78Cu;
label_1ba78c:
    // 0x1ba78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba790:
    // 0x1ba790: 0xc06e9ee  jal         func_1BA7B8
label_1ba794:
    if (ctx->pc == 0x1BA794u) {
        ctx->pc = 0x1BA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA790u;
        // 0x1ba794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA798u;
        goto label_1ba798;
    }
    ctx->pc = 0x1BA790u;
    SET_GPR_U32(ctx, 31, 0x1BA798u);
    ctx->pc = 0x1BA794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA790u;
    // 0x1ba794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA7B8u, 0x1BA790u, 0x1BA798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA798u;
label_1ba798:
    // 0x1ba798: 0xc06b49c  jal         func_1AD270
label_1ba79c:
    if (ctx->pc == 0x1BA79Cu) {
        ctx->pc = 0x1BA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA798u;
        // 0x1ba79c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7A0u;
        goto label_1ba7a0;
    }
    ctx->pc = 0x1BA798u;
    SET_GPR_U32(ctx, 31, 0x1BA7A0u);
    ctx->pc = 0x1BA79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA798u;
    // 0x1ba79c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BA798u, 0x1BA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA7A0u;
label_1ba7a0:
    // 0x1ba7a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ba7a4:
    // 0x1ba7a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba7a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7a8:
    // 0x1ba7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba7ac:
    // 0x1ba7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba7b0:
    // 0x1ba7b0: 0x3e00008  jr          $ra
label_1ba7b4:
    if (ctx->pc == 0x1BA7B4u) {
        ctx->pc = 0x1BA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7B0u;
        // 0x1ba7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7B8u;
        goto label_fallthrough_0x1ba7b0;
    }
    ctx->pc = 0x1BA7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7B0u;
        // 0x1ba7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ba7b0:
    ctx->pc = 0x1BA7B8u;
}

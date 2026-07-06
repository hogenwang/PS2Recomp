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

// Function: sub_002BF730
// Address: 0x2bf730 - 0x2bf7b0
void sub_002BF730_0x2bf730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF730_0x2bf730");
#endif

    switch (ctx->pc) {
        case 0x2bf730u: goto label_2bf730;
        case 0x2bf734u: goto label_2bf734;
        case 0x2bf738u: goto label_2bf738;
        case 0x2bf73cu: goto label_2bf73c;
        case 0x2bf740u: goto label_2bf740;
        case 0x2bf744u: goto label_2bf744;
        case 0x2bf748u: goto label_2bf748;
        case 0x2bf74cu: goto label_2bf74c;
        case 0x2bf750u: goto label_2bf750;
        case 0x2bf754u: goto label_2bf754;
        case 0x2bf758u: goto label_2bf758;
        case 0x2bf75cu: goto label_2bf75c;
        case 0x2bf760u: goto label_2bf760;
        case 0x2bf764u: goto label_2bf764;
        case 0x2bf768u: goto label_2bf768;
        case 0x2bf76cu: goto label_2bf76c;
        case 0x2bf770u: goto label_2bf770;
        case 0x2bf774u: goto label_2bf774;
        case 0x2bf778u: goto label_2bf778;
        case 0x2bf77cu: goto label_2bf77c;
        case 0x2bf780u: goto label_2bf780;
        case 0x2bf784u: goto label_2bf784;
        case 0x2bf788u: goto label_2bf788;
        case 0x2bf78cu: goto label_2bf78c;
        case 0x2bf790u: goto label_2bf790;
        case 0x2bf794u: goto label_2bf794;
        case 0x2bf798u: goto label_2bf798;
        case 0x2bf79cu: goto label_2bf79c;
        case 0x2bf7a0u: goto label_2bf7a0;
        case 0x2bf7a4u: goto label_2bf7a4;
        case 0x2bf7a8u: goto label_2bf7a8;
        case 0x2bf7acu: goto label_2bf7ac;
        default: break;
    }

    ctx->pc = 0x2bf730u;

label_2bf730:
    // 0x2bf730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bf734:
    // 0x2bf734: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bf734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bf738:
    // 0x2bf738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bf738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf73c:
    // 0x2bf73c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bf740:
    // 0x2bf740: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bf740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bf744:
    // 0x2bf744: 0xc0a8bf6  jal         func_2A2FD8
label_2bf748:
    if (ctx->pc == 0x2BF748u) {
        ctx->pc = 0x2BF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF744u;
        // 0x2bf748: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF74Cu;
        goto label_2bf74c;
    }
    ctx->pc = 0x2BF744u;
    SET_GPR_U32(ctx, 31, 0x2BF74Cu);
    ctx->pc = 0x2BF748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF744u;
    // 0x2bf748: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2BF744u, 0x2BF74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF74Cu;
label_2bf74c:
    // 0x2bf74c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf750:
    // 0x2bf750: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_2bf754:
    if (ctx->pc == 0x2BF754u) {
        ctx->pc = 0x2BF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF750u;
        // 0x2bf754: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF758u;
        goto label_2bf758;
    }
    ctx->pc = 0x2BF750u;
    {
        const bool branch_taken_0x2bf750 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf750) {
            ctx->pc = 0x2BF754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF750u;
            // 0x2bf754: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF760u;
            goto label_2bf760;
        }
    }
    ctx->pc = 0x2BF758u;
label_2bf758:
    // 0x2bf758: 0x1000000f  b           . + 4 + (0xF << 2)
label_2bf75c:
    if (ctx->pc == 0x2BF75Cu) {
        ctx->pc = 0x2BF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF758u;
        // 0x2bf75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF760u;
        goto label_2bf760;
    }
    ctx->pc = 0x2BF758u;
    {
        const bool branch_taken_0x2bf758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF758u;
        // 0x2bf75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf758) {
            ctx->pc = 0x2BF798u;
            goto label_2bf798;
        }
    }
    ctx->pc = 0x2BF760u;
label_2bf760:
    // 0x2bf760: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2bf760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2bf764:
    // 0x2bf764: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2bf764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_2bf768:
    // 0x2bf768: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2bf768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2bf76c:
    // 0x2bf76c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2bf76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2bf770:
    // 0x2bf770: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bf770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bf774:
    // 0x2bf774: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2bf778:
    if (ctx->pc == 0x2BF778u) {
        ctx->pc = 0x2BF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF774u;
        // 0x2bf778: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF77Cu;
        goto label_2bf77c;
    }
    ctx->pc = 0x2BF774u;
    {
        const bool branch_taken_0x2bf774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf774) {
            ctx->pc = 0x2BF778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF774u;
            // 0x2bf778: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF798u;
            goto label_2bf798;
        }
    }
    ctx->pc = 0x2BF77Cu;
label_2bf77c:
    // 0x2bf77c: 0x40f809  jalr        $v0
label_2bf780:
    if (ctx->pc == 0x2BF780u) {
        ctx->pc = 0x2BF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF77Cu;
        // 0x2bf780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF784u;
        goto label_2bf784;
    }
    ctx->pc = 0x2BF77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF784u);
        ctx->pc = 0x2BF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF77Cu;
        // 0x2bf780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF77Cu, 0x2BF784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF784u;
label_2bf784:
    // 0x2bf784: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2bf788:
    if (ctx->pc == 0x2BF788u) {
        ctx->pc = 0x2BF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF784u;
        // 0x2bf788: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF78Cu;
        goto label_2bf78c;
    }
    ctx->pc = 0x2BF784u;
    {
        const bool branch_taken_0x2bf784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF784u;
        // 0x2bf788: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf784) {
            ctx->pc = 0x2BF798u;
            goto label_2bf798;
        }
    }
    ctx->pc = 0x2BF78Cu;
label_2bf78c:
    // 0x2bf78c: 0xc0a8c0a  jal         func_2A3028
label_2bf790:
    if (ctx->pc == 0x2BF790u) {
        ctx->pc = 0x2BF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF78Cu;
        // 0x2bf790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF794u;
        goto label_2bf794;
    }
    ctx->pc = 0x2BF78Cu;
    SET_GPR_U32(ctx, 31, 0x2BF794u);
    ctx->pc = 0x2BF790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF78Cu;
    // 0x2bf790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2BF78Cu, 0x2BF794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF794u;
label_2bf794:
    // 0x2bf794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf798:
    // 0x2bf798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bf798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf79c:
    // 0x2bf79c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf7a0:
    // 0x2bf7a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf7a4:
    // 0x2bf7a4: 0x3e00008  jr          $ra
label_2bf7a8:
    if (ctx->pc == 0x2BF7A8u) {
        ctx->pc = 0x2BF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7A4u;
        // 0x2bf7a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7ACu;
        goto label_2bf7ac;
    }
    ctx->pc = 0x2BF7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7A4u;
        // 0x2bf7a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF7ACu;
label_2bf7ac:
    // 0x2bf7ac: 0x0  nop
    ctx->pc = 0x2bf7acu;
    // NOP
    if (ctx->pc == 0x2bf7acu) { ctx->pc = 0x2bf7b0u; }
}

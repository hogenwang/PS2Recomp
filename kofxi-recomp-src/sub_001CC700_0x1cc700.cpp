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

// Function: sub_001CC700
// Address: 0x1cc700 - 0x1cc8a0
void sub_001CC700_0x1cc700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC700_0x1cc700");
#endif

    switch (ctx->pc) {
        case 0x1cc700u: goto label_1cc700;
        case 0x1cc704u: goto label_1cc704;
        case 0x1cc708u: goto label_1cc708;
        case 0x1cc70cu: goto label_1cc70c;
        case 0x1cc710u: goto label_1cc710;
        case 0x1cc714u: goto label_1cc714;
        case 0x1cc718u: goto label_1cc718;
        case 0x1cc71cu: goto label_1cc71c;
        case 0x1cc720u: goto label_1cc720;
        case 0x1cc724u: goto label_1cc724;
        case 0x1cc728u: goto label_1cc728;
        case 0x1cc72cu: goto label_1cc72c;
        case 0x1cc730u: goto label_1cc730;
        case 0x1cc734u: goto label_1cc734;
        case 0x1cc738u: goto label_1cc738;
        case 0x1cc73cu: goto label_1cc73c;
        case 0x1cc740u: goto label_1cc740;
        case 0x1cc744u: goto label_1cc744;
        case 0x1cc748u: goto label_1cc748;
        case 0x1cc74cu: goto label_1cc74c;
        case 0x1cc750u: goto label_1cc750;
        case 0x1cc754u: goto label_1cc754;
        case 0x1cc758u: goto label_1cc758;
        case 0x1cc75cu: goto label_1cc75c;
        case 0x1cc760u: goto label_1cc760;
        case 0x1cc764u: goto label_1cc764;
        case 0x1cc768u: goto label_1cc768;
        case 0x1cc76cu: goto label_1cc76c;
        case 0x1cc770u: goto label_1cc770;
        case 0x1cc774u: goto label_1cc774;
        case 0x1cc778u: goto label_1cc778;
        case 0x1cc77cu: goto label_1cc77c;
        case 0x1cc780u: goto label_1cc780;
        case 0x1cc784u: goto label_1cc784;
        case 0x1cc788u: goto label_1cc788;
        case 0x1cc78cu: goto label_1cc78c;
        case 0x1cc790u: goto label_1cc790;
        case 0x1cc794u: goto label_1cc794;
        case 0x1cc798u: goto label_1cc798;
        case 0x1cc79cu: goto label_1cc79c;
        case 0x1cc7a0u: goto label_1cc7a0;
        case 0x1cc7a4u: goto label_1cc7a4;
        case 0x1cc7a8u: goto label_1cc7a8;
        case 0x1cc7acu: goto label_1cc7ac;
        case 0x1cc7b0u: goto label_1cc7b0;
        case 0x1cc7b4u: goto label_1cc7b4;
        case 0x1cc7b8u: goto label_1cc7b8;
        case 0x1cc7bcu: goto label_1cc7bc;
        case 0x1cc7c0u: goto label_1cc7c0;
        case 0x1cc7c4u: goto label_1cc7c4;
        case 0x1cc7c8u: goto label_1cc7c8;
        case 0x1cc7ccu: goto label_1cc7cc;
        case 0x1cc7d0u: goto label_1cc7d0;
        case 0x1cc7d4u: goto label_1cc7d4;
        case 0x1cc7d8u: goto label_1cc7d8;
        case 0x1cc7dcu: goto label_1cc7dc;
        case 0x1cc7e0u: goto label_1cc7e0;
        case 0x1cc7e4u: goto label_1cc7e4;
        case 0x1cc7e8u: goto label_1cc7e8;
        case 0x1cc7ecu: goto label_1cc7ec;
        case 0x1cc7f0u: goto label_1cc7f0;
        case 0x1cc7f4u: goto label_1cc7f4;
        case 0x1cc7f8u: goto label_1cc7f8;
        case 0x1cc7fcu: goto label_1cc7fc;
        case 0x1cc800u: goto label_1cc800;
        case 0x1cc804u: goto label_1cc804;
        case 0x1cc808u: goto label_1cc808;
        case 0x1cc80cu: goto label_1cc80c;
        case 0x1cc810u: goto label_1cc810;
        case 0x1cc814u: goto label_1cc814;
        case 0x1cc818u: goto label_1cc818;
        case 0x1cc81cu: goto label_1cc81c;
        case 0x1cc820u: goto label_1cc820;
        case 0x1cc824u: goto label_1cc824;
        case 0x1cc828u: goto label_1cc828;
        case 0x1cc82cu: goto label_1cc82c;
        case 0x1cc830u: goto label_1cc830;
        case 0x1cc834u: goto label_1cc834;
        case 0x1cc838u: goto label_1cc838;
        case 0x1cc83cu: goto label_1cc83c;
        case 0x1cc840u: goto label_1cc840;
        case 0x1cc844u: goto label_1cc844;
        case 0x1cc848u: goto label_1cc848;
        case 0x1cc84cu: goto label_1cc84c;
        case 0x1cc850u: goto label_1cc850;
        case 0x1cc854u: goto label_1cc854;
        case 0x1cc858u: goto label_1cc858;
        case 0x1cc85cu: goto label_1cc85c;
        case 0x1cc860u: goto label_1cc860;
        case 0x1cc864u: goto label_1cc864;
        case 0x1cc868u: goto label_1cc868;
        case 0x1cc86cu: goto label_1cc86c;
        case 0x1cc870u: goto label_1cc870;
        case 0x1cc874u: goto label_1cc874;
        case 0x1cc878u: goto label_1cc878;
        case 0x1cc87cu: goto label_1cc87c;
        case 0x1cc880u: goto label_1cc880;
        case 0x1cc884u: goto label_1cc884;
        case 0x1cc888u: goto label_1cc888;
        case 0x1cc88cu: goto label_1cc88c;
        case 0x1cc890u: goto label_1cc890;
        case 0x1cc894u: goto label_1cc894;
        case 0x1cc898u: goto label_1cc898;
        case 0x1cc89cu: goto label_1cc89c;
        default: break;
    }

    ctx->pc = 0x1cc700u;

label_1cc700:
    // 0x1cc700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cc704:
    // 0x1cc704: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1cc704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1cc708:
    // 0x1cc708: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cc708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cc70c:
    // 0x1cc70c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1cc70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1cc710:
    // 0x1cc710: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1cc710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1cc714:
    // 0x1cc714: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1cc718:
    if (ctx->pc == 0x1CC718u) {
        ctx->pc = 0x1CC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC714u;
        // 0x1cc718: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC71Cu;
        goto label_1cc71c;
    }
    ctx->pc = 0x1CC714u;
    {
        const bool branch_taken_0x1cc714 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC714u;
        // 0x1cc718: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc714) {
            ctx->pc = 0x1CC738u;
            goto label_1cc738;
        }
    }
    ctx->pc = 0x1CC71Cu;
label_1cc71c:
    // 0x1cc71c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cc720:
    // 0x1cc720: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cc724:
    // 0x1cc724: 0x2484bc40  addiu       $a0, $a0, -0x43C0
    ctx->pc = 0x1cc724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949952));
label_1cc728:
    // 0x1cc728: 0xc073006  jal         func_1CC018
label_1cc72c:
    if (ctx->pc == 0x1CC72Cu) {
        ctx->pc = 0x1CC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC728u;
        // 0x1cc72c: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC730u;
        goto label_1cc730;
    }
    ctx->pc = 0x1CC728u;
    SET_GPR_U32(ctx, 31, 0x1CC730u);
    ctx->pc = 0x1CC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC728u;
    // 0x1cc72c: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC018u, 0x1CC728u, 0x1CC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC730u;
label_1cc730:
    // 0x1cc730: 0x10000042  b           . + 4 + (0x42 << 2)
label_1cc734:
    if (ctx->pc == 0x1CC734u) {
        ctx->pc = 0x1CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC730u;
        // 0x1cc734: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC738u;
        goto label_1cc738;
    }
    ctx->pc = 0x1CC730u;
    {
        const bool branch_taken_0x1cc730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC730u;
        // 0x1cc734: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc730) {
            ctx->pc = 0x1CC83Cu;
            goto label_1cc83c;
        }
    }
    ctx->pc = 0x1CC738u;
label_1cc738:
    // 0x1cc738: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1cc738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1cc73c:
    // 0x1cc73c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1cc740:
    if (ctx->pc == 0x1CC740u) {
        ctx->pc = 0x1CC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC73Cu;
        // 0x1cc740: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC744u;
        goto label_1cc744;
    }
    ctx->pc = 0x1CC73Cu;
    {
        const bool branch_taken_0x1cc73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC73Cu;
        // 0x1cc740: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc73c) {
            ctx->pc = 0x1CC760u;
            goto label_1cc760;
        }
    }
    ctx->pc = 0x1CC744u;
label_1cc744:
    // 0x1cc744: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cc748:
    // 0x1cc748: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cc74c:
    // 0x1cc74c: 0x2484bc50  addiu       $a0, $a0, -0x43B0
    ctx->pc = 0x1cc74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949968));
label_1cc750:
    // 0x1cc750: 0xc073006  jal         func_1CC018
label_1cc754:
    if (ctx->pc == 0x1CC754u) {
        ctx->pc = 0x1CC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC750u;
        // 0x1cc754: 0x24a5bba0  addiu       $a1, $a1, -0x4460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC758u;
        goto label_1cc758;
    }
    ctx->pc = 0x1CC750u;
    SET_GPR_U32(ctx, 31, 0x1CC758u);
    ctx->pc = 0x1CC754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC750u;
    // 0x1cc754: 0x24a5bba0  addiu       $a1, $a1, -0x4460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC018u, 0x1CC750u, 0x1CC758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC758u;
label_1cc758:
    // 0x1cc758: 0x10000038  b           . + 4 + (0x38 << 2)
label_1cc75c:
    if (ctx->pc == 0x1CC75Cu) {
        ctx->pc = 0x1CC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC758u;
        // 0x1cc75c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC760u;
        goto label_1cc760;
    }
    ctx->pc = 0x1CC758u;
    {
        const bool branch_taken_0x1cc758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC758u;
        // 0x1cc75c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc758) {
            ctx->pc = 0x1CC83Cu;
            goto label_1cc83c;
        }
    }
    ctx->pc = 0x1CC760u;
label_1cc760:
    // 0x1cc760: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1cc764:
    if (ctx->pc == 0x1CC764u) {
        ctx->pc = 0x1CC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC760u;
        // 0x1cc764: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC768u;
        goto label_1cc768;
    }
    ctx->pc = 0x1CC760u;
    {
        const bool branch_taken_0x1cc760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC760u;
        // 0x1cc764: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc760) {
            ctx->pc = 0x1CC788u;
            goto label_1cc788;
        }
    }
    ctx->pc = 0x1CC768u;
label_1cc768:
    // 0x1cc768: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1cc768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1cc76c:
    // 0x1cc76c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_1cc770:
    if (ctx->pc == 0x1CC770u) {
        ctx->pc = 0x1CC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC76Cu;
        // 0x1cc770: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC774u;
        goto label_1cc774;
    }
    ctx->pc = 0x1CC76Cu;
    {
        const bool branch_taken_0x1cc76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc76c) {
            ctx->pc = 0x1CC770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC76Cu;
            // 0x1cc770: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC834u;
            goto label_1cc834;
        }
    }
    ctx->pc = 0x1CC774u;
label_1cc774:
    // 0x1cc774: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1cc774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1cc778:
    // 0x1cc778: 0x40f809  jalr        $v0
label_1cc77c:
    if (ctx->pc == 0x1CC77Cu) {
        ctx->pc = 0x1CC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC778u;
        // 0x1cc77c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC780u;
        goto label_1cc780;
    }
    ctx->pc = 0x1CC778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC780u);
        ctx->pc = 0x1CC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC778u;
        // 0x1cc77c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC778u, 0x1CC780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC780u;
label_1cc780:
    // 0x1cc780: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1cc784:
    if (ctx->pc == 0x1CC784u) {
        ctx->pc = 0x1CC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC780u;
        // 0x1cc784: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC788u;
        goto label_1cc788;
    }
    ctx->pc = 0x1CC780u;
    {
        const bool branch_taken_0x1cc780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC780u;
        // 0x1cc784: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc780) {
            ctx->pc = 0x1CC834u;
            goto label_1cc834;
        }
    }
    ctx->pc = 0x1CC788u;
label_1cc788:
    // 0x1cc788: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cc788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cc78c:
    // 0x1cc78c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x1cc78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1cc790:
    // 0x1cc790: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1cc790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cc794:
    // 0x1cc794: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
label_1cc798:
    if (ctx->pc == 0x1CC798u) {
        ctx->pc = 0x1CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC794u;
        // 0x1cc798: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC79Cu;
        goto label_1cc79c;
    }
    ctx->pc = 0x1CC794u;
    {
        const bool branch_taken_0x1cc794 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC794u;
        // 0x1cc798: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc794) {
            ctx->pc = 0x1CC830u;
            goto label_1cc830;
        }
    }
    ctx->pc = 0x1CC79Cu;
label_1cc79c:
    // 0x1cc79c: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x1cc79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1cc7a0:
    // 0x1cc7a0: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x1cc7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1cc7a4:
    // 0x1cc7a4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1cc7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc7a8:
    // 0x1cc7a8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1cc7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc7ac:
    // 0x1cc7ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cc7b0:
    // 0x1cc7b0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1cc7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1cc7b4:
    // 0x1cc7b4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1cc7b8:
    if (ctx->pc == 0x1CC7B8u) {
        ctx->pc = 0x1CC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7B4u;
        // 0x1cc7b8: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7BCu;
        goto label_1cc7bc;
    }
    ctx->pc = 0x1CC7B4u;
    {
        const bool branch_taken_0x1cc7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc7b4) {
            ctx->pc = 0x1CC7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC7B4u;
            // 0x1cc7b8: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC7E8u;
            goto label_1cc7e8;
        }
    }
    ctx->pc = 0x1CC7BCu;
label_1cc7bc:
    // 0x1cc7bc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1cc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1cc7c0:
    // 0x1cc7c0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1cc7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1cc7c4:
    // 0x1cc7c4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1cc7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1cc7c8:
    // 0x1cc7c8: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1cc7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc7cc:
    // 0x1cc7cc: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1cc7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc7d0:
    // 0x1cc7d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1cc7d4:
    // 0x1cc7d4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1cc7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1cc7d8:
    // 0x1cc7d8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1cc7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_1cc7dc:
    // 0x1cc7dc: 0x10000016  b           . + 4 + (0x16 << 2)
label_1cc7e0:
    if (ctx->pc == 0x1CC7E0u) {
        ctx->pc = 0x1CC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7DCu;
        // 0x1cc7e0: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7E4u;
        goto label_1cc7e4;
    }
    ctx->pc = 0x1CC7DCu;
    {
        const bool branch_taken_0x1cc7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7DCu;
        // 0x1cc7e0: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7dc) {
            ctx->pc = 0x1CC838u;
            goto label_1cc838;
        }
    }
    ctx->pc = 0x1CC7E4u;
label_1cc7e4:
    // 0x1cc7e4: 0x0  nop
    ctx->pc = 0x1cc7e4u;
    // NOP
label_1cc7e8:
    // 0x1cc7e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc7ec:
    // 0x1cc7ec: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_1cc7f0:
    if (ctx->pc == 0x1CC7F0u) {
        ctx->pc = 0x1CC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7ECu;
        // 0x1cc7f0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7F4u;
        goto label_1cc7f4;
    }
    ctx->pc = 0x1CC7ECu;
    {
        const bool branch_taken_0x1cc7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc7ec) {
            ctx->pc = 0x1CC7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC7ECu;
            // 0x1cc7f0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC834u;
            goto label_1cc834;
        }
    }
    ctx->pc = 0x1CC7F4u;
label_1cc7f4:
    // 0x1cc7f4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cc7f8:
    // 0x1cc7f8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1cc7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7fc:
    // 0x1cc7fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cc800:
    // 0x1cc800: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cc800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc804:
    // 0x1cc804: 0xc07337e  jal         func_1CCDF8
label_1cc808:
    if (ctx->pc == 0x1CC808u) {
        ctx->pc = 0x1CC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC804u;
        // 0x1cc808: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC80Cu;
        goto label_1cc80c;
    }
    ctx->pc = 0x1CC804u;
    SET_GPR_U32(ctx, 31, 0x1CC80Cu);
    ctx->pc = 0x1CC808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC804u;
    // 0x1cc808: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1CC804u, 0x1CC80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC80Cu;
label_1cc80c:
    // 0x1cc80c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1cc80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1cc810:
    // 0x1cc810: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1cc810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1cc814:
    // 0x1cc814: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1cc814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc818:
    // 0x1cc818: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1cc818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc81c:
    // 0x1cc81c: 0x6a060007  ldl         $a2, 0x7($s0)
    ctx->pc = 0x1cc81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1cc820:
    // 0x1cc820: 0x6e060000  ldr         $a2, 0x0($s0)
    ctx->pc = 0x1cc820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1cc824:
    // 0x1cc824: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x1cc824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc828:
    // 0x1cc828: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cc82c:
    if (ctx->pc == 0x1CC82Cu) {
        ctx->pc = 0x1CC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC828u;
        // 0x1cc82c: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC830u;
        goto label_1cc830;
    }
    ctx->pc = 0x1CC828u;
    {
        const bool branch_taken_0x1cc828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC828u;
        // 0x1cc82c: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc828) {
            ctx->pc = 0x1CC838u;
            goto label_1cc838;
        }
    }
    ctx->pc = 0x1CC830u;
label_1cc830:
    // 0x1cc830: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1cc830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1cc834:
    // 0x1cc834: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1cc834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1cc838:
    // 0x1cc838: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1cc838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc83c:
    // 0x1cc83c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1cc83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cc840:
    // 0x1cc840: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1cc840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc844:
    // 0x1cc844: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1cc844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1cc848:
    // 0x1cc848: 0x3e00008  jr          $ra
label_1cc84c:
    if (ctx->pc == 0x1CC84Cu) {
        ctx->pc = 0x1CC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC848u;
        // 0x1cc84c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC850u;
        goto label_1cc850;
    }
    ctx->pc = 0x1CC848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC848u;
        // 0x1cc84c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC850u;
label_1cc850:
    // 0x1cc850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cc854:
    // 0x1cc854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cc858:
    // 0x1cc858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc85c:
    // 0x1cc85c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cc860:
    // 0x1cc860: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc864:
    // 0x1cc864: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cc868:
    // 0x1cc868: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cc868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1cc86c:
    // 0x1cc86c: 0xc0729fa  jal         func_1CA7E8
label_1cc870:
    if (ctx->pc == 0x1CC870u) {
        ctx->pc = 0x1CC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC86Cu;
        // 0x1cc870: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC874u;
        goto label_1cc874;
    }
    ctx->pc = 0x1CC86Cu;
    SET_GPR_U32(ctx, 31, 0x1CC874u);
    ctx->pc = 0x1CC870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC86Cu;
    // 0x1cc870: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CC86Cu, 0x1CC874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC874u;
label_1cc874:
    // 0x1cc874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc878:
    // 0x1cc878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cc878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc87c:
    // 0x1cc87c: 0xc073228  jal         func_1CC8A0
label_1cc880:
    if (ctx->pc == 0x1CC880u) {
        ctx->pc = 0x1CC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC87Cu;
        // 0x1cc880: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC884u;
        goto label_1cc884;
    }
    ctx->pc = 0x1CC87Cu;
    SET_GPR_U32(ctx, 31, 0x1CC884u);
    ctx->pc = 0x1CC880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC87Cu;
    // 0x1cc880: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC8A0u, 0x1CC87Cu, 0x1CC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC884u;
label_1cc884:
    // 0x1cc884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc888:
    // 0x1cc888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc88c:
    // 0x1cc88c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc88cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc890:
    // 0x1cc890: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cc890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc894:
    // 0x1cc894: 0x8072a00  j           func_1CA800
label_1cc898:
    if (ctx->pc == 0x1CC898u) {
        ctx->pc = 0x1CC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC894u;
        // 0x1cc898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC89Cu;
        goto label_1cc89c;
    }
    ctx->pc = 0x1CC894u;
    ctx->pc = 0x1CC898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC894u;
    // 0x1cc898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC89Cu;
label_1cc89c:
    // 0x1cc89c: 0x0  nop
    ctx->pc = 0x1cc89cu;
    // NOP
    if (ctx->pc == 0x1cc89cu) { ctx->pc = 0x1cc8a0u; }
}

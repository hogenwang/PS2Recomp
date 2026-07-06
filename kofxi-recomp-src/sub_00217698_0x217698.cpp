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

// Function: sub_00217698
// Address: 0x217698 - 0x217788
void sub_00217698_0x217698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217698_0x217698");
#endif

    switch (ctx->pc) {
        case 0x2176e4u: goto label_2176e4;
        case 0x2176fcu: goto label_2176fc;
        case 0x21774cu: goto label_21774c;
        case 0x217760u: goto label_217760;
        default: break;
    }

    ctx->pc = 0x217698u;

label_217698:
    // 0x217698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21769c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21769cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2176a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2176a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2176a4: 0x24840ec8  addiu       $a0, $a0, 0xEC8
    ctx->pc = 0x2176a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3784));
    // 0x2176a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2176a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2176ac: 0x8043e52  j           func_10F948
    ctx->pc = 0x2176ACu;
    ctx->pc = 0x2176B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176ACu;
    // 0x2176b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2176B4u;
    // 0x2176b4: 0x0  nop
    ctx->pc = 0x2176b4u;
    // NOP
    // 0x2176b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2176b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2176bc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2176bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2176c0: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2176c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2176c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2176c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2176c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2176c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2176cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2176ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2176d0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2176d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2176d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2176d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2176d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2176d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176dc: 0xc0849ec  jal         func_2127B0
    ctx->pc = 0x2176DCu;
    SET_GPR_U32(ctx, 31, 0x2176E4u);
    ctx->pc = 0x2176E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176DCu;
    // 0x2176e0: 0x8cd10000  lw          $s1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2127B0u, 0x2176DCu, 0x2176E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176E4u;
label_2176e4:
    // 0x2176e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2176e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2176E8u;
    {
        const bool branch_taken_0x2176e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2176ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176E8u;
        // 0x2176ec: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176e8) {
            ctx->pc = 0x217700u;
            goto label_217700;
        }
    }
    ctx->pc = 0x2176F0u;
    // 0x2176f0: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x2176f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2176f4: 0xc085da6  jal         func_217698
    ctx->pc = 0x2176F4u;
    SET_GPR_U32(ctx, 31, 0x2176FCu);
    ctx->pc = 0x2176F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176F4u;
    // 0x2176f8: 0x22f8823  subu        $s1, $s1, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217698u;
    goto label_217698;
    ctx->pc = 0x2176FCu;
label_2176fc:
    // 0x2176fc: 0x220782d  daddu       $t7, $s1, $zero
    ctx->pc = 0x2176fcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217700:
    // 0x217700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217704: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x217704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217708: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21770c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21770cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217710: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x217710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217714: 0x3e00008  jr          $ra
    ctx->pc = 0x217714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217714u;
        // 0x217718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21771Cu;
    // 0x21771c: 0x0  nop
    ctx->pc = 0x21771cu;
    // NOP
    // 0x217720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217724: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x217724u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x217728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21772c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21772cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217730: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217734: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x217734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217738: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x217738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21773c: 0xadc0ab5c  sw          $zero, -0x54A4($t6)
    ctx->pc = 0x21773cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294945628), GPR_U32(ctx, 0));
    // 0x217740: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x217740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217744: 0xc084a6a  jal         func_2129A8
    ctx->pc = 0x217744u;
    SET_GPR_U32(ctx, 31, 0x21774Cu);
    ctx->pc = 0x217748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217744u;
    // 0x217748: 0x8cb20000  lw          $s2, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129A8u, 0x217744u, 0x21774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21774Cu;
label_21774c:
    // 0x21774c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21774cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217750: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217750u;
    {
        const bool branch_taken_0x217750 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217750u;
        // 0x217754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217750) {
            ctx->pc = 0x217768u;
            goto label_217768;
        }
    }
    ctx->pc = 0x217758u;
    // 0x217758: 0xc085da6  jal         func_217698
    ctx->pc = 0x217758u;
    SET_GPR_U32(ctx, 31, 0x217760u);
    ctx->pc = 0x217698u;
    goto label_217698;
    ctx->pc = 0x217760u;
label_217760:
    // 0x217760: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x217760u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217764: 0x1f22823  subu        $a1, $t7, $s2
    ctx->pc = 0x217764u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_217768:
    // 0x217768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21776c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21776cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217774: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217778: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x217778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21777c: 0x3e00008  jr          $ra
    ctx->pc = 0x21777Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21777Cu;
        // 0x217780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21777Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217784u;
    // 0x217784: 0x0  nop
    ctx->pc = 0x217784u;
    // NOP
    if (ctx->pc == 0x217784u) { ctx->pc = 0x217788u; }
}

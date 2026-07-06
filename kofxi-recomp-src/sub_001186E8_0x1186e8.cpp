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

// Function: sub_001186E8
// Address: 0x1186e8 - 0x1187a8
void sub_001186E8_0x1186e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001186E8_0x1186e8");
#endif

    switch (ctx->pc) {
        case 0x118730u: goto label_118730;
        case 0x118770u: goto label_118770;
        case 0x11877cu: goto label_11877c;
        case 0x11878cu: goto label_11878c;
        default: break;
    }

    ctx->pc = 0x1186e8u;

label_1186e8:
    // 0x1186e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1186e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1186ec: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1186ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x1186f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1186f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1186f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1186f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1186f8: 0x28980  sll         $s1, $v0, 6
    ctx->pc = 0x1186f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1186fc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1186FCu;
    {
        const bool branch_taken_0x1186fc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x118700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186FCu;
        // 0x118700: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186fc) {
            ctx->pc = 0x118714u;
            goto label_118714;
        }
    }
    ctx->pc = 0x118704u;
    // 0x118704: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x118704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x118708: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x118708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x11870c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11870Cu;
    {
        const bool branch_taken_0x11870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11870c) {
            ctx->pc = 0x118710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11870Cu;
            // 0x118710: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11871Cu;
            goto label_11871c;
        }
    }
    ctx->pc = 0x118714u;
label_118714:
    // 0x118714: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118714u;
    {
        const bool branch_taken_0x118714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118714u;
        // 0x118718: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118714) {
            ctx->pc = 0x118740u;
            goto label_118740;
        }
    }
    ctx->pc = 0x11871Cu;
label_11871c:
    // 0x11871c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x118720: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118720u;
    {
        const bool branch_taken_0x118720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118720u;
        // 0x118724: 0xde300018  ld          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118720) {
            ctx->pc = 0x11873Cu;
            goto label_11873c;
        }
    }
    ctx->pc = 0x118728u;
    // 0x118728: 0xc046002  jal         func_118008
    ctx->pc = 0x118728u;
    SET_GPR_U32(ctx, 31, 0x118730u);
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x118728u, 0x118730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118730u;
label_118730:
    // 0x118730: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x118730u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x118734: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x118734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x118738: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x118738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_11873c:
    // 0x11873c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11873cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118740:
    // 0x118740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118744: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11874c: 0x3e00008  jr          $ra
    ctx->pc = 0x11874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11874Cu;
        // 0x118750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11874Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118754u;
    // 0x118754: 0x0  nop
    ctx->pc = 0x118754u;
    // NOP
    // 0x118758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11875c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118760: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118768: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118768u;
    SET_GPR_U32(ctx, 31, 0x118770u);
    ctx->pc = 0x11876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118768u;
    // 0x11876c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x118768u, 0x118770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118770u;
label_118770:
    // 0x118770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118774: 0xc0461ba  jal         func_1186E8
    ctx->pc = 0x118774u;
    SET_GPR_U32(ctx, 31, 0x11877Cu);
    ctx->pc = 0x118778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118774u;
    // 0x118778: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186E8u;
    goto label_1186e8;
    ctx->pc = 0x11877Cu;
label_11877c:
    // 0x11877c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11877Cu;
    {
        const bool branch_taken_0x11877c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11877Cu;
        // 0x118780: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11877c) {
            ctx->pc = 0x11878Cu;
            goto label_11878c;
        }
    }
    ctx->pc = 0x118784u;
    // 0x118784: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118784u;
    SET_GPR_U32(ctx, 31, 0x11878Cu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118784u, 0x11878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11878Cu;
label_11878c:
    // 0x11878c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11878cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118794: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11879c: 0x3e00008  jr          $ra
    ctx->pc = 0x11879Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1187A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11879Cu;
        // 0x1187a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11879Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1187A4u;
    // 0x1187a4: 0x0  nop
    ctx->pc = 0x1187a4u;
    // NOP
    if (ctx->pc == 0x1187a4u) { ctx->pc = 0x1187a8u; }
}

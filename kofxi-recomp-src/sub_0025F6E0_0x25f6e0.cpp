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

// Function: sub_0025F6E0
// Address: 0x25f6e0 - 0x25f798
void sub_0025F6E0_0x25f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F6E0_0x25f6e0");
#endif

    switch (ctx->pc) {
        case 0x25f70cu: goto label_25f70c;
        case 0x25f734u: goto label_25f734;
        case 0x25f754u: goto label_25f754;
        case 0x25f770u: goto label_25f770;
        default: break;
    }

    ctx->pc = 0x25f6e0u;

    // 0x25f6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25f6e4: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x25f6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x25f6e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25f6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25f6ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25f6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25f6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25f6f4: 0x24c67128  addiu       $a2, $a2, 0x7128
    ctx->pc = 0x25f6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28968));
    // 0x25f6f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f6fc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x25f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f704: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x25F704u;
    SET_GPR_U32(ctx, 31, 0x25F70Cu);
    ctx->pc = 0x25F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F704u;
    // 0x25f708: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x25F704u, 0x25F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F70Cu;
label_25f70c:
    // 0x25f70c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F70Cu;
    {
        const bool branch_taken_0x25f70c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F70Cu;
        // 0x25f710: 0xae421774  sw          $v0, 0x1774($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f70c) {
            ctx->pc = 0x25F71Cu;
            goto label_25f71c;
        }
    }
    ctx->pc = 0x25F714u;
    // 0x25f714: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25F714u;
    {
        const bool branch_taken_0x25f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F714u;
        // 0x25f718: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f714) {
            ctx->pc = 0x25F77Cu;
            goto label_25f77c;
        }
    }
    ctx->pc = 0x25F71Cu;
label_25f71c:
    // 0x25f71c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x25f71cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x25f720: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x25f720u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x25f724: 0x2610f800  addiu       $s0, $s0, -0x800
    ctx->pc = 0x25f724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965248));
    // 0x25f728: 0x2631aea0  addiu       $s1, $s1, -0x5160
    ctx->pc = 0x25f728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946464));
    // 0x25f72c: 0xc08c6a6  jal         func_231A98
    ctx->pc = 0x25F72Cu;
    SET_GPR_U32(ctx, 31, 0x25F734u);
    ctx->pc = 0x25F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F72Cu;
    // 0x25f730: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A98u, 0x25F72Cu, 0x25F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F734u;
label_25f734:
    // 0x25f734: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x25f734u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x25f738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f73c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25f73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f740: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25f740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f744: 0x25297140  addiu       $t1, $t1, 0x7140
    ctx->pc = 0x25f744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28992));
    // 0x25f748: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x25f748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x25f74c: 0xc0985d0  jal         func_261740
    ctx->pc = 0x25F74Cu;
    SET_GPR_U32(ctx, 31, 0x25F754u);
    ctx->pc = 0x25F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F74Cu;
    // 0x25f750: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261740u, 0x25F74Cu, 0x25F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F754u;
label_25f754:
    // 0x25f754: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x25f754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x25f758: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F758u;
    {
        const bool branch_taken_0x25f758 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F758u;
        // 0x25f75c: 0xac62bea0  sw          $v0, -0x4160($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f758) {
            ctx->pc = 0x25F768u;
            goto label_25f768;
        }
    }
    ctx->pc = 0x25F760u;
    // 0x25f760: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F760u;
    {
        const bool branch_taken_0x25f760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F760u;
        // 0x25f764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f760) {
            ctx->pc = 0x25F77Cu;
            goto label_25f77c;
        }
    }
    ctx->pc = 0x25F768u;
label_25f768:
    // 0x25f768: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x25F768u;
    SET_GPR_U32(ctx, 31, 0x25F770u);
    ctx->pc = 0x25F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F768u;
    // 0x25f76c: 0x8e441774  lw          $a0, 0x1774($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6004)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x25F768u, 0x25F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F770u;
label_25f770:
    // 0x25f770: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25f770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f774: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x25f774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x25f778: 0xae431774  sw          $v1, 0x1774($s2)
    ctx->pc = 0x25f778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6004), GPR_U32(ctx, 3));
label_25f77c:
    // 0x25f77c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25f77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f780: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25f780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f784: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25f784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f78c: 0x3e00008  jr          $ra
    ctx->pc = 0x25F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F78Cu;
        // 0x25f790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F794u;
    // 0x25f794: 0x0  nop
    ctx->pc = 0x25f794u;
    // NOP
    if (ctx->pc == 0x25f794u) { ctx->pc = 0x25f798u; }
}

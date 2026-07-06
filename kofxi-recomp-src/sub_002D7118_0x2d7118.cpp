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

// Function: sub_002D7118
// Address: 0x2d7118 - 0x2d7230
void sub_002D7118_0x2d7118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7118_0x2d7118");
#endif

    switch (ctx->pc) {
        case 0x2d713cu: goto label_2d713c;
        case 0x2d7168u: goto label_2d7168;
        case 0x2d7180u: goto label_2d7180;
        case 0x2d71c4u: goto label_2d71c4;
        case 0x2d71dcu: goto label_2d71dc;
        default: break;
    }

    ctx->pc = 0x2d7118u;

    // 0x2d7118: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d7118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d711c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2d711cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d7120: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d7124: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d7124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7128: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d7128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d712c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d7130: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7134: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2D7134u;
    SET_GPR_U32(ctx, 31, 0x2D713Cu);
    ctx->pc = 0x2D7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7134u;
    // 0x2d7138: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2D7134u, 0x2D713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D713Cu;
label_2d713c:
    // 0x2d713c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d713cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7140: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7144: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d7144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7148: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2d7148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d714c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D714Cu;
    {
        const bool branch_taken_0x2d714c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D714Cu;
        // 0x2d7150: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d714c) {
            ctx->pc = 0x2D7180u;
            goto label_2d7180;
        }
    }
    ctx->pc = 0x2D7154u;
    // 0x2d7154: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d7154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7158: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x2d7158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2d715c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2d715cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2d7160: 0xc0b58fc  jal         func_2D63F0
    ctx->pc = 0x2D7160u;
    SET_GPR_U32(ctx, 31, 0x2D7168u);
    ctx->pc = 0x2D7164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7160u;
    // 0x2d7164: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D63F0u, 0x2D7160u, 0x2D7168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7168u;
label_2d7168:
    // 0x2d7168: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d7168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d716c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7170: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7170u;
    {
        const bool branch_taken_0x2d7170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7170u;
        // 0x2d7174: 0x24a59708  addiu       $a1, $a1, -0x68F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7170) {
            ctx->pc = 0x2D7180u;
            goto label_2d7180;
        }
    }
    ctx->pc = 0x2D7178u;
    // 0x2d7178: 0xc0b3d08  jal         func_2CF420
    ctx->pc = 0x2D7178u;
    SET_GPR_U32(ctx, 31, 0x2D7180u);
    ctx->pc = 0x2D717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7178u;
    // 0x2d717c: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF420u, 0x2D7178u, 0x2D7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7180u;
label_2d7180:
    // 0x2d7180: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d7180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7184: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d7184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7188: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d7188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d718c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D718Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D718Cu;
        // 0x2d7190: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D718Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7194u;
    // 0x2d7194: 0x0  nop
    ctx->pc = 0x2d7194u;
    // NOP
    // 0x2d7198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d719c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2d719cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2d71a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d71a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d71a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d71a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d71a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d71ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d71acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d71b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71b4: 0x24c69680  addiu       $a2, $a2, -0x6980
    ctx->pc = 0x2d71b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940288));
    // 0x2d71b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d71b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d71bc: 0xc0b3d5a  jal         func_2CF568
    ctx->pc = 0x2D71BCu;
    SET_GPR_U32(ctx, 31, 0x2D71C4u);
    ctx->pc = 0x2D71C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D71BCu;
    // 0x2d71c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF568u, 0x2D71BCu, 0x2D71C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71C4u;
label_2d71c4:
    // 0x2d71c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d71c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d71c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71cc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D71CCu;
    {
        const bool branch_taken_0x2d71cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71CCu;
        // 0x2d71d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71cc) {
            ctx->pc = 0x2D7218u;
            goto label_2d7218;
        }
    }
    ctx->pc = 0x2D71D4u;
    // 0x2d71d4: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2D71D4u;
    SET_GPR_U32(ctx, 31, 0x2D71DCu);
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2D71D4u, 0x2D71DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71DCu;
label_2d71dc:
    // 0x2d71dc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D71DCu;
    {
        const bool branch_taken_0x2d71dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71DCu;
        // 0x2d71e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71dc) {
            ctx->pc = 0x2D721Cu;
            goto label_2d721c;
        }
    }
    ctx->pc = 0x2D71E4u;
    // 0x2d71e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d71e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d71e8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d71e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d71ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d71ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d71f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d71f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d71f4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d71f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d71f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d71fc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2d71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2d7200: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d7200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7204: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d7204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d7208: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d7208u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2d720c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d720cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7210: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d7210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d7214: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2d7214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_2d7218:
    // 0x2d7218: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d7218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d721c:
    // 0x2d721c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d721cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d7220: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d7220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7224: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7224u;
        // 0x2d7228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D722Cu;
    // 0x2d722c: 0x0  nop
    ctx->pc = 0x2d722cu;
    // NOP
}

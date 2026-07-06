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

// Function: sub_00298860
// Address: 0x298860 - 0x298918
void sub_00298860_0x298860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298860_0x298860");
#endif

    switch (ctx->pc) {
        case 0x298880u: goto label_298880;
        case 0x2988b4u: goto label_2988b4;
        case 0x2988e8u: goto label_2988e8;
        case 0x298900u: goto label_298900;
        default: break;
    }

    ctx->pc = 0x298860u;

    // 0x298860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298864: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x298864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298868: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x298868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29886c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29886cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x298870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298874: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298878: 0xc0a632c  jal         func_298CB0
    ctx->pc = 0x298878u;
    SET_GPR_U32(ctx, 31, 0x298880u);
    ctx->pc = 0x29887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298878u;
    // 0x29887c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298CB0u, 0x298878u, 0x298880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298880u;
label_298880:
    // 0x298880: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298884: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x298884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x298888: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x298888u;
    {
        const bool branch_taken_0x298888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298888) {
            ctx->pc = 0x29888Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298888u;
            // 0x29888c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2988A4u;
            goto label_2988a4;
        }
    }
    ctx->pc = 0x298890u;
    // 0x298890: 0xde030080  ld          $v1, 0x80($s0)
    ctx->pc = 0x298890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x298894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298898: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x298898u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x29889c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29889Cu;
    {
        const bool branch_taken_0x29889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29889Cu;
        // 0x2988a0: 0xfe030080  sd          $v1, 0x80($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29889c) {
            ctx->pc = 0x298904u;
            goto label_298904;
        }
    }
    ctx->pc = 0x2988A4u;
label_2988a4:
    // 0x2988a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2988a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2988a8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2988a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2988ac: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2988ACu;
    SET_GPR_U32(ctx, 31, 0x2988B4u);
    ctx->pc = 0x2988B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988ACu;
    // 0x2988b0: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2988ACu, 0x2988B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988B4u;
label_2988b4:
    // 0x2988b4: 0xde020078  ld          $v0, 0x78($s0)
    ctx->pc = 0x2988b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2988b8: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x2988b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2988bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2988bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2988c0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2988c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2988c4: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x2988c4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
    // 0x2988c8: 0xfe020078  sd          $v0, 0x78($s0)
    ctx->pc = 0x2988c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
    // 0x2988cc: 0x2ca40011  sltiu       $a0, $a1, 0x11
    ctx->pc = 0x2988ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x2988d0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2988D0u;
    {
        const bool branch_taken_0x2988d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2988D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988D0u;
        // 0x2988d4: 0xfe030030  sd          $v1, 0x30($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988d0) {
            ctx->pc = 0x298900u;
            goto label_298900;
        }
    }
    ctx->pc = 0x2988D8u;
    // 0x2988d8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2988d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2988dc: 0x32238  dsll        $a0, $v1, 8
    ctx->pc = 0x2988dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
    // 0x2988e0: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x2988E0u;
    SET_GPR_U32(ctx, 31, 0x2988E8u);
    ctx->pc = 0x2988E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988E0u;
    // 0x2988e4: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x2988E0u, 0x2988E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988E8u;
label_2988e8:
    // 0x2988e8: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x2988e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2988ec: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2988ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2988f0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2988F0u;
    {
        const bool branch_taken_0x2988f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2988F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988F0u;
        // 0x2988f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988f0) {
            ctx->pc = 0x298904u;
            goto label_298904;
        }
    }
    ctx->pc = 0x2988F8u;
    // 0x2988f8: 0xc0a62e2  jal         func_298B88
    ctx->pc = 0x2988F8u;
    SET_GPR_U32(ctx, 31, 0x298900u);
    ctx->pc = 0x2988FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988F8u;
    // 0x2988fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298B88u, 0x2988F8u, 0x298900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298900u;
label_298900:
    // 0x298900: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x298900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_298904:
    // 0x298904: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298908: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x298908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29890c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29890cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298910: 0x3e00008  jr          $ra
    ctx->pc = 0x298910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298910u;
        // 0x298914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298918u;
}

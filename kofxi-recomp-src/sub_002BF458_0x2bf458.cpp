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

// Function: sub_002BF458
// Address: 0x2bf458 - 0x2bf4f8
void sub_002BF458_0x2bf458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF458_0x2bf458");
#endif

    switch (ctx->pc) {
        case 0x2bf484u: goto label_2bf484;
        case 0x2bf48cu: goto label_2bf48c;
        case 0x2bf4a0u: goto label_2bf4a0;
        case 0x2bf4acu: goto label_2bf4ac;
        case 0x2bf4c0u: goto label_2bf4c0;
        case 0x2bf4c8u: goto label_2bf4c8;
        case 0x2bf4d8u: goto label_2bf4d8;
        default: break;
    }

    ctx->pc = 0x2bf458u;

    // 0x2bf458: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bf458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bf45c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bf45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bf460: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bf460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bf464: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bf464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf468: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bf468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bf46c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2bf46cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf474: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bf474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf478: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bf478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bf47c: 0xc0a308c  jal         func_28C230
    ctx->pc = 0x2BF47Cu;
    SET_GPR_U32(ctx, 31, 0x2BF484u);
    ctx->pc = 0x2BF480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF47Cu;
    // 0x2bf480: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C230u, 0x2BF47Cu, 0x2BF484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF484u;
label_2bf484:
    // 0x2bf484: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x2BF484u;
    SET_GPR_U32(ctx, 31, 0x2BF48Cu);
    ctx->pc = 0x2BF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF484u;
    // 0x2bf488: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x2BF484u, 0x2BF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF48Cu;
label_2bf48c:
    // 0x2bf48c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf490: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BF490u;
    {
        const bool branch_taken_0x2bf490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF490u;
        // 0x2bf494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf490) {
            ctx->pc = 0x2BF4DCu;
            goto label_2bf4dc;
        }
    }
    ctx->pc = 0x2BF498u;
    // 0x2bf498: 0xc0afd76  jal         func_2BF5D8
    ctx->pc = 0x2BF498u;
    SET_GPR_U32(ctx, 31, 0x2BF4A0u);
    ctx->pc = 0x2BF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF498u;
    // 0x2bf49c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF5D8u, 0x2BF498u, 0x2BF4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4A0u;
label_2bf4a0:
    // 0x2bf4a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bf4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf4a4: 0xc0af66a  jal         func_2BD9A8
    ctx->pc = 0x2BF4A4u;
    SET_GPR_U32(ctx, 31, 0x2BF4ACu);
    ctx->pc = 0x2BF4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4A4u;
    // 0x2bf4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD9A8u, 0x2BF4A4u, 0x2BF4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4ACu;
label_2bf4ac:
    // 0x2bf4ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF4ACu;
    {
        const bool branch_taken_0x2bf4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4ACu;
        // 0x2bf4b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4ac) {
            ctx->pc = 0x2BF4D0u;
            goto label_2bf4d0;
        }
    }
    ctx->pc = 0x2BF4B4u;
    // 0x2bf4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf4b8: 0xc0a150e  jal         func_285438
    ctx->pc = 0x2BF4B8u;
    SET_GPR_U32(ctx, 31, 0x2BF4C0u);
    ctx->pc = 0x2BF4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4B8u;
    // 0x2bf4bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285438u, 0x2BF4B8u, 0x2BF4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4C0u;
label_2bf4c0:
    // 0x2bf4c0: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x2BF4C0u;
    SET_GPR_U32(ctx, 31, 0x2BF4C8u);
    ctx->pc = 0x2BF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4C0u;
    // 0x2bf4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x2BF4C0u, 0x2BF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4C8u;
label_2bf4c8:
    // 0x2bf4c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF4C8u;
    {
        const bool branch_taken_0x2bf4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4C8u;
        // 0x2bf4cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4c8) {
            ctx->pc = 0x2BF4DCu;
            goto label_2bf4dc;
        }
    }
    ctx->pc = 0x2BF4D0u;
label_2bf4d0:
    // 0x2bf4d0: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x2BF4D0u;
    SET_GPR_U32(ctx, 31, 0x2BF4D8u);
    ctx->pc = 0x2BF4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4D0u;
    // 0x2bf4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x2BF4D0u, 0x2BF4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4D8u;
label_2bf4d8:
    // 0x2bf4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf4dc:
    // 0x2bf4dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bf4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf4e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bf4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf4e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bf4e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf4e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf4e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf4ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4F0u;
        // 0x2bf4f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF4F8u;
}

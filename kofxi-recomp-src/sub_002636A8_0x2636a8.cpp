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

// Function: sub_002636A8
// Address: 0x2636a8 - 0x2637a0
void sub_002636A8_0x2636a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002636A8_0x2636a8");
#endif

    switch (ctx->pc) {
        case 0x2636d4u: goto label_2636d4;
        case 0x2636f4u: goto label_2636f4;
        case 0x26370cu: goto label_26370c;
        case 0x26371cu: goto label_26371c;
        case 0x26373cu: goto label_26373c;
        case 0x263750u: goto label_263750;
        case 0x263790u: goto label_263790;
        default: break;
    }

    ctx->pc = 0x2636a8u;

    // 0x2636a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2636a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2636ac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2636acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2636b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2636b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2636b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2636b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2636b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2636bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2636bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2636c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2636c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2636c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2636c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2636cc: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x2636CCu;
    SET_GPR_U32(ctx, 31, 0x2636D4u);
    ctx->pc = 0x2636D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636CCu;
    // 0x2636d0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x2636CCu, 0x2636D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636D4u;
label_2636d4:
    // 0x2636d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2636d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636d8: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2636D8u;
    {
        const bool branch_taken_0x2636d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2636DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636D8u;
        // 0x2636dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2636d8) {
            ctx->pc = 0x263750u;
            goto label_263750;
        }
    }
    ctx->pc = 0x2636E0u;
    // 0x2636e0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2636e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2636e4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2636E4u;
    {
        const bool branch_taken_0x2636e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2636e4) {
            ctx->pc = 0x2636E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2636E4u;
            // 0x2636e8: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263728u;
            goto label_263728;
        }
    }
    ctx->pc = 0x2636ECu;
    // 0x2636ec: 0xc099642  jal         func_265908
    ctx->pc = 0x2636ECu;
    SET_GPR_U32(ctx, 31, 0x2636F4u);
    ctx->pc = 0x2636F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636ECu;
    // 0x2636f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265908u, 0x2636ECu, 0x2636F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636F4u;
label_2636f4:
    // 0x2636f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2636f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2636f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2636fc: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2636FCu;
    {
        const bool branch_taken_0x2636fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2636fc) {
            ctx->pc = 0x263700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2636FCu;
            // 0x263700: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263724u;
            goto label_263724;
        }
    }
    ctx->pc = 0x263704u;
    // 0x263704: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263704u;
    SET_GPR_U32(ctx, 31, 0x26370Cu);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263704u, 0x26370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26370Cu;
label_26370c:
    // 0x26370c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x26370cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x263710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263714: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x263714u;
    SET_GPR_U32(ctx, 31, 0x26371Cu);
    ctx->pc = 0x263718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263714u;
    // 0x263718: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x263714u, 0x26371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26371Cu;
label_26371c:
    // 0x26371c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26371Cu;
    {
        const bool branch_taken_0x26371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26371Cu;
        // 0x263720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26371c) {
            ctx->pc = 0x263750u;
            goto label_263750;
        }
    }
    ctx->pc = 0x263724u;
label_263724:
    // 0x263724: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x263724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_263728:
    // 0x263728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26372c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x26372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x263730: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x263730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x263734: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x263734u;
    SET_GPR_U32(ctx, 31, 0x26373Cu);
    ctx->pc = 0x263738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263734u;
    // 0x263738: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x263734u, 0x26373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26373Cu;
label_26373c:
    // 0x26373c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263744: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x263744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263748: 0xc098de8  jal         func_2637A0
    ctx->pc = 0x263748u;
    SET_GPR_U32(ctx, 31, 0x263750u);
    ctx->pc = 0x26374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263748u;
    // 0x26374c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2637A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2637A0u, 0x263748u, 0x263750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263750u;
label_263750:
    // 0x263750: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x263750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263754: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x263754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263758: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x263758u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26375c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26375cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263760: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x263760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x263764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263768: 0x3e00008  jr          $ra
    ctx->pc = 0x263768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263768u;
        // 0x26376c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263770u;
    // 0x263770: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x263770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x263774: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x263774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x263778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26377c: 0x8c461a30  lw          $a2, 0x1A30($v0)
    ctx->pc = 0x26377cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6704)));
    // 0x263780: 0x8c671a34  lw          $a3, 0x1A34($v1)
    ctx->pc = 0x263780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6708)));
    // 0x263784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263788: 0xc098de8  jal         func_2637A0
    ctx->pc = 0x263788u;
    SET_GPR_U32(ctx, 31, 0x263790u);
    ctx->pc = 0x2637A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2637A0u, 0x263788u, 0x263790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263790u;
label_263790:
    // 0x263790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263794: 0x3e00008  jr          $ra
    ctx->pc = 0x263794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263794u;
        // 0x263798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26379Cu;
    // 0x26379c: 0x0  nop
    ctx->pc = 0x26379cu;
    // NOP
}

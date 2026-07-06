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

// Function: sub_00262630
// Address: 0x262630 - 0x2626f8
void sub_00262630_0x262630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262630_0x262630");
#endif

    switch (ctx->pc) {
        case 0x262650u: goto label_262650;
        case 0x26267cu: goto label_26267c;
        case 0x262690u: goto label_262690;
        case 0x2626a4u: goto label_2626a4;
        case 0x2626acu: goto label_2626ac;
        case 0x2626b4u: goto label_2626b4;
        case 0x2626ccu: goto label_2626cc;
        case 0x2626d4u: goto label_2626d4;
        case 0x2626e0u: goto label_2626e0;
        default: break;
    }

    ctx->pc = 0x262630u;

    // 0x262630: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x262630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x262634: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262638: 0x8c42d768  lw          $v0, -0x2898($v0)
    ctx->pc = 0x262638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956904)));
    // 0x26263c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26263cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262644: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x262644u;
    {
        const bool branch_taken_0x262644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262644u;
        // 0x262648: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262644) {
            ctx->pc = 0x26266Cu;
            goto label_26266c;
        }
    }
    ctx->pc = 0x26264Cu;
    // 0x26264c: 0x0  nop
    ctx->pc = 0x26264cu;
    // NOP
label_262650:
    // 0x262650: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x262650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x262654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x262658: 0x0  nop
    ctx->pc = 0x262658u;
    // NOP
    // 0x26265c: 0x0  nop
    ctx->pc = 0x26265cu;
    // NOP
    // 0x262660: 0x0  nop
    ctx->pc = 0x262660u;
    // NOP
    // 0x262664: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x262664u;
    {
        const bool branch_taken_0x262664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262664) {
            ctx->pc = 0x262650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262650;
        }
    }
    ctx->pc = 0x26266Cu;
label_26266c:
    // 0x26266c: 0x1c60001d  bgtz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x26266Cu;
    {
        const bool branch_taken_0x26266c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x262670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26266Cu;
        // 0x262670: 0x2402ffe8  addiu       $v0, $zero, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26266c) {
            ctx->pc = 0x2626E4u;
            goto label_2626e4;
        }
    }
    ctx->pc = 0x262674u;
    // 0x262674: 0xc098b5c  jal         func_262D70
    ctx->pc = 0x262674u;
    SET_GPR_U32(ctx, 31, 0x26267Cu);
    ctx->pc = 0x262D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D70u, 0x262674u, 0x26267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26267Cu;
label_26267c:
    // 0x26267c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26267cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262680: 0x4600019  bltz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x262680u;
    {
        const bool branch_taken_0x262680 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x262684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262680u;
        // 0x262684: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262680) {
            ctx->pc = 0x2626E8u;
            goto label_2626e8;
        }
    }
    ctx->pc = 0x262688u;
    // 0x262688: 0xc098a40  jal         func_262900
    ctx->pc = 0x262688u;
    SET_GPR_U32(ctx, 31, 0x262690u);
    ctx->pc = 0x262900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262900u, 0x262688u, 0x262690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262690u;
label_262690:
    // 0x262690: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x262690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262694: 0x4600013  bltz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x262694u;
    {
        const bool branch_taken_0x262694 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x262698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262694u;
        // 0x262698: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262694) {
            ctx->pc = 0x2626E4u;
            goto label_2626e4;
        }
    }
    ctx->pc = 0x26269Cu;
    // 0x26269c: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x26269Cu;
    SET_GPR_U32(ctx, 31, 0x2626A4u);
    ctx->pc = 0x2626A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26269Cu;
    // 0x2626a0: 0x8e04d760  lw          $a0, -0x28A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x26269Cu, 0x2626A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626A4u;
label_2626a4:
    // 0x2626a4: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2626A4u;
    SET_GPR_U32(ctx, 31, 0x2626ACu);
    ctx->pc = 0x2626A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626A4u;
    // 0x2626a8: 0x8e04d760  lw          $a0, -0x28A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2626A4u, 0x2626ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626ACu;
label_2626ac:
    // 0x2626ac: 0xc097360  jal         func_25CD80
    ctx->pc = 0x2626ACu;
    SET_GPR_U32(ctx, 31, 0x2626B4u);
    ctx->pc = 0x2626B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626ACu;
    // 0x2626b0: 0x8e04d760  lw          $a0, -0x28A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD80u, 0x2626ACu, 0x2626B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626B4u;
label_2626b4:
    // 0x2626b4: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x2626b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x2626b8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2626b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2626bc: 0x2610d700  addiu       $s0, $s0, -0x2900
    ctx->pc = 0x2626bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956800));
    // 0x2626c0: 0x2484d718  addiu       $a0, $a0, -0x28E8
    ctx->pc = 0x2626c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956824));
    // 0x2626c4: 0xc044436  jal         func_1110D8
    ctx->pc = 0x2626C4u;
    SET_GPR_U32(ctx, 31, 0x2626CCu);
    ctx->pc = 0x2626C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626C4u;
    // 0x2626c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110D8u, 0x2626C4u, 0x2626CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626CCu;
label_2626cc:
    // 0x2626cc: 0xc04445c  jal         func_111170
    ctx->pc = 0x2626CCu;
    SET_GPR_U32(ctx, 31, 0x2626D4u);
    ctx->pc = 0x2626D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626CCu;
    // 0x2626d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111170u, 0x2626CCu, 0x2626D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626D4u;
label_2626d4:
    // 0x2626d4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2626d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2626d8: 0xc098560  jal         func_261580
    ctx->pc = 0x2626D8u;
    SET_GPR_U32(ctx, 31, 0x2626E0u);
    ctx->pc = 0x2626DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626D8u;
    // 0x2626dc: 0x8c64d75c  lw          $a0, -0x28A4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2626D8u, 0x2626E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626E0u;
label_2626e0:
    // 0x2626e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2626e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2626e4:
    // 0x2626e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2626e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2626e8:
    // 0x2626e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2626e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2626ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2626ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2626F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626ECu;
        // 0x2626f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2626ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2626F4u;
    // 0x2626f4: 0x0  nop
    ctx->pc = 0x2626f4u;
    // NOP
    if (ctx->pc == 0x2626f4u) { ctx->pc = 0x2626f8u; }
}

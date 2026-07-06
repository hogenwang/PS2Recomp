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

// Function: sub_002AC678
// Address: 0x2ac678 - 0x2ac750
void sub_002AC678_0x2ac678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC678_0x2ac678");
#endif

    switch (ctx->pc) {
        case 0x2ac694u: goto label_2ac694;
        case 0x2ac6acu: goto label_2ac6ac;
        case 0x2ac6c0u: goto label_2ac6c0;
        case 0x2ac70cu: goto label_2ac70c;
        case 0x2ac720u: goto label_2ac720;
        case 0x2ac730u: goto label_2ac730;
        case 0x2ac738u: goto label_2ac738;
        default: break;
    }

    ctx->pc = 0x2ac678u;

    // 0x2ac678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac67c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ac67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ac680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ac688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ac68c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2AC68Cu;
    SET_GPR_U32(ctx, 31, 0x2AC694u);
    ctx->pc = 0x2AC690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC68Cu;
    // 0x2ac690: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2AC68Cu, 0x2AC694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC694u;
label_2ac694:
    // 0x2ac694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ac694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac698: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AC698u;
    {
        const bool branch_taken_0x2ac698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC698u;
        // 0x2ac69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac698) {
            ctx->pc = 0x2AC6C8u;
            goto label_2ac6c8;
        }
    }
    ctx->pc = 0x2AC6A0u;
    // 0x2ac6a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac6a4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2AC6A4u;
    SET_GPR_U32(ctx, 31, 0x2AC6ACu);
    ctx->pc = 0x2AC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6A4u;
    // 0x2ac6a8: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2AC6A4u, 0x2AC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6ACu;
label_2ac6ac:
    // 0x2ac6ac: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2ac6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2ac6b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac6b4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2ac6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2ac6b8: 0xc0ab1d4  jal         func_2AC750
    ctx->pc = 0x2AC6B8u;
    SET_GPR_U32(ctx, 31, 0x2AC6C0u);
    ctx->pc = 0x2AC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6B8u;
    // 0x2ac6bc: 0xae300050  sw          $s0, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC750u, 0x2AC6B8u, 0x2AC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6C0u;
label_2ac6c0:
    // 0x2ac6c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC6C0u;
    {
        const bool branch_taken_0x2ac6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6C0u;
        // 0x2ac6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6c0) {
            ctx->pc = 0x2AC6CCu;
            goto label_2ac6cc;
        }
    }
    ctx->pc = 0x2AC6C8u;
label_2ac6c8:
    // 0x2ac6c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ac6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac6cc:
    // 0x2ac6cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ac6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac6d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6D8u;
        // 0x2ac6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC6E0u;
    // 0x2ac6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac6e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ac6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ac6e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ac6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ac6ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac6f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac6f4: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x2ac6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac6f8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2ac6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ac6fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC6FCu;
    {
        const bool branch_taken_0x2ac6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac6fc) {
            ctx->pc = 0x2AC700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC6FCu;
            // 0x2ac700: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC710u;
            goto label_2ac710;
        }
    }
    ctx->pc = 0x2AC704u;
    // 0x2ac704: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2AC704u;
    SET_GPR_U32(ctx, 31, 0x2AC70Cu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2AC704u, 0x2AC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC70Cu;
label_2ac70c:
    // 0x2ac70c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2ac70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2ac710:
    // 0x2ac710: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC710u;
    {
        const bool branch_taken_0x2ac710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac710) {
            ctx->pc = 0x2AC714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC710u;
            // 0x2ac714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC724u;
            goto label_2ac724;
        }
    }
    ctx->pc = 0x2AC718u;
    // 0x2ac718: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2AC718u;
    SET_GPR_U32(ctx, 31, 0x2AC720u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2AC718u, 0x2AC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC720u;
label_2ac720:
    // 0x2ac720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ac724:
    // 0x2ac724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac728: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2AC728u;
    SET_GPR_U32(ctx, 31, 0x2AC730u);
    ctx->pc = 0x2AC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC728u;
    // 0x2ac72c: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2AC728u, 0x2AC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC730u;
label_2ac730:
    // 0x2ac730: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2AC730u;
    SET_GPR_U32(ctx, 31, 0x2AC738u);
    ctx->pc = 0x2AC734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC730u;
    // 0x2ac734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2AC730u, 0x2AC738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC738u;
label_2ac738:
    // 0x2ac738: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ac738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2ac73c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ac73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac740: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac748: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC748u;
        // 0x2ac74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC750u;
}

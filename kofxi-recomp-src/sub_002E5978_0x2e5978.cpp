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

// Function: sub_002E5978
// Address: 0x2e5978 - 0x2e5a30
void sub_002E5978_0x2e5978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5978_0x2e5978");
#endif

    switch (ctx->pc) {
        case 0x2e5994u: goto label_2e5994;
        case 0x2e599cu: goto label_2e599c;
        case 0x2e59a4u: goto label_2e59a4;
        case 0x2e59b0u: goto label_2e59b0;
        case 0x2e59c8u: goto label_2e59c8;
        case 0x2e59d0u: goto label_2e59d0;
        case 0x2e59d8u: goto label_2e59d8;
        case 0x2e59f8u: goto label_2e59f8;
        case 0x2e5a00u: goto label_2e5a00;
        default: break;
    }

    ctx->pc = 0x2e5978u;

    // 0x2e5978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e597c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e597cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5980: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2e5980u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2e5984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e5984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e5988: 0x8e04e3d8  lw          $a0, -0x1C28($s0)
    ctx->pc = 0x2e5988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960088)));
    // 0x2e598c: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x2E598Cu;
    SET_GPR_U32(ctx, 31, 0x2E5994u);
    ctx->pc = 0x2E5990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E598Cu;
    // 0x2e5990: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x2E598Cu, 0x2E5994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5994u;
label_2e5994:
    // 0x2e5994: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2E5994u;
    SET_GPR_U32(ctx, 31, 0x2E599Cu);
    ctx->pc = 0x2E5998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5994u;
    // 0x2e5998: 0x8e04e3d8  lw          $a0, -0x1C28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2E5994u, 0x2E599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E599Cu;
label_2e599c:
    // 0x2e599c: 0xc097360  jal         func_25CD80
    ctx->pc = 0x2E599Cu;
    SET_GPR_U32(ctx, 31, 0x2E59A4u);
    ctx->pc = 0x2E59A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E599Cu;
    // 0x2e59a0: 0x8e04e3d8  lw          $a0, -0x1C28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD80u, 0x2E599Cu, 0x2E59A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59A4u;
label_2e59a4:
    // 0x2e59a4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e59a8: 0xc098560  jal         func_261580
    ctx->pc = 0x2E59A8u;
    SET_GPR_U32(ctx, 31, 0x2E59B0u);
    ctx->pc = 0x2E59ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59A8u;
    // 0x2e59ac: 0x8c64e3dc  lw          $a0, -0x1C24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2E59A8u, 0x2E59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59B0u;
label_2e59b0:
    // 0x2e59b0: 0x3c1001cb  lui         $s0, 0x1CB
    ctx->pc = 0x2e59b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
    // 0x2e59b4: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2e59b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2e59b8: 0x2610fd30  addiu       $s0, $s0, -0x2D0
    ctx->pc = 0x2e59b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966576));
    // 0x2e59bc: 0x2484fd48  addiu       $a0, $a0, -0x2B8
    ctx->pc = 0x2e59bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966600));
    // 0x2e59c0: 0xc044436  jal         func_1110D8
    ctx->pc = 0x2E59C0u;
    SET_GPR_U32(ctx, 31, 0x2E59C8u);
    ctx->pc = 0x2E59C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59C0u;
    // 0x2e59c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110D8u, 0x2E59C0u, 0x2E59C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59C8u;
label_2e59c8:
    // 0x2e59c8: 0xc04445c  jal         func_111170
    ctx->pc = 0x2E59C8u;
    SET_GPR_U32(ctx, 31, 0x2E59D0u);
    ctx->pc = 0x2E59CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59C8u;
    // 0x2e59cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111170u, 0x2E59C8u, 0x2E59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59D0u;
label_2e59d0:
    // 0x2e59d0: 0xc0ba0e2  jal         func_2E8388
    ctx->pc = 0x2E59D0u;
    SET_GPR_U32(ctx, 31, 0x2E59D8u);
    ctx->pc = 0x2E8388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8388u, 0x2E59D0u, 0x2E59D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59D8u;
label_2e59d8:
    // 0x2e59d8: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E59D8u;
    {
        const bool branch_taken_0x2e59d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59D8u;
        // 0x2e59dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59d8) {
            ctx->pc = 0x2E5A1Cu;
            goto label_2e5a1c;
        }
    }
    ctx->pc = 0x2E59E0u;
    // 0x2e59e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e59e4: 0x2442e3e0  addiu       $v0, $v0, -0x1C20
    ctx->pc = 0x2e59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960096));
    // 0x2e59e8: 0x80430204  lb          $v1, 0x204($v0)
    ctx->pc = 0x2e59e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x2e59ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E59ECu;
    {
        const bool branch_taken_0x2e59ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59ECu;
        // 0x2e59f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59ec) {
            ctx->pc = 0x2E5A14u;
            goto label_2e5a14;
        }
    }
    ctx->pc = 0x2E59F4u;
    // 0x2e59f4: 0x24500204  addiu       $s0, $v0, 0x204
    ctx->pc = 0x2e59f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_2e59f8:
    // 0x2e59f8: 0xc0b94aa  jal         func_2E52A8
    ctx->pc = 0x2E59F8u;
    SET_GPR_U32(ctx, 31, 0x2E5A00u);
    ctx->pc = 0x2E59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59F8u;
    // 0x2e59fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52A8u, 0x2E59F8u, 0x2E5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A00u;
label_2e5a00:
    // 0x2e5a00: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5A00u;
    {
        const bool branch_taken_0x2e5a00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A00u;
        // 0x2e5a04: 0x26100214  addiu       $s0, $s0, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a00) {
            ctx->pc = 0x2E5A18u;
            goto label_2e5a18;
        }
    }
    ctx->pc = 0x2E5A08u;
    // 0x2e5a08: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2e5a08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e5a0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E5A0Cu;
    {
        const bool branch_taken_0x2e5a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A0Cu;
        // 0x2e5a10: 0x26310214  addiu       $s1, $s1, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a0c) {
            ctx->pc = 0x2E59F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e59f8;
        }
    }
    ctx->pc = 0x2E5A14u;
label_2e5a14:
    // 0x2e5a14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e5a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5a18:
    // 0x2e5a18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e5a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5a1c:
    // 0x2e5a1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e5a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A24u;
        // 0x2e5a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5A2Cu;
    // 0x2e5a2c: 0x0  nop
    ctx->pc = 0x2e5a2cu;
    // NOP
}

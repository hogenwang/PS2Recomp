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

// Function: sub_0011D950
// Address: 0x11d950 - 0x11da08
void sub_0011D950_0x11d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D950_0x11d950");
#endif

    switch (ctx->pc) {
        case 0x11d9b8u: goto label_11d9b8;
        case 0x11d9e4u: goto label_11d9e4;
        default: break;
    }

    ctx->pc = 0x11d950u;

    // 0x11d950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11d954: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11d954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11d958: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11d958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11d95c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x11d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11d960: 0x2470dd40  addiu       $s0, $v1, -0x22C0
    ctx->pc = 0x11d960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958400));
    // 0x11d964: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11d968: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11d968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11d96c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11d96cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d970: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11d970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11d974: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11d974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d978: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x11d978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x11d97c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11d980: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x11d980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x11d984: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11d984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11d988: 0xac62dd40  sw          $v0, -0x22C0($v1)
    ctx->pc = 0x11d988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958400), GPR_U32(ctx, 2));
    // 0x11d98c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d990: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x11d990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x11d994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d998: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x11d998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x11d99c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11d99cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11d9a4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11d9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11d9a8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11d9a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9ac: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11d9acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11d9b0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11D9B0u;
    SET_GPR_U32(ctx, 31, 0x11D9B8u);
    ctx->pc = 0x11D9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9B0u;
    // 0x11d9b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11D9B0u, 0x11D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9B8u;
label_11d9b8:
    // 0x11d9b8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D9B8u;
    {
        const bool branch_taken_0x11d9b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11d9b8) {
            ctx->pc = 0x11D9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D9B8u;
            // 0x11d9bc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D9C8u;
            goto label_11d9c8;
        }
    }
    ctx->pc = 0x11D9C0u;
    // 0x11d9c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11D9C0u;
    {
        const bool branch_taken_0x11d9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9C0u;
        // 0x11d9c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9c0) {
            ctx->pc = 0x11D9ECu;
            goto label_11d9ec;
        }
    }
    ctx->pc = 0x11D9C8u;
label_11d9c8:
    // 0x11d9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d9cc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D9CCu;
    {
        const bool branch_taken_0x11d9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9CCu;
        // 0x11d9d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9cc) {
            ctx->pc = 0x11D9ECu;
            goto label_11d9ec;
        }
    }
    ctx->pc = 0x11D9D4u;
    // 0x11d9d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11d9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9dc: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x11D9DCu;
    SET_GPR_U32(ctx, 31, 0x11D9E4u);
    ctx->pc = 0x11D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9DCu;
    // 0x11d9e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x11D9DCu, 0x11D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9E4u;
label_11d9e4:
    // 0x11d9e4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x11d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11d9e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11d9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11d9ec:
    // 0x11d9ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11d9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d9f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11d9f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d9f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11d9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d9f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11d9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9FCu;
        // 0x11da00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DA04u;
    // 0x11da04: 0x0  nop
    ctx->pc = 0x11da04u;
    // NOP
}

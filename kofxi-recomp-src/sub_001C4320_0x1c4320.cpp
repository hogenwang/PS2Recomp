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

// Function: sub_001C4320
// Address: 0x1c4320 - 0x1c43e8
void sub_001C4320_0x1c4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4320_0x1c4320");
#endif

    switch (ctx->pc) {
        case 0x1c4344u: goto label_1c4344;
        case 0x1c434cu: goto label_1c434c;
        case 0x1c43c0u: goto label_1c43c0;
        default: break;
    }

    ctx->pc = 0x1c4320u;

    // 0x1c4320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c4330: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1c4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c4334: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C4334u;
    {
        const bool branch_taken_0x1c4334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4334) {
            ctx->pc = 0x1C4338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4334u;
            // 0x1c4338: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C43D8u;
            goto label_1c43d8;
        }
    }
    ctx->pc = 0x1C433Cu;
    // 0x1c433c: 0xc0736de  jal         func_1CDB78
    ctx->pc = 0x1C433Cu;
    SET_GPR_U32(ctx, 31, 0x1C4344u);
    ctx->pc = 0x1CDB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB78u, 0x1C433Cu, 0x1C4344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4344u;
label_1c4344:
    // 0x1c4344: 0xc07017e  jal         func_1C05F8
    ctx->pc = 0x1C4344u;
    SET_GPR_U32(ctx, 31, 0x1C434Cu);
    ctx->pc = 0x1C4348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4344u;
    // 0x1c4348: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C05F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C05F8u, 0x1C4344u, 0x1C434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C434Cu;
label_1c434c:
    // 0x1c434c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c434cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4350: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1c4350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c4354: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C4354u;
    {
        const bool branch_taken_0x1c4354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4354) {
            ctx->pc = 0x1C4358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4354u;
            // 0x1c4358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C43C8u;
            goto label_1c43c8;
        }
    }
    ctx->pc = 0x1C435Cu;
    // 0x1c435c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c435cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c4360: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c4360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1c4364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c4364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4368: 0x8c63a100  lw          $v1, -0x5F00($v1)
    ctx->pc = 0x1c4368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942976)));
    // 0x1c436c: 0x600008  jr          $v1
    ctx->pc = 0x1C436Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4378u: goto label_1c4378;
            case 0x1C4388u: goto label_1c4388;
            case 0x1C43B0u: goto label_1c43b0;
            case 0x1C43C4u: goto label_1c43c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C436Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C4374u;
    // 0x1c4374: 0x0  nop
    ctx->pc = 0x1c4374u;
    // NOP
label_1c4378:
    // 0x1c4378: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c437c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1c437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c4380: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C4380u;
    {
        const bool branch_taken_0x1c4380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4380u;
        // 0x1c4384: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4380) {
            ctx->pc = 0x1C43B8u;
            goto label_1c43b8;
        }
    }
    ctx->pc = 0x1C4388u;
label_1c4388:
    // 0x1c4388: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1c4388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c438c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c438cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4390: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1c4390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c4394: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1c4394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1c4398: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c4398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c439c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1c439cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c43a0: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1c43a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c43a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C43A4u;
    {
        const bool branch_taken_0x1c43a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43A4u;
        // 0x1c43a8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43a4) {
            ctx->pc = 0x1C43B8u;
            goto label_1c43b8;
        }
    }
    ctx->pc = 0x1C43ACu;
    // 0x1c43ac: 0x0  nop
    ctx->pc = 0x1c43acu;
    // NOP
label_1c43b0:
    // 0x1c43b0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c43b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c43b4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1c43b8:
    // 0x1c43b8: 0xc0700ee  jal         func_1C03B8
    ctx->pc = 0x1C43B8u;
    SET_GPR_U32(ctx, 31, 0x1C43C0u);
    ctx->pc = 0x1C03B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C03B8u, 0x1C43B8u, 0x1C43C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43C0u;
label_1c43c0:
    // 0x1c43c0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1c43c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1c43c4:
    // 0x1c43c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c43c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c43c8:
    // 0x1c43c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c43c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c43cc: 0x80736fc  j           func_1CDBF0
    ctx->pc = 0x1C43CCu;
    ctx->pc = 0x1C43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43CCu;
    // 0x1c43d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDBF0u;
    sub_001CDBF0_0x1cdbf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C43D4u;
    // 0x1c43d4: 0x0  nop
    ctx->pc = 0x1c43d4u;
    // NOP
label_1c43d8:
    // 0x1c43d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c43d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c43dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C43DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43DCu;
        // 0x1c43e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43E4u;
    // 0x1c43e4: 0x0  nop
    ctx->pc = 0x1c43e4u;
    // NOP
    if (ctx->pc == 0x1c43e4u) { ctx->pc = 0x1c43e8u; }
}

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

// Function: sub_001A1550
// Address: 0x1a1550 - 0x1a1600
void sub_001A1550_0x1a1550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1550_0x1a1550");
#endif

    switch (ctx->pc) {
        case 0x1a1568u: goto label_1a1568;
        case 0x1a1580u: goto label_1a1580;
        case 0x1a1590u: goto label_1a1590;
        case 0x1a15b8u: goto label_1a15b8;
        case 0x1a15c4u: goto label_1a15c4;
        case 0x1a15ccu: goto label_1a15cc;
        case 0x1a15d8u: goto label_1a15d8;
        case 0x1a15e4u: goto label_1a15e4;
        case 0x1a15ecu: goto label_1a15ec;
        default: break;
    }

    ctx->pc = 0x1a1550u;

    // 0x1a1550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a1554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a155c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1560: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A1560u;
    SET_GPR_U32(ctx, 31, 0x1A1568u);
    ctx->pc = 0x1A1564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1560u;
    // 0x1a1564: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1A1560u, 0x1A1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1568u;
label_1a1568:
    // 0x1a1568: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1a1568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1a156c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a156cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1570: 0x2442f390  addiu       $v0, $v0, -0xC70
    ctx->pc = 0x1a1570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964112));
    // 0x1a1574: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a1574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a1578: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1A1578u;
    SET_GPR_U32(ctx, 31, 0x1A1580u);
    ctx->pc = 0x1A157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1578u;
    // 0x1a157c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8198u, 0x1A1578u, 0x1A1580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1580u;
label_1a1580:
    // 0x1a1580: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a1580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a1584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1588: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A1588u;
    SET_GPR_U32(ctx, 31, 0x1A1590u);
    ctx->pc = 0x1A158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1588u;
    // 0x1a158c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1A1588u, 0x1A1590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1590u;
label_1a1590:
    // 0x1a1590: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1a1590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1a1594: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1a1594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a1598: 0x2442f3a0  addiu       $v0, $v0, -0xC60
    ctx->pc = 0x1a1598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964128));
    // 0x1a159c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1a159cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1a15a0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1a15a4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1a15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a15a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a15ac: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a15acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a15b0: 0xc04997e  jal         func_1265F8
    ctx->pc = 0x1A15B0u;
    SET_GPR_U32(ctx, 31, 0x1A15B8u);
    ctx->pc = 0x1A15B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15B0u;
    // 0x1a15b4: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1265F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1265F8u, 0x1A15B0u, 0x1A15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15B8u;
label_1a15b8:
    // 0x1a15b8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1a15b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1a15bc: 0xc06e0a6  jal         func_1B8298
    ctx->pc = 0x1A15BCu;
    SET_GPR_U32(ctx, 31, 0x1A15C4u);
    ctx->pc = 0x1A15C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15BCu;
    // 0x1a15c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8298u, 0x1A15BCu, 0x1A15C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15C4u;
label_1a15c4:
    // 0x1a15c4: 0xc06cd9c  jal         func_1B3670
    ctx->pc = 0x1A15C4u;
    SET_GPR_U32(ctx, 31, 0x1A15CCu);
    ctx->pc = 0x1A15C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15C4u;
    // 0x1a15c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3670u, 0x1A15C4u, 0x1A15CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15CCu;
label_1a15cc:
    // 0x1a15cc: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x1a15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x1a15d0: 0xc040800  jal         func_102000
    ctx->pc = 0x1A15D0u;
    SET_GPR_U32(ctx, 31, 0x1A15D8u);
    ctx->pc = 0x1A15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15D0u;
    // 0x1a15d4: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102000u, 0x1A15D0u, 0x1A15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15D8u;
label_1a15d8:
    // 0x1a15d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a15dc: 0xc06d232  jal         func_1B48C8
    ctx->pc = 0x1A15DCu;
    SET_GPR_U32(ctx, 31, 0x1A15E4u);
    ctx->pc = 0x1A15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15DCu;
    // 0x1a15e0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48C8u, 0x1A15DCu, 0x1A15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15E4u;
label_1a15e4:
    // 0x1a15e4: 0xc06c74a  jal         func_1B1D28
    ctx->pc = 0x1A15E4u;
    SET_GPR_U32(ctx, 31, 0x1A15ECu);
    ctx->pc = 0x1B1D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1D28u, 0x1A15E4u, 0x1A15ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15ECu;
label_1a15ec:
    // 0x1a15ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a15ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a15f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A15F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15F0u;
        // 0x1a15f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A15F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A15F8u;
    // 0x1a15f8: 0x0  nop
    ctx->pc = 0x1a15f8u;
    // NOP
    // 0x1a15fc: 0x0  nop
    ctx->pc = 0x1a15fcu;
    // NOP
    if (ctx->pc == 0x1a15fcu) { ctx->pc = 0x1a1600u; }
}

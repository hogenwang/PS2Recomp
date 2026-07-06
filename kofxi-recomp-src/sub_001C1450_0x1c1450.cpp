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

// Function: sub_001C1450
// Address: 0x1c1450 - 0x1c1510
void sub_001C1450_0x1c1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1450_0x1c1450");
#endif

    switch (ctx->pc) {
        case 0x1c1488u: goto label_1c1488;
        case 0x1c14b0u: goto label_1c14b0;
        case 0x1c14c4u: goto label_1c14c4;
        case 0x1c14ccu: goto label_1c14cc;
        case 0x1c14d8u: goto label_1c14d8;
        case 0x1c14e8u: goto label_1c14e8;
        default: break;
    }

    ctx->pc = 0x1c1450u;

    // 0x1c1450: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1454: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1458: 0x8c43c844  lw          $v1, -0x37BC($v0)
    ctx->pc = 0x1c1458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953028)));
    // 0x1c145c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1460: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1460u;
    {
        const bool branch_taken_0x1c1460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1460u;
        // 0x1c1464: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1460) {
            ctx->pc = 0x1C1478u;
            goto label_1c1478;
        }
    }
    ctx->pc = 0x1C1468u;
    // 0x1c1468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c146c: 0x8073708  j           func_1CDC20
    ctx->pc = 0x1C146Cu;
    ctx->pc = 0x1C1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C146Cu;
    // 0x1c1470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC20u;
    sub_001CDC20_0x1cdc20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1474u;
    // 0x1c1474: 0x0  nop
    ctx->pc = 0x1c1474u;
    // NOP
label_1c1478:
    // 0x1c1478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c147c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C147Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C147Cu;
        // 0x1c1480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C147Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1484u;
    // 0x1c1484: 0x0  nop
    ctx->pc = 0x1c1484u;
    // NOP
label_1c1488:
    // 0x1c1488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c148c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1490: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c1494: 0x2452c80c  addiu       $s2, $v0, -0x37F4
    ctx->pc = 0x1c1494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952972));
    // 0x1c1498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c149c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c149cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c14a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c14a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c14a8: 0xc0739f8  jal         func_1CE7E0
    ctx->pc = 0x1C14A8u;
    SET_GPR_U32(ctx, 31, 0x1C14B0u);
    ctx->pc = 0x1C14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14A8u;
    // 0x1c14ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE7E0u, 0x1C14A8u, 0x1C14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14B0u;
label_1c14b0:
    // 0x1c14b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c14b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C14B4u;
    {
        const bool branch_taken_0x1c14b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14B4u;
        // 0x1c14b8: 0x34049600  ori         $a0, $zero, 0x9600 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38400);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14b4) {
            ctx->pc = 0x1C14F4u;
            goto label_1c14f4;
        }
    }
    ctx->pc = 0x1C14BCu;
    // 0x1c14bc: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C14BCu;
    SET_GPR_U32(ctx, 31, 0x1C14C4u);
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C14BCu, 0x1C14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14C4u;
label_1c14c4:
    // 0x1c14c4: 0xc047162  jal         func_11C588
    ctx->pc = 0x1C14C4u;
    SET_GPR_U32(ctx, 31, 0x1C14CCu);
    ctx->pc = 0x1C14C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14C4u;
    // 0x1c14c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C588u, 0x1C14C4u, 0x1C14CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14CCu;
label_1c14cc:
    // 0x1c14cc: 0x34049601  ori         $a0, $zero, 0x9601
    ctx->pc = 0x1c14ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38401);
    // 0x1c14d0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C14D0u;
    SET_GPR_U32(ctx, 31, 0x1C14D8u);
    ctx->pc = 0x1C14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14D0u;
    // 0x1c14d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C14D0u, 0x1C14D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14D8u;
label_1c14d8:
    // 0x1c14d8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C14D8u;
    {
        const bool branch_taken_0x1c14d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c14d8) {
            ctx->pc = 0x1C14DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C14D8u;
            // 0x1c14dc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C14F0u;
            goto label_1c14f0;
        }
    }
    ctx->pc = 0x1C14E0u;
    // 0x1c14e0: 0xc047196  jal         func_11C658
    ctx->pc = 0x1C14E0u;
    SET_GPR_U32(ctx, 31, 0x1C14E8u);
    ctx->pc = 0x11C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C658u, 0x1C14E0u, 0x1C14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14E8u;
label_1c14e8:
    // 0x1c14e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c14e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c14ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c14f0:
    // 0x1c14f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c14f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c14f4:
    // 0x1c14f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c14f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c14f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c14f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c14fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c14fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1500: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1504: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1504u;
        // 0x1c1508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C150Cu;
    // 0x1c150c: 0x0  nop
    ctx->pc = 0x1c150cu;
    // NOP
    if (ctx->pc == 0x1c150cu) { ctx->pc = 0x1c1510u; }
}

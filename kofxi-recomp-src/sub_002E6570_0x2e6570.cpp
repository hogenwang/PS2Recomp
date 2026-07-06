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

// Function: sub_002E6570
// Address: 0x2e6570 - 0x2e6628
void sub_002E6570_0x2e6570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6570_0x2e6570");
#endif

    switch (ctx->pc) {
        case 0x2e6598u: goto label_2e6598;
        case 0x2e65f0u: goto label_2e65f0;
        case 0x2e6600u: goto label_2e6600;
        case 0x2e660cu: goto label_2e660c;
        default: break;
    }

    ctx->pc = 0x2e6570u;

    // 0x2e6570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e6570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e6574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e6574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6578: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e6578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e657c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6580: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e6580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e6584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e6584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6588: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e6588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e658c: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x2e658cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e6590: 0xc0b990a  jal         func_2E6428
    ctx->pc = 0x2E6590u;
    SET_GPR_U32(ctx, 31, 0x2E6598u);
    ctx->pc = 0x2E6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6590u;
    // 0x2e6594: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6428u, 0x2E6590u, 0x2E6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6598u;
label_2e6598:
    // 0x2e6598: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E6598u;
    {
        const bool branch_taken_0x2e6598 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6598u;
        // 0x2e659c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6598) {
            ctx->pc = 0x2E6610u;
            goto label_2e6610;
        }
    }
    ctx->pc = 0x2E65A0u;
    // 0x2e65a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e65a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e65a8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E65A8u;
    {
        const bool branch_taken_0x2e65a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65A8u;
        // 0x2e65ac: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65a8) {
            ctx->pc = 0x2E65DCu;
            goto label_2e65dc;
        }
    }
    ctx->pc = 0x2E65B0u;
    // 0x2e65b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E65B0u;
    {
        const bool branch_taken_0x2e65b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65B0u;
        // 0x2e65b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65b0) {
            ctx->pc = 0x2E65C8u;
            goto label_2e65c8;
        }
    }
    ctx->pc = 0x2E65B8u;
    // 0x2e65b8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E65B8u;
    {
        const bool branch_taken_0x2e65b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65B8u;
        // 0x2e65bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65b8) {
            ctx->pc = 0x2E65F8u;
            goto label_2e65f8;
        }
    }
    ctx->pc = 0x2E65C0u;
    // 0x2e65c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E65C0u;
    {
        const bool branch_taken_0x2e65c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65C0u;
        // 0x2e65c4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65c0) {
            ctx->pc = 0x2E6614u;
            goto label_2e6614;
        }
    }
    ctx->pc = 0x2E65C8u;
label_2e65c8:
    // 0x2e65c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e65cc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E65CCu;
    {
        const bool branch_taken_0x2e65cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E65D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65CCu;
        // 0x2e65d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65cc) {
            ctx->pc = 0x2E65F8u;
            goto label_2e65f8;
        }
    }
    ctx->pc = 0x2E65D4u;
    // 0x2e65d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E65D4u;
    {
        const bool branch_taken_0x2e65d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65D4u;
        // 0x2e65d8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65d4) {
            ctx->pc = 0x2E6614u;
            goto label_2e6614;
        }
    }
    ctx->pc = 0x2E65DCu;
label_2e65dc:
    // 0x2e65dc: 0x92226a10  lbu         $v0, 0x6A10($s1)
    ctx->pc = 0x2e65dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27152)));
    // 0x2e65e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E65E0u;
    {
        const bool branch_taken_0x2e65e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65E0u;
        // 0x2e65e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65e0) {
            ctx->pc = 0x2E6610u;
            goto label_2e6610;
        }
    }
    ctx->pc = 0x2E65E8u;
    // 0x2e65e8: 0xc0b9920  jal         func_2E6480
    ctx->pc = 0x2E65E8u;
    SET_GPR_U32(ctx, 31, 0x2E65F0u);
    ctx->pc = 0x2E65ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65E8u;
    // 0x2e65ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6480u, 0x2E65E8u, 0x2E65F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65F0u;
label_2e65f0:
    // 0x2e65f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E65F0u;
    {
        const bool branch_taken_0x2e65f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65F0u;
        // 0x2e65f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65f0) {
            ctx->pc = 0x2E6610u;
            goto label_2e6610;
        }
    }
    ctx->pc = 0x2E65F8u;
label_2e65f8:
    // 0x2e65f8: 0xc0b9920  jal         func_2E6480
    ctx->pc = 0x2E65F8u;
    SET_GPR_U32(ctx, 31, 0x2E6600u);
    ctx->pc = 0x2E65FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65F8u;
    // 0x2e65fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6480u, 0x2E65F8u, 0x2E6600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6600u;
label_2e6600:
    // 0x2e6600: 0x8e250404  lw          $a1, 0x404($s1)
    ctx->pc = 0x2e6600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x2e6604: 0xc09a0b4  jal         func_2682D0
    ctx->pc = 0x2E6604u;
    SET_GPR_U32(ctx, 31, 0x2E660Cu);
    ctx->pc = 0x2E6608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6604u;
    // 0x2e6608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2682D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2682D0u, 0x2E6604u, 0x2E660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E660Cu;
label_2e660c:
    // 0x2e660c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e660cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6610:
    // 0x2e6610: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e6610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e6614:
    // 0x2e6614: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e6614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6618: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e6618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e661c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e661cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6620: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6620u;
        // 0x2e6624: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6628u;
}

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

// Function: sub_001DD250
// Address: 0x1dd250 - 0x1dd358
void sub_001DD250_0x1dd250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD250_0x1dd250");
#endif

    switch (ctx->pc) {
        case 0x1dd270u: goto label_1dd270;
        case 0x1dd27cu: goto label_1dd27c;
        case 0x1dd2ccu: goto label_1dd2cc;
        case 0x1dd2e0u: goto label_1dd2e0;
        case 0x1dd2ecu: goto label_1dd2ec;
        case 0x1dd330u: goto label_1dd330;
        default: break;
    }

    ctx->pc = 0x1dd250u;

label_1dd250:
    // 0x1dd250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd25c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dd264: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1dd264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dd268: 0xc078e82  jal         func_1E3A08
    ctx->pc = 0x1DD268u;
    SET_GPR_U32(ctx, 31, 0x1DD270u);
    ctx->pc = 0x1DD26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD268u;
    // 0x1dd26c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A08u, 0x1DD268u, 0x1DD270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD270u;
label_1dd270:
    // 0x1dd270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd274: 0xc07917e  jal         func_1E45F8
    ctx->pc = 0x1DD274u;
    SET_GPR_U32(ctx, 31, 0x1DD27Cu);
    ctx->pc = 0x1DD278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD274u;
    // 0x1dd278: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E45F8u, 0x1DD274u, 0x1DD27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD27Cu;
label_1dd27c:
    // 0x1dd27c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dd27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd280: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1dd280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1dd284: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1dd284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1dd288: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1dd288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1dd28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd290: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x1dd290u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x1dd294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd298: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dd298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd29c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2A0u;
        // 0x1dd2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD2A8u;
    // 0x1dd2a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd2ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd2b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd2b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd2b8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD2B8u;
    {
        const bool branch_taken_0x1dd2b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2B8u;
        // 0x1dd2bc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2b8) {
            ctx->pc = 0x1DD2D8u;
            goto label_1dd2d8;
        }
    }
    ctx->pc = 0x1DD2C0u;
    // 0x1dd2c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dd2c4: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DD2C4u;
    SET_GPR_U32(ctx, 31, 0x1DD2CCu);
    ctx->pc = 0x1DD2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD2C4u;
    // 0x1dd2c8: 0x2484c428  addiu       $a0, $a0, -0x3BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DD2C4u, 0x1DD2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD2CCu;
label_1dd2cc:
    // 0x1dd2cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD2CCu;
    {
        const bool branch_taken_0x1dd2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2CCu;
        // 0x1dd2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2cc) {
            ctx->pc = 0x1DD2F0u;
            goto label_1dd2f0;
        }
    }
    ctx->pc = 0x1DD2D4u;
    // 0x1dd2d4: 0x0  nop
    ctx->pc = 0x1dd2d4u;
    // NOP
label_1dd2d8:
    // 0x1dd2d8: 0xc077466  jal         func_1DD198
    ctx->pc = 0x1DD2D8u;
    SET_GPR_U32(ctx, 31, 0x1DD2E0u);
    ctx->pc = 0x1DD198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD198u, 0x1DD2D8u, 0x1DD2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD2E0u;
label_1dd2e0:
    // 0x1dd2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd2e4: 0xc077494  jal         func_1DD250
    ctx->pc = 0x1DD2E4u;
    SET_GPR_U32(ctx, 31, 0x1DD2ECu);
    ctx->pc = 0x1DD2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD2E4u;
    // 0x1dd2e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD250u;
    goto label_1dd250;
    ctx->pc = 0x1DD2ECu;
label_1dd2ec:
    // 0x1dd2ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1dd2f0:
    // 0x1dd2f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd2f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd2f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd2f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2FCu;
        // 0x1dd300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD304u;
    // 0x1dd304: 0x0  nop
    ctx->pc = 0x1dd304u;
    // NOP
    // 0x1dd308: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1dd308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd30c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dd310: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dd310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dd314: 0xac48ec08  sw          $t0, -0x13F8($v0)
    ctx->pc = 0x1dd314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962184), GPR_U32(ctx, 8));
    // 0x1dd318: 0xac65ec0c  sw          $a1, -0x13F4($v1)
    ctx->pc = 0x1dd318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962188), GPR_U32(ctx, 5));
    // 0x1dd31c: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD31Cu;
    {
        const bool branch_taken_0x1dd31c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1DD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD31Cu;
        // 0x1dd320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd31c) {
            ctx->pc = 0x1DD350u;
            goto label_1dd350;
        }
    }
    ctx->pc = 0x1DD324u;
    // 0x1dd324: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dd324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dd328: 0x2449b948  addiu       $t1, $v0, -0x46B8
    ctx->pc = 0x1dd328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949192));
    // 0x1dd32c: 0x0  nop
    ctx->pc = 0x1dd32cu;
    // NOP
label_1dd330:
    // 0x1dd330: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1dd330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1dd334: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dd334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dd338: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1dd338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd33c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1dd33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1dd340: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1dd340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd344: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x1dd344u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1dd348: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DD348u;
    {
        const bool branch_taken_0x1dd348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD348u;
        // 0x1dd34c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd348) {
            ctx->pc = 0x1DD330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd330;
        }
    }
    ctx->pc = 0x1DD350u;
label_1dd350:
    // 0x1dd350: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD358u;
}

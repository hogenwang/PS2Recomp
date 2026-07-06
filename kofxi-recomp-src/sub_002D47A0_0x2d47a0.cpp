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

// Function: sub_002D47A0
// Address: 0x2d47a0 - 0x2d4990
void sub_002D47A0_0x2d47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D47A0_0x2d47a0");
#endif

    switch (ctx->pc) {
        case 0x2d47d0u: goto label_2d47d0;
        case 0x2d4820u: goto label_2d4820;
        case 0x2d485cu: goto label_2d485c;
        case 0x2d48b0u: goto label_2d48b0;
        case 0x2d48e0u: goto label_2d48e0;
        default: break;
    }

    ctx->pc = 0x2d47a0u;

    // 0x2d47a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d47a4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d47a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2d47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d47ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d47b0: 0xdc43fff8  ld          $v1, -0x8($v0)
    ctx->pc = 0x2d47b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x2d47b4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D47B4u;
    {
        const bool branch_taken_0x2d47b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47B4u;
        // 0x2d47b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47b4) {
            ctx->pc = 0x2D47F8u;
            goto label_2d47f8;
        }
    }
    ctx->pc = 0x2D47BCu;
    // 0x2d47bc: 0x462000c  bltzl       $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D47BCu;
    {
        const bool branch_taken_0x2d47bc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2d47bc) {
            ctx->pc = 0x2D47C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D47BCu;
            // 0x2d47c0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D47F0u;
            goto label_2d47f0;
        }
    }
    ctx->pc = 0x2D47C4u;
    // 0x2d47c4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2d47c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d47c8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2d47c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2d47cc: 0x0  nop
    ctx->pc = 0x2d47ccu;
    // NOP
label_2d47d0:
    // 0x2d47d0: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x2d47d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x2d47d4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2d47d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2d47d8: 0x0  nop
    ctx->pc = 0x2d47d8u;
    // NOP
    // 0x2d47dc: 0x0  nop
    ctx->pc = 0x2d47dcu;
    // NOP
    // 0x2d47e0: 0x0  nop
    ctx->pc = 0x2d47e0u;
    // NOP
    // 0x2d47e4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D47E4u;
    {
        const bool branch_taken_0x2d47e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47E4u;
        // 0x2d47e8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47e4) {
            ctx->pc = 0x2D47D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d47d0;
        }
    }
    ctx->pc = 0x2D47ECu;
    // 0x2d47ec: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2d47ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2d47f0:
    // 0x2d47f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D47F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47F0u;
        // 0x2d47f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D47F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D47F8u;
label_2d47f8:
    // 0x2d47f8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2d47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d47fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d47fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4800: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4800u;
        // 0x2d4804: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4808u;
    // 0x2d4808: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d4808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d480c: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x2d480cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d4810: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2D4810u;
    {
        const bool branch_taken_0x2d4810 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2D4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4810u;
        // 0x2d4814: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4810) {
            ctx->pc = 0x2D4844u;
            goto label_2d4844;
        }
    }
    ctx->pc = 0x2D4818u;
    // 0x2d4818: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2d4818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d481c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2d481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d4820:
    // 0x2d4820: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2d4820u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4824: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2d4824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2d4828: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x2d4828u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d482c: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x2d482cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x2d4830: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x2d4830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x2d4834: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d4834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4838: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2d4838u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x2d483c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D483Cu;
    {
        const bool branch_taken_0x2d483c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D483Cu;
        // 0x2d4840: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d483c) {
            ctx->pc = 0x2D4820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4820;
        }
    }
    ctx->pc = 0x2D4844u;
label_2d4844:
    // 0x2d4844: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2d4844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2d4848: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2d4848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d484c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d484cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4850: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2d4850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2d4854: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D4854u;
    {
        const bool branch_taken_0x2d4854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4854u;
        // 0x2d4858: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4854) {
            ctx->pc = 0x2D4870u;
            goto label_2d4870;
        }
    }
    ctx->pc = 0x2D485Cu;
label_2d485c:
    // 0x2d485c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D485Cu;
    {
        const bool branch_taken_0x2d485c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d485c) {
            ctx->pc = 0x2D4870u;
            goto label_2d4870;
        }
    }
    ctx->pc = 0x2D4864u;
    // 0x2d4864: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d4864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d4868: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d486c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2d486cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2d4870:
    // 0x2d4870: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4870u;
        // 0x2d4874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4878u;
    // 0x2d4878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d487c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4880: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4884: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d4888: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d4888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d488c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4890: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d4890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d4894: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2d4894u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d4898: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d4898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d489c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d489cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d48a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D48A0u;
    {
        const bool branch_taken_0x2d48a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D48A0u;
        // 0x2d48a4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d48a0) {
            ctx->pc = 0x2D48BCu;
            goto label_2d48bc;
        }
    }
    ctx->pc = 0x2D48A8u;
    // 0x2d48a8: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D48A8u;
    SET_GPR_U32(ctx, 31, 0x2D48B0u);
    ctx->pc = 0x2D48ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48A8u;
    // 0x2d48ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D48A8u, 0x2D48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48B0u;
label_2d48b0:
    // 0x2d48b0: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D48B0u;
    {
        const bool branch_taken_0x2d48b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d48b0) {
            ctx->pc = 0x2D48B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D48B0u;
            // 0x2d48b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4944u;
            goto label_2d4944;
        }
    }
    ctx->pc = 0x2D48B8u;
    // 0x2d48b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2d48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d48bc:
    // 0x2d48bc: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x2d48bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d48c0: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x2d48c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d48c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d48c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48c8: 0x8e490008  lw          $t1, 0x8($s2)
    ctx->pc = 0x2d48c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d48cc: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2D48CCu;
    {
        const bool branch_taken_0x2d48cc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2D48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D48CCu;
        // 0x2d48d0: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d48cc) {
            ctx->pc = 0x2D490Cu;
            goto label_2d490c;
        }
    }
    ctx->pc = 0x2D48D4u;
    // 0x2d48d4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2d48d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48d8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2d48d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48dc: 0x0  nop
    ctx->pc = 0x2d48dcu;
    // NOP
label_2d48e0:
    // 0x2d48e0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x2d48e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d48e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2d48e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2d48e8: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x2d48e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d48ec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2d48ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2d48f0: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2d48f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2d48f4: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x2d48f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d48f8: 0x31ffc  dsll32      $v1, $v1, 31
    ctx->pc = 0x2d48f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 31));
    // 0x2d48fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d48fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d4900: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2d4900u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2d4904: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D4904u;
    {
        const bool branch_taken_0x2d4904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4904u;
        // 0x2d4908: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4904) {
            ctx->pc = 0x2D48E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d48e0;
        }
    }
    ctx->pc = 0x2D490Cu;
label_2d490c:
    // 0x2d490c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2d490cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2d4910: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x2d4910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2d4914: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d4914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d4918: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2d4918u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d491c: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x2d491cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x2d4920: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D4920u;
    {
        const bool branch_taken_0x2d4920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4920u;
        // 0x2d4924: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4920) {
            ctx->pc = 0x2D493Cu;
            goto label_2d493c;
        }
    }
    ctx->pc = 0x2D4928u;
    // 0x2d4928: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4928u;
    {
        const bool branch_taken_0x2d4928 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4928u;
        // 0x2d492c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4928) {
            ctx->pc = 0x2D4940u;
            goto label_2d4940;
        }
    }
    ctx->pc = 0x2D4930u;
    // 0x2d4930: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2d4930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d4934: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d4934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d4938: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2d4938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2d493c:
    // 0x2d493c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d493cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4940:
    // 0x2d4940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4944:
    // 0x2d4944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d494c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d494cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4950: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4950u;
        // 0x2d4954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4958u;
    // 0x2d4958: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d4958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d495c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d495cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4960: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d4960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d4964: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d4964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d4968: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2d4968u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d496c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D496Cu;
        // 0x2d4970: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4974u;
    // 0x2d4974: 0x0  nop
    ctx->pc = 0x2d4974u;
    // NOP
    // 0x2d4978: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d497c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d497cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4980: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d4980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d4984: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d4984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d4988: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4988u;
        // 0x2d498c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4990u;
}

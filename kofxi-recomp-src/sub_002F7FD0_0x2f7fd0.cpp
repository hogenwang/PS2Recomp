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

// Function: sub_002F7FD0
// Address: 0x2f7fd0 - 0x2f8130
void sub_002F7FD0_0x2f7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7FD0_0x2f7fd0");
#endif

    ctx->pc = 0x2f7fd0u;

    // 0x2f7fd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f7fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7fd4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2f7fd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7fd8: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x2f7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
    // 0x2f7fdc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2f7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2f7fe0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2f7fe0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f7fe4: 0x2c830012  sltiu       $v1, $a0, 0x12
    ctx->pc = 0x2f7fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x2f7fe8: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F7FE8u;
    {
        const bool branch_taken_0x2f7fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FE8u;
        // 0x2f7fec: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7fe8) {
            ctx->pc = 0x2F8120u;
            goto label_2f8120;
        }
    }
    ctx->pc = 0x2F7FF0u;
    // 0x2f7ff0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f7ff4: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x2f7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
    // 0x2f7ff8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f7ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f7ffc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f7ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8000: 0x800008  jr          $a0
    ctx->pc = 0x2F8000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F8008u: goto label_2f8008;
            case 0x2F8030u: goto label_2f8030;
            case 0x2F8084u: goto label_2f8084;
            case 0x2F80ACu: goto label_2f80ac;
            case 0x2F80D4u: goto label_2f80d4;
            case 0x2F8120u: goto label_2f8120;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8000u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F8008u;
label_2f8008:
    // 0x2f8008: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f8008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f800c: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x2f800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2f8010: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F8010u;
    {
        const bool branch_taken_0x2f8010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8010u;
        // 0x2f8014: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8010) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F8018u;
    // 0x2f8018: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f8018u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f801c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2f801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2f8020: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2F8020u;
    {
        const bool branch_taken_0x2f8020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8020u;
        // 0x2f8024: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8020) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F8028u;
    // 0x2f8028: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8028u;
        // 0x2f802c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8030u;
label_2f8030:
    // 0x2f8030: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f8030u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f8034: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x2f8034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2f8038: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8038u;
    {
        const bool branch_taken_0x2f8038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8038u;
        // 0x2f803c: 0x90a40001  lbu         $a0, 0x1($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8038) {
            ctx->pc = 0x2F8058u;
            goto label_2f8058;
        }
    }
    ctx->pc = 0x2F8040u;
    // 0x2f8040: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f8040u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f8044: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2f8048: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8048u;
    {
        const bool branch_taken_0x2f8048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8048u;
        // 0x2f804c: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8048) {
            ctx->pc = 0x2F805Cu;
            goto label_2f805c;
        }
    }
    ctx->pc = 0x2F8050u;
    // 0x2f8050: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8050u;
        // 0x2f8054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8058u;
label_2f8058:
    // 0x2f8058: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2f8058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2f805c:
    // 0x2f805c: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x2f805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2f8060: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f8060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f8064: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2F8064u;
    {
        const bool branch_taken_0x2f8064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8064u;
        // 0x2f8068: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8064) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F806Cu;
    // 0x2f806c: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f806cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f8070: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x2f8070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2f8074: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2F8074u;
    {
        const bool branch_taken_0x2f8074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8074u;
        // 0x2f8078: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8074) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F807Cu;
    // 0x2f807c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F807Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F807Cu;
        // 0x2f8080: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F807Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8084u;
label_2f8084:
    // 0x2f8084: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f8084u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f8088: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f8088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2f808c: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F808Cu;
    {
        const bool branch_taken_0x2f808c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F808Cu;
        // 0x2f8090: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f808c) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F8094u;
    // 0x2f8094: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f8094u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f8098: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f8098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f809c: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F809Cu;
    {
        const bool branch_taken_0x2f809c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F809Cu;
        // 0x2f80a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f809c) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F80A4u;
    // 0x2f80a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F80A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80A4u;
        // 0x2f80a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F80A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F80ACu;
label_2f80ac:
    // 0x2f80ac: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f80acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f80b0: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2f80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2f80b4: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F80B4u;
    {
        const bool branch_taken_0x2f80b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80B4u;
        // 0x2f80b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f80b4) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F80BCu;
    // 0x2f80bc: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f80bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f80c0: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x2f80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x2f80c4: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F80C4u;
    {
        const bool branch_taken_0x2f80c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80C4u;
        // 0x2f80c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f80c4) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F80CCu;
    // 0x2f80cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F80CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80CCu;
        // 0x2f80d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F80CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F80D4u;
label_2f80d4:
    // 0x2f80d4: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2f80d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f80d8: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x2f80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2f80dc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F80DCu;
    {
        const bool branch_taken_0x2f80dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80DCu;
        // 0x2f80e0: 0x90a40001  lbu         $a0, 0x1($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f80dc) {
            ctx->pc = 0x2F80FCu;
            goto label_2f80fc;
        }
    }
    ctx->pc = 0x2F80E4u;
    // 0x2f80e4: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2f80e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f80e8: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2f80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2f80ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F80ECu;
    {
        const bool branch_taken_0x2f80ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80ECu;
        // 0x2f80f0: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f80ec) {
            ctx->pc = 0x2F8100u;
            goto label_2f8100;
        }
    }
    ctx->pc = 0x2F80F4u;
    // 0x2f80f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F80F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F80F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80F4u;
        // 0x2f80f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F80F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F80FCu;
label_2f80fc:
    // 0x2f80fc: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2f80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2f8100:
    // 0x2f8100: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x2f8100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2f8104: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f8104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f8108: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8108u;
    {
        const bool branch_taken_0x2f8108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8108u;
        // 0x2f810c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8108) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F8110u;
    // 0x2f8110: 0x80a40002  lb          $a0, 0x2($a1)
    ctx->pc = 0x2f8110u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f8114: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x2f8114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2f8118: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8118u;
    {
        const bool branch_taken_0x2f8118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8118u;
        // 0x2f811c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8118) {
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F8120u;
label_2f8120:
    // 0x2f8120: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f8120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8124:
    // 0x2f8124: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F812Cu;
    // 0x2f812c: 0x0  nop
    ctx->pc = 0x2f812cu;
    // NOP
}

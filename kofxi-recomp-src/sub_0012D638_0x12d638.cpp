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

// Function: sub_0012D638
// Address: 0x12d638 - 0x12d7c8
void sub_0012D638_0x12d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D638_0x12d638");
#endif

    switch (ctx->pc) {
        case 0x12d654u: goto label_12d654;
        case 0x12d674u: goto label_12d674;
        case 0x12d6b4u: goto label_12d6b4;
        case 0x12d6d0u: goto label_12d6d0;
        case 0x12d754u: goto label_12d754;
        default: break;
    }

    ctx->pc = 0x12d638u;

    // 0x12d638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12d638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12d63c: 0x4a1002e  bgez        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x12D63Cu;
    {
        const bool branch_taken_0x12d63c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x12D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D63Cu;
        // 0x12d640: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d63c) {
            ctx->pc = 0x12D6F8u;
            goto label_12d6f8;
        }
    }
    ctx->pc = 0x12D644u;
    // 0x12d644: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12d644u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12d648: 0x52823  negu        $a1, $a1
    ctx->pc = 0x12d648u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x12d64c: 0xa08f0001  sb          $t7, 0x1($a0)
    ctx->pc = 0x12d64cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 15));
    // 0x12d650: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x12d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_12d654:
    // 0x12d654: 0x27ad0028  addiu       $t5, $sp, 0x28
    ctx->pc = 0x12d654u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x12d658: 0x28af000a  slti        $t7, $a1, 0xA
    ctx->pc = 0x12d658u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12d65c: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x12D65Cu;
    {
        const bool branch_taken_0x12d65c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D65Cu;
        // 0x12d660: 0x1a0502d  daddu       $t2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d65c) {
            ctx->pc = 0x12D6DCu;
            goto label_12d6dc;
        }
    }
    ctx->pc = 0x12D664u;
    // 0x12d664: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x12d664u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d668: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x12d668u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d66c: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x12d66cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d670: 0xad001a  div         $zero, $a1, $t5
    ctx->pc = 0x12d670u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_12d674:
    // 0x12d674: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12d674u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12d678: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D678u;
    {
        const bool branch_taken_0x12d678 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d678) {
            ctx->pc = 0x12D67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D678u;
            // 0x12d67c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D680u;
            goto label_12d680;
        }
    }
    ctx->pc = 0x12D680u;
label_12d680:
    // 0x12d680: 0x7810  mfhi        $t7
    ctx->pc = 0x12d680u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x12d684: 0x7012  mflo        $t6
    ctx->pc = 0x12d684u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x12d688: 0x25ef0030  addiu       $t7, $t7, 0x30
    ctx->pc = 0x12d688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 48));
    // 0x12d68c: 0x2812  mflo        $a1
    ctx->pc = 0x12d68cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x12d690: 0xa18f0000  sb          $t7, 0x0($t4)
    ctx->pc = 0x12d690u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12d694: 0x29ce000a  slti        $t6, $t6, 0xA
    ctx->pc = 0x12d694u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12d698: 0x51c0fff6  beql        $t6, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x12D698u;
    {
        const bool branch_taken_0x12d698 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d698) {
            ctx->pc = 0x12D69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D698u;
            // 0x12d69c: 0xad001a  div         $zero, $a1, $t5 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d674;
        }
    }
    ctx->pc = 0x12D6A0u;
    // 0x12d6a0: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x12d6a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12d6a4: 0x24ae0030  addiu       $t6, $a1, 0x30
    ctx->pc = 0x12d6a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12d6a8: 0x1aa782b  sltu        $t7, $t5, $t2
    ctx->pc = 0x12d6a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d6ac: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D6ACu;
    {
        const bool branch_taken_0x12d6ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6ACu;
        // 0x12d6b0: 0xa1ae0000  sb          $t6, 0x0($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6ac) {
            ctx->pc = 0x12D6D0u;
            goto label_12d6d0;
        }
    }
    ctx->pc = 0x12D6B4u;
label_12d6b4:
    // 0x12d6b4: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12d6b4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x12d6b8: 0xa04f0000  sb          $t7, 0x0($v0)
    ctx->pc = 0x12d6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12d6bc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12d6bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12d6c0: 0x1aa782b  sltu        $t7, $t5, $t2
    ctx->pc = 0x12d6c0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d6c4: 0x0  nop
    ctx->pc = 0x12d6c4u;
    // NOP
    // 0x12d6c8: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D6C8u;
    {
        const bool branch_taken_0x12d6c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6C8u;
        // 0x12d6cc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6c8) {
            ctx->pc = 0x12D6B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d6b4;
        }
    }
    ctx->pc = 0x12D6D0u;
label_12d6d0:
    // 0x12d6d0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x12d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12d6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x12D6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6D4u;
        // 0x12d6d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D6DCu;
label_12d6dc:
    // 0x12d6dc: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12d6dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12d6e0: 0x24ae0030  addiu       $t6, $a1, 0x30
    ctx->pc = 0x12d6e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12d6e4: 0xa04f0000  sb          $t7, 0x0($v0)
    ctx->pc = 0x12d6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12d6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d6ec: 0xa04e0000  sb          $t6, 0x0($v0)
    ctx->pc = 0x12d6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x12d6f0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12D6F0u;
    {
        const bool branch_taken_0x12d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6F0u;
        // 0x12d6f4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6f0) {
            ctx->pc = 0x12D6D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d6d0;
        }
    }
    ctx->pc = 0x12D6F8u;
label_12d6f8:
    // 0x12d6f8: 0x240f002b  addiu       $t7, $zero, 0x2B
    ctx->pc = 0x12d6f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12d6fc: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x12d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12d700: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x12D700u;
    {
        const bool branch_taken_0x12d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D700u;
        // 0x12d704: 0xa08f0001  sb          $t7, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d700) {
            ctx->pc = 0x12D654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d654;
        }
    }
    ctx->pc = 0x12D708u;
    // 0x12d708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d714: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d71c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12d71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12d720: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12d720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d724: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12d724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12d728: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D728u;
    {
        const bool branch_taken_0x12d728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D728u;
        // 0x12d72c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d728) {
            ctx->pc = 0x12D740u;
            goto label_12d740;
        }
    }
    ctx->pc = 0x12D730u;
    // 0x12d730: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12d730u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12d734: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x12d734u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12d738: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x12d738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
    // 0x12d73c: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x12d73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12d740:
    // 0x12d740: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x12d740u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x12d744: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D744u;
    {
        const bool branch_taken_0x12d744 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d744) {
            ctx->pc = 0x12D748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D744u;
            // 0x12d748: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D758u;
            goto label_12d758;
        }
    }
    ctx->pc = 0x12D74Cu;
    // 0x12d74c: 0xc049360  jal         func_124D80
    ctx->pc = 0x12D74Cu;
    SET_GPR_U32(ctx, 31, 0x12D754u);
    ctx->pc = 0x124D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D80u, 0x12D74Cu, 0x12D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D754u;
label_12d754:
    // 0x12d754: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12d754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_12d758:
    // 0x12d758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d75c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12d75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d760: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12d760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d764: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12d764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d76c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d774: 0x804b5f2  j           func_12D7C8
    ctx->pc = 0x12D774u;
    ctx->pc = 0x12D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D774u;
    // 0x12d778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7C8u;
    sub_0012D7C8_0x12d7c8(rdram, ctx, runtime); return;
    ctx->pc = 0x12D77Cu;
    // 0x12d77c: 0x0  nop
    ctx->pc = 0x12d77cu;
    // NOP
    // 0x12d780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d784: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12d784u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d78c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12d78cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12d790: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12d790u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d794: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x12d794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12d798: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12d798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7a0: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x12d7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7a4: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x12d7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7a8: 0x804b5f2  j           func_12D7C8
    ctx->pc = 0x12D7A8u;
    ctx->pc = 0x12D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7A8u;
    // 0x12d7ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7C8u;
    sub_0012D7C8_0x12d7c8(rdram, ctx, runtime); return;
    ctx->pc = 0x12D7B0u;
    // 0x12d7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d7b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7bc: 0x804b5f2  j           func_12D7C8
    ctx->pc = 0x12D7BCu;
    ctx->pc = 0x12D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7BCu;
    // 0x12d7c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7C8u;
    sub_0012D7C8_0x12d7c8(rdram, ctx, runtime); return;
    ctx->pc = 0x12D7C4u;
    // 0x12d7c4: 0x0  nop
    ctx->pc = 0x12d7c4u;
    // NOP
}

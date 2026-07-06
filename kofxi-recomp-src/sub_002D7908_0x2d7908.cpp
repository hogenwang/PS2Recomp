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

// Function: sub_002D7908
// Address: 0x2d7908 - 0x2d79d8
void sub_002D7908_0x2d7908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7908_0x2d7908");
#endif

    switch (ctx->pc) {
        case 0x2d7938u: goto label_2d7938;
        case 0x2d7990u: goto label_2d7990;
        case 0x2d7998u: goto label_2d7998;
        default: break;
    }

    ctx->pc = 0x2d7908u;

    // 0x2d7908: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2d7908u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d790c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d790cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d7910: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d7910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d7914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7918: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d791c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2d791cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7920: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7924: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D7924u;
    {
        const bool branch_taken_0x2d7924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7924u;
        // 0x2d7928: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7924) {
            ctx->pc = 0x2D7970u;
            goto label_2d7970;
        }
    }
    ctx->pc = 0x2D792Cu;
    // 0x2d792c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2d792cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7930: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x2d7930u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7934: 0x0  nop
    ctx->pc = 0x2d7934u;
    // NOP
label_2d7938:
    // 0x2d7938: 0x3a82821  addu        $a1, $sp, $t0
    ctx->pc = 0x2d7938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x2d793c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2d793cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2d7940: 0x24e200bf  addiu       $v0, $a3, 0xBF
    ctx->pc = 0x2d7940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 191));
    // 0x2d7944: 0x24e40020  addiu       $a0, $a3, 0x20
    ctx->pc = 0x2d7944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2d7948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d7948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d794c: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x2d794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2d7950: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2d7950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2d7954: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2d7954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2d7958: 0xe2200a  movz        $a0, $a3, $v0
    ctx->pc = 0x2d7958u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x2d795c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2d795cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7960: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x2d7960u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d7964: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2d7964u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7968: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D7968u;
    {
        const bool branch_taken_0x2d7968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7968) {
            ctx->pc = 0x2D796Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7968u;
            // 0x2d796c: 0x90670000  lbu         $a3, 0x0($v1) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d7938;
        }
    }
    ctx->pc = 0x2D7970u;
label_2d7970:
    // 0x2d7970: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2d7970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d7974: 0x3a81021  addu        $v0, $sp, $t0
    ctx->pc = 0x2d7974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x2d7978: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D7978u;
    {
        const bool branch_taken_0x2d7978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7978u;
        // 0x2d797c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7978) {
            ctx->pc = 0x2D79BCu;
            goto label_2d79bc;
        }
    }
    ctx->pc = 0x2D7980u;
    // 0x2d7980: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2d7980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d7984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7988: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d7988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d798c: 0x0  nop
    ctx->pc = 0x2d798cu;
    // NOP
label_2d7990:
    // 0x2d7990: 0xc0b60f2  jal         func_2D83C8
    ctx->pc = 0x2D7990u;
    SET_GPR_U32(ctx, 31, 0x2D7998u);
    ctx->pc = 0x2D7994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7990u;
    // 0x2d7994: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D83C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D83C8u, 0x2D7990u, 0x2D7998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7998u;
label_2d7998:
    // 0x2d7998: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7998u;
    {
        const bool branch_taken_0x2d7998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7998) {
            ctx->pc = 0x2D799Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7998u;
            // 0x2d799c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D79B0u;
            goto label_2d79b0;
        }
    }
    ctx->pc = 0x2D79A0u;
    // 0x2d79a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d79a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d79a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D79A4u;
    {
        const bool branch_taken_0x2d79a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79A4u;
        // 0x2d79a8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79a4) {
            ctx->pc = 0x2D79C0u;
            goto label_2d79c0;
        }
    }
    ctx->pc = 0x2D79ACu;
    // 0x2d79ac: 0x0  nop
    ctx->pc = 0x2d79acu;
    // NOP
label_2d79b0:
    // 0x2d79b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d79b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D79B4u;
    {
        const bool branch_taken_0x2d79b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79B4u;
        // 0x2d79b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79b4) {
            ctx->pc = 0x2D7990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d7990;
        }
    }
    ctx->pc = 0x2D79BCu;
label_2d79bc:
    // 0x2d79bc: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x2d79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
label_2d79c0:
    // 0x2d79c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d79c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d79c4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d79c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d79c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d79cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D79CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79CCu;
        // 0x2d79d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D79CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D79D4u;
    // 0x2d79d4: 0x0  nop
    ctx->pc = 0x2d79d4u;
    // NOP
}

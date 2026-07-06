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

// Function: sub_0033ADB0
// Address: 0x33adb0 - 0x33ae30
void sub_0033ADB0_0x33adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ADB0_0x33adb0");
#endif

    switch (ctx->pc) {
        case 0x33add0u: goto label_33add0;
        case 0x33add8u: goto label_33add8;
        case 0x33ae00u: goto label_33ae00;
        case 0x33ae08u: goto label_33ae08;
        case 0x33ae14u: goto label_33ae14;
        default: break;
    }

    ctx->pc = 0x33adb0u;

    // 0x33adb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33adb4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33adb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33adbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33adc0: 0x9064b249  lbu         $a0, -0x4DB7($v1)
    ctx->pc = 0x33adc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947401)));
    // 0x33adc4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x33adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33adc8: 0x54830013  bnel        $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x33ADC8u;
    {
        const bool branch_taken_0x33adc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33adc8) {
            ctx->pc = 0x33ADCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33ADC8u;
            // 0x33adcc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AE18u;
            goto label_33ae18;
        }
    }
    ctx->pc = 0x33ADD0u;
label_33add0:
    // 0x33add0: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x33ADD0u;
    SET_GPR_U32(ctx, 31, 0x33ADD8u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x33ADD0u, 0x33ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADD8u;
label_33add8:
    // 0x33add8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x33add8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33addc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x33addcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x33ade0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x33ade0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33ade4: 0x8062f340  lb          $v0, -0xCC0($v1)
    ctx->pc = 0x33ade4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964032)));
    // 0x33ade8: 0x0  nop
    ctx->pc = 0x33ade8u;
    // NOP
    // 0x33adec: 0x8010  mfhi        $s0
    ctx->pc = 0x33adecu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x33adf0: 0x1202fff7  beq         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x33ADF0u;
    {
        const bool branch_taken_0x33adf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33adf0) {
            ctx->pc = 0x33ADD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33add0;
        }
    }
    ctx->pc = 0x33ADF8u;
    // 0x33adf8: 0xc055684  jal         func_155A10
    ctx->pc = 0x33ADF8u;
    SET_GPR_U32(ctx, 31, 0x33AE00u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x33ADF8u, 0x33AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE00u;
label_33ae00:
    // 0x33ae00: 0xc0550fc  jal         func_1543F0
    ctx->pc = 0x33AE00u;
    SET_GPR_U32(ctx, 31, 0x33AE08u);
    ctx->pc = 0x33AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE00u;
    // 0x33ae04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1543F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1543F0u, 0x33AE00u, 0x33AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE08u;
label_33ae08:
    // 0x33ae08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x33ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x33ae0c: 0xc052d44  jal         func_14B510
    ctx->pc = 0x33AE0Cu;
    SET_GPR_U32(ctx, 31, 0x33AE14u);
    ctx->pc = 0x33AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE0Cu;
    // 0x33ae10: 0x8044f340  lb          $a0, -0xCC0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B510u, 0x33AE0Cu, 0x33AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE14u;
label_33ae14:
    // 0x33ae14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33ae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33ae18:
    // 0x33ae18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ae18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ae1c: 0x3e00008  jr          $ra
    ctx->pc = 0x33AE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE1Cu;
        // 0x33ae20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AE24u;
    // 0x33ae24: 0x0  nop
    ctx->pc = 0x33ae24u;
    // NOP
    // 0x33ae28: 0x0  nop
    ctx->pc = 0x33ae28u;
    // NOP
    // 0x33ae2c: 0x0  nop
    ctx->pc = 0x33ae2cu;
    // NOP
}

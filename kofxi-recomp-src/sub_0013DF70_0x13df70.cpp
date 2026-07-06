#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DF70
// Address: 0x13df70 - 0x13e010
void sub_0013DF70_0x13df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DF70_0x13df70");
#endif

    switch (ctx->pc) {
        case 0x13df84u: goto label_13df84;
        case 0x13dfa8u: goto label_13dfa8;
        case 0x13dfc8u: goto label_13dfc8;
        default: break;
    }

    ctx->pc = 0x13df70u;

    // 0x13df70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13df74: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x13df74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13df78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13df7c: 0xc063748  jal         func_18DD20
    ctx->pc = 0x13DF7Cu;
    SET_GPR_U32(ctx, 31, 0x13DF84u);
    ctx->pc = 0x13DF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF7Cu;
            // 0x13df80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD20u;
    if (runtime->hasFunction(0x18DD20u)) {
        auto targetFn = runtime->lookupFunction(0x18DD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF84u; }
        if (ctx->pc != 0x13DF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD20_0x18dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF84u; }
        if (ctx->pc != 0x13DF84u) { return; }
    }
    ctx->pc = 0x13DF84u;
label_13df84:
    // 0x13df84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DF84u;
    {
        const bool branch_taken_0x13df84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df84) {
            ctx->pc = 0x13DF94u;
            goto label_13df94;
        }
    }
    ctx->pc = 0x13DF8Cu;
    // 0x13df8c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x13DF8Cu;
    {
        const bool branch_taken_0x13df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF8Cu;
            // 0x13df90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df8c) {
            ctx->pc = 0x13E000u;
            goto label_13e000;
        }
    }
    ctx->pc = 0x13DF94u;
label_13df94:
    // 0x13df94: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13df94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13df98: 0x90635cc0  lbu         $v1, 0x5CC0($v1)
    ctx->pc = 0x13df98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23744)));
    // 0x13df9c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13dfa0: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13DFA0u;
    SET_GPR_U32(ctx, 31, 0x13DFA8u);
    ctx->pc = 0x13DFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFA0u;
            // 0x13dfa4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DFA8u; }
        if (ctx->pc != 0x13DFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DFA8u; }
        if (ctx->pc != 0x13DFA8u) { return; }
    }
    ctx->pc = 0x13DFA8u;
label_13dfa8:
    // 0x13dfa8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x13dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x13dfac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13dfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13dfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13dfb4: 0x0  nop
    ctx->pc = 0x13dfb4u;
    // NOP
    // 0x13dfb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13dfb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13dfbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13dfbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13dfc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13dfc4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13dfc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_13dfc8:
    // 0x13dfc8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13dfc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13dfcc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x13dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13dfd0: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x13dfd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13dfd4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DFD4u;
    {
        const bool branch_taken_0x13dfd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dfd4) {
            ctx->pc = 0x13DFF0u;
            goto label_13dff0;
        }
    }
    ctx->pc = 0x13DFDCu;
    // 0x13dfdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13dfe0: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x13dfe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13dfe4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13DFE4u;
    {
        const bool branch_taken_0x13dfe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFE4u;
            // 0x13dfe8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfe4) {
            ctx->pc = 0x13DFC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13dfc8;
        }
    }
    ctx->pc = 0x13DFECu;
    // 0x13dfec: 0x0  nop
    ctx->pc = 0x13dfecu;
    // NOP
label_13dff0:
    // 0x13dff0: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x13dff0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13dff4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13DFF4u;
    {
        const bool branch_taken_0x13dff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dff4) {
            ctx->pc = 0x13E000u;
            goto label_13e000;
        }
    }
    ctx->pc = 0x13DFFCu;
    // 0x13dffc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x13dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13e000:
    // 0x13e000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e008: 0x3e00008  jr          $ra
    ctx->pc = 0x13E008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E008u;
            // 0x13e00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E010u;
    ctx->pc = 0x13e010u;
}

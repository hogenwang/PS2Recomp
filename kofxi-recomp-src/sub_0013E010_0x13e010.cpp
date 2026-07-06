#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E010
// Address: 0x13e010 - 0x13e0b0
void sub_0013E010_0x13e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E010_0x13e010");
#endif

    switch (ctx->pc) {
        case 0x13e024u: goto label_13e024;
        case 0x13e04cu: goto label_13e04c;
        case 0x13e06cu: goto label_13e06c;
        default: break;
    }

    ctx->pc = 0x13e010u;

    // 0x13e010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e014: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x13e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13e018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e01c: 0xc063748  jal         func_18DD20
    ctx->pc = 0x13E01Cu;
    SET_GPR_U32(ctx, 31, 0x13E024u);
    ctx->pc = 0x13E020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E01Cu;
            // 0x13e020: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD20u;
    if (runtime->hasFunction(0x18DD20u)) {
        auto targetFn = runtime->lookupFunction(0x18DD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E024u; }
        if (ctx->pc != 0x13E024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD20_0x18dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E024u; }
        if (ctx->pc != 0x13E024u) { return; }
    }
    ctx->pc = 0x13E024u;
label_13e024:
    // 0x13e024: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E024u;
    {
        const bool branch_taken_0x13e024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e024) {
            ctx->pc = 0x13E034u;
            goto label_13e034;
        }
    }
    ctx->pc = 0x13E02Cu;
    // 0x13e02c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x13E02Cu;
    {
        const bool branch_taken_0x13e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E02Cu;
            // 0x13e030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e02c) {
            ctx->pc = 0x13E0A0u;
            goto label_13e0a0;
        }
    }
    ctx->pc = 0x13E034u;
label_13e034:
    // 0x13e034: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13e034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13e038: 0x90645cc0  lbu         $a0, 0x5CC0($v1)
    ctx->pc = 0x13e038u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23744)));
    // 0x13e03c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x13e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13e040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e044: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13E044u;
    SET_GPR_U32(ctx, 31, 0x13E04Cu);
    ctx->pc = 0x13E048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E044u;
            // 0x13e048: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E04Cu; }
        if (ctx->pc != 0x13E04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E04Cu; }
        if (ctx->pc != 0x13E04Cu) { return; }
    }
    ctx->pc = 0x13E04Cu;
label_13e04c:
    // 0x13e04c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x13e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x13e050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e054: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e058: 0x0  nop
    ctx->pc = 0x13e058u;
    // NOP
    // 0x13e05c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e064: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e064u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13e068: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13e068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_13e06c:
    // 0x13e06c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13e06cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e070: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x13e070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13e074: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x13e074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e078: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E078u;
    {
        const bool branch_taken_0x13e078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e078) {
            ctx->pc = 0x13E090u;
            goto label_13e090;
        }
    }
    ctx->pc = 0x13E080u;
    // 0x13e080: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e084: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x13e084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13e088: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13E088u;
    {
        const bool branch_taken_0x13e088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E088u;
            // 0x13e08c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e088) {
            ctx->pc = 0x13E06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13e06c;
        }
    }
    ctx->pc = 0x13E090u;
label_13e090:
    // 0x13e090: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x13e090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13e094: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E094u;
    {
        const bool branch_taken_0x13e094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e094) {
            ctx->pc = 0x13E0A0u;
            goto label_13e0a0;
        }
    }
    ctx->pc = 0x13E09Cu;
    // 0x13e09c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13e0a0:
    // 0x13e0a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e0a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0A8u;
            // 0x13e0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E0B0u;
    ctx->pc = 0x13e0b0u;
}

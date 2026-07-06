#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00322B60
// Address: 0x322b60 - 0x322c00
void sub_00322B60_0x322b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322B60_0x322b60");
#endif

    switch (ctx->pc) {
        case 0x322b88u: goto label_322b88;
        case 0x322b90u: goto label_322b90;
        case 0x322bb0u: goto label_322bb0;
        case 0x322bb8u: goto label_322bb8;
        default: break;
    }

    ctx->pc = 0x322b60u;

    // 0x322b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x322b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x322b64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x322b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x322b68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x322b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x322b6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x322b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x322b70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x322b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x322b74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x322b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x322b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x322b7c: 0x3c1001dd  lui         $s0, 0x1DD
    ctx->pc = 0x322b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)477 << 16));
    // 0x322b80: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x322b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x322b84: 0x2610c410  addiu       $s0, $s0, -0x3BF0
    ctx->pc = 0x322b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951952));
label_322b88:
    // 0x322b88: 0xc0c8ac0  jal         func_322B00
    ctx->pc = 0x322B88u;
    SET_GPR_U32(ctx, 31, 0x322B90u);
    ctx->pc = 0x322B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322B88u;
            // 0x322b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322B00u;
    if (runtime->hasFunction(0x322B00u)) {
        auto targetFn = runtime->lookupFunction(0x322B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322B90u; }
        if (ctx->pc != 0x322B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322B00_0x322b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322B90u; }
        if (ctx->pc != 0x322B90u) { return; }
    }
    ctx->pc = 0x322B90u;
label_322b90:
    // 0x322b90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x322b94: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x322b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x322b98: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x322b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x322b9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x322B9Cu;
    {
        const bool branch_taken_0x322b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322b9c) {
            ctx->pc = 0x322B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322b88;
        }
    }
    ctx->pc = 0x322BA4u;
    // 0x322ba4: 0x3c1101dd  lui         $s1, 0x1DD
    ctx->pc = 0x322ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)477 << 16));
    // 0x322ba8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x322ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322bac: 0x26319410  addiu       $s1, $s1, -0x6BF0
    ctx->pc = 0x322bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939664));
label_322bb0:
    // 0x322bb0: 0xc0c8ad0  jal         func_322B40
    ctx->pc = 0x322BB0u;
    SET_GPR_U32(ctx, 31, 0x322BB8u);
    ctx->pc = 0x322BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322BB0u;
            // 0x322bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322B40u;
    if (runtime->hasFunction(0x322B40u)) {
        auto targetFn = runtime->lookupFunction(0x322B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322BB8u; }
        if (ctx->pc != 0x322BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322B40_0x322b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322BB8u; }
        if (ctx->pc != 0x322BB8u) { return; }
    }
    ctx->pc = 0x322BB8u;
label_322bb8:
    // 0x322bb8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x322bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x322bbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x322bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x322bc0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x322bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x322bc4: 0xe6340010  swc1        $f20, 0x10($s1)
    ctx->pc = 0x322bc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x322bc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322bcc: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x322bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x322bd0: 0x2a030200  slti        $v1, $s0, 0x200
    ctx->pc = 0x322bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x322bd4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x322BD4u;
    {
        const bool branch_taken_0x322bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322BD4u;
            // 0x322bd8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322bd4) {
            ctx->pc = 0x322BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322bb0;
        }
    }
    ctx->pc = 0x322BDCu;
    // 0x322bdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x322bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322be0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x322be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x322be4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x322be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322be8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x322be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322bec: 0x3e00008  jr          $ra
    ctx->pc = 0x322BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322BECu;
            // 0x322bf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x322BF4u;
    // 0x322bf4: 0x0  nop
    ctx->pc = 0x322bf4u;
    // NOP
    // 0x322bf8: 0x0  nop
    ctx->pc = 0x322bf8u;
    // NOP
    // 0x322bfc: 0x0  nop
    ctx->pc = 0x322bfcu;
    // NOP
    ctx->pc = 0x322c00u;
}

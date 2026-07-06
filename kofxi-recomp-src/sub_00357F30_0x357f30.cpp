#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00357F30
// Address: 0x357f30 - 0x357f90
void sub_00357F30_0x357f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357F30_0x357f30");
#endif

    switch (ctx->pc) {
        case 0x357f54u: goto label_357f54;
        case 0x357f68u: goto label_357f68;
        default: break;
    }

    ctx->pc = 0x357f30u;

    // 0x357f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x357f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x357f34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x357f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x357f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x357f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x357f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357f40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x357f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x357f48: 0x3c11003e  lui         $s1, 0x3E
    ctx->pc = 0x357f48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
    // 0x357f4c: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x357f4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x357f50: 0x26319960  addiu       $s1, $s1, -0x66A0
    ctx->pc = 0x357f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941024));
label_357f54:
    // 0x357f54: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x357f54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x357f58: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x357F58u;
    {
        const bool branch_taken_0x357f58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x357f58) {
            ctx->pc = 0x357F68u;
            goto label_357f68;
        }
    }
    ctx->pc = 0x357F60u;
    // 0x357f60: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x357F60u;
    SET_GPR_U32(ctx, 31, 0x357F68u);
    ctx->pc = 0x357F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357F60u;
            // 0x357f64: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (runtime->hasFunction(0x357EC0u)) {
        auto targetFn = runtime->lookupFunction(0x357EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357F68u; }
        if (ctx->pc != 0x357F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357EC0_0x357ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357F68u; }
        if (ctx->pc != 0x357F68u) { return; }
    }
    ctx->pc = 0x357F68u;
label_357f68:
    // 0x357f68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x357f68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x357f6c: 0x2e43000c  sltiu       $v1, $s2, 0xC
    ctx->pc = 0x357f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x357f70: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x357F70u;
    {
        const bool branch_taken_0x357f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357F70u;
            // 0x357f74: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f70) {
            ctx->pc = 0x357F54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_357f54;
        }
    }
    ctx->pc = 0x357F78u;
    // 0x357f78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x357f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357f7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x357f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f88: 0x3e00008  jr          $ra
    ctx->pc = 0x357F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357F88u;
            // 0x357f8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357F90u;
    ctx->pc = 0x357f90u;
}

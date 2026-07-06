#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001531F0
// Address: 0x1531f0 - 0x153260
void sub_001531F0_0x1531f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001531F0_0x1531f0");
#endif

    switch (ctx->pc) {
        case 0x153210u: goto label_153210;
        default: break;
    }

    ctx->pc = 0x1531f0u;

    // 0x1531f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1531f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1531f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1531f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1531f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1531f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1531fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1531fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153200: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x153200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153208: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x153208u;
    SET_GPR_U32(ctx, 31, 0x153210u);
    ctx->pc = 0x15320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153208u;
            // 0x15320c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (runtime->hasFunction(0x152AE0u)) {
        auto targetFn = runtime->lookupFunction(0x152AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153210u; }
        if (ctx->pc != 0x153210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152AE0_0x152ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153210u; }
        if (ctx->pc != 0x153210u) { return; }
    }
    ctx->pc = 0x153210u;
label_153210:
    // 0x153210: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x153210u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153214: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x153214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x153218: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x153218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15321c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15321Cu;
    {
        const bool branch_taken_0x15321c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15321c) {
            ctx->pc = 0x153220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15321Cu;
            // 0x153220: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153240u;
            goto label_153240;
        }
    }
    ctx->pc = 0x153224u;
    // 0x153224: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x153224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x153228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15322c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153230: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x153230u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153234: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x153234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x153238: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x153238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15323c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x15323cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_153240:
    // 0x153240: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x153240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15324c: 0x3e00008  jr          $ra
    ctx->pc = 0x15324Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15324Cu;
            // 0x153250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153254u;
    // 0x153254: 0x0  nop
    ctx->pc = 0x153254u;
    // NOP
    // 0x153258: 0x0  nop
    ctx->pc = 0x153258u;
    // NOP
    // 0x15325c: 0x0  nop
    ctx->pc = 0x15325cu;
    // NOP
    ctx->pc = 0x153260u;
}

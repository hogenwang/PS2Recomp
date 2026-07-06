#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4090
// Address: 0x1f4090 - 0x1f40d8
void sub_001F4090_0x1f4090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4090_0x1f4090");
#endif

    switch (ctx->pc) {
        case 0x1f40b8u: goto label_1f40b8;
        default: break;
    }

    ctx->pc = 0x1f4090u;

    // 0x1f4090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4098: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f4098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f409c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f40a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f40a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f40a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f40a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f40ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f40acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f40b0: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F40B0u;
    SET_GPR_U32(ctx, 31, 0x1F40B8u);
    ctx->pc = 0x1F40B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F40B0u;
            // 0x1f40b4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40B8u; }
        if (ctx->pc != 0x1F40B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40B8u; }
        if (ctx->pc != 0x1F40B8u) { return; }
    }
    ctx->pc = 0x1F40B8u;
label_1f40b8:
    // 0x1f40b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f40bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f40bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f40c0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1f40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1f40c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f40c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f40c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f40c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f40cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F40CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F40D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F40CCu;
            // 0x1f40d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F40D4u;
    // 0x1f40d4: 0x0  nop
    ctx->pc = 0x1f40d4u;
    // NOP
    ctx->pc = 0x1f40d8u;
}

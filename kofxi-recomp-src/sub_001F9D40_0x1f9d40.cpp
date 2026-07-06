#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9D40
// Address: 0x1f9d40 - 0x1f9dd8
void sub_001F9D40_0x1f9d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9D40_0x1f9d40");
#endif

    switch (ctx->pc) {
        case 0x1f9d70u: goto label_1f9d70;
        default: break;
    }

    ctx->pc = 0x1f9d40u;

    // 0x1f9d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9d50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f9d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9d58: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1f9d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d5c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f9d60: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F9D60u;
    {
        const bool branch_taken_0x1f9d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D60u;
            // 0x1f9d64: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d60) {
            ctx->pc = 0x1F9DC4u;
            goto label_1f9dc4;
        }
    }
    ctx->pc = 0x1F9D68u;
    // 0x1f9d68: 0xc07e776  jal         func_1F9DD8
    ctx->pc = 0x1F9D68u;
    SET_GPR_U32(ctx, 31, 0x1F9D70u);
    ctx->pc = 0x1F9DD8u;
    if (runtime->hasFunction(0x1F9DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1F9DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D70u; }
        if (ctx->pc != 0x1F9D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9DD8_0x1f9dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D70u; }
        if (ctx->pc != 0x1F9D70u) { return; }
    }
    ctx->pc = 0x1F9D70u;
label_1f9d70:
    // 0x1f9d70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f9d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9d78: 0x50c20013  beql        $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F9D78u;
    {
        const bool branch_taken_0x1f9d78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9d78) {
            ctx->pc = 0x1F9D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D78u;
            // 0x1f9d7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9DC8u;
            goto label_1f9dc8;
        }
    }
    ctx->pc = 0x1F9D80u;
    // 0x1f9d80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f9d84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f9d88: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1f9d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f9d8c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f9d90: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1f9d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9d94: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1f9d94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f9d98: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1f9d98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f9d9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f9d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f9da0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1f9da0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f9da4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1f9da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1f9da8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1f9da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1f9dac: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1f9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f9db0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f9db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f9db4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1f9db4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9db8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1f9db8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1f9dbc: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1f9dbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f9dc0: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x1f9dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
label_1f9dc4:
    // 0x1f9dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9dc8:
    // 0x1f9dc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9dcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DD0u;
            // 0x1f9dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9DD8u;
    ctx->pc = 0x1f9dd8u;
}

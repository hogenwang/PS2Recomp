#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201D70
// Address: 0x201d70 - 0x201e20
void sub_00201D70_0x201d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201D70_0x201d70");
#endif

    switch (ctx->pc) {
        case 0x201d98u: goto label_201d98;
        case 0x201dbcu: goto label_201dbc;
        case 0x201dc8u: goto label_201dc8;
        case 0x201df0u: goto label_201df0;
        case 0x201e08u: goto label_201e08;
        default: break;
    }

    ctx->pc = 0x201d70u;

    // 0x201d70: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x201d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201d74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x201d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201d78: 0xa73818  mult        $a3, $a1, $a3
    ctx->pc = 0x201d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x201d7c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x201d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x201d80: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x201d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x201d84: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x201d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x201d88: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x201d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x201d8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x201d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x201d90: 0x3e00008  jr          $ra
    ctx->pc = 0x201D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201D90u;
            // 0x201d94: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201D98u;
label_201d98:
    // 0x201d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201da0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201da8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x201da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201db0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201db4: 0xc073a74  jal         func_1CE9D0
    ctx->pc = 0x201DB4u;
    SET_GPR_U32(ctx, 31, 0x201DBCu);
    ctx->pc = 0x201DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201DB4u;
            // 0x201db8: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE9D0u;
    if (runtime->hasFunction(0x1CE9D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DBCu; }
        if (ctx->pc != 0x201DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE9D0_0x1ce9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DBCu; }
        if (ctx->pc != 0x201DBCu) { return; }
    }
    ctx->pc = 0x201DBCu;
label_201dbc:
    // 0x201dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dc0: 0xc08068e  jal         func_201A38
    ctx->pc = 0x201DC0u;
    SET_GPR_U32(ctx, 31, 0x201DC8u);
    ctx->pc = 0x201DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201DC0u;
            // 0x201dc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201A38u;
    if (runtime->hasFunction(0x201A38u)) {
        auto targetFn = runtime->lookupFunction(0x201A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DC8u; }
        if (ctx->pc != 0x201DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201A38_0x201a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201DC8u; }
        if (ctx->pc != 0x201DC8u) { return; }
    }
    ctx->pc = 0x201DC8u;
label_201dc8:
    // 0x201dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dcc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x201dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dd0: 0x103042  srl         $a2, $s0, 1
    ctx->pc = 0x201dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x201dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201dd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201de0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201de4: 0x80806ec  j           func_201BB0
    ctx->pc = 0x201DE4u;
    ctx->pc = 0x201DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201DE4u;
            // 0x201de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201BB0u;
    {
        auto targetFn = runtime->lookupFunction(0x201BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x201DECu;
    // 0x201dec: 0x0  nop
    ctx->pc = 0x201decu;
    // NOP
label_201df0:
    // 0x201df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201dfc: 0x8073a7e  j           func_1CE9F8
    ctx->pc = 0x201DFCu;
    ctx->pc = 0x201E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201DFCu;
            // 0x201e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE9F8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x201E04u;
    // 0x201e04: 0x0  nop
    ctx->pc = 0x201e04u;
    // NOP
label_201e08:
    // 0x201e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201e14: 0x8073a5e  j           func_1CE978
    ctx->pc = 0x201E14u;
    ctx->pc = 0x201E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201E14u;
            // 0x201e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE978u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x201E1Cu;
    // 0x201e1c: 0x0  nop
    ctx->pc = 0x201e1cu;
    // NOP
    ctx->pc = 0x201e20u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100920
// Address: 0x100920 - 0x100960
void sub_00100920_0x100920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100920_0x100920");
#endif

    switch (ctx->pc) {
        case 0x100950u: goto label_100950;
        default: break;
    }

    ctx->pc = 0x100920u;

    // 0x100920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100924: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x100924u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x100928: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x100928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10092c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100930: 0x48c00  sll         $s1, $a0, 16
    ctx->pc = 0x100930u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x100934: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x100934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x100938: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x100938u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x10093c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x10093cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x100940: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x100940u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x100944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x100944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x100948: 0xc0400f0  jal         func_1003C0
    ctx->pc = 0x100948u;
    SET_GPR_U32(ctx, 31, 0x100950u);
    ctx->pc = 0x10094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100948u;
            // 0x10094c: 0x69403  sra         $s2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1003C0u;
    if (runtime->hasFunction(0x1003C0u)) {
        auto targetFn = runtime->lookupFunction(0x1003C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100950u; }
        if (ctx->pc != 0x100950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001003C0_0x1003c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100950u; }
        if (ctx->pc != 0x100950u) { return; }
    }
    ctx->pc = 0x100950u;
label_100950:
    // 0x100950: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x100950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x100954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x100954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100958: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x100958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10095c: 0x2610007e  addiu       $s0, $s0, 0x7E
    ctx->pc = 0x10095cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 126));
    ctx->pc = 0x100960u;
}

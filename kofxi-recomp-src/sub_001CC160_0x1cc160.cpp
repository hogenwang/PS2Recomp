#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC160
// Address: 0x1cc160 - 0x1cc1b8
void sub_001CC160_0x1cc160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC160_0x1cc160");
#endif

    switch (ctx->pc) {
        case 0x1cc184u: goto label_1cc184;
        case 0x1cc194u: goto label_1cc194;
        case 0x1cc19cu: goto label_1cc19c;
        default: break;
    }

    ctx->pc = 0x1cc160u;

    // 0x1cc160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc16c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc170: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc174: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc178: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cc178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cc17c: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CC17Cu;
    SET_GPR_U32(ctx, 31, 0x1CC184u);
    ctx->pc = 0x1CC180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC17Cu;
            // 0x1cc180: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC184u; }
        if (ctx->pc != 0x1CC184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC184u; }
        if (ctx->pc != 0x1CC184u) { return; }
    }
    ctx->pc = 0x1CC184u;
label_1cc184:
    // 0x1cc184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cc188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc18c: 0xc07306e  jal         func_1CC1B8
    ctx->pc = 0x1CC18Cu;
    SET_GPR_U32(ctx, 31, 0x1CC194u);
    ctx->pc = 0x1CC190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC18Cu;
            // 0x1cc190: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1B8u;
    if (runtime->hasFunction(0x1CC1B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CC1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC194u; }
        if (ctx->pc != 0x1CC194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC1B8_0x1cc1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC194u; }
        if (ctx->pc != 0x1CC194u) { return; }
    }
    ctx->pc = 0x1CC194u;
label_1cc194:
    // 0x1cc194: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CC194u;
    SET_GPR_U32(ctx, 31, 0x1CC19Cu);
    ctx->pc = 0x1CC198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC194u;
            // 0x1cc198: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC19Cu; }
        if (ctx->pc != 0x1CC19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA800_0x1ca800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC19Cu; }
        if (ctx->pc != 0x1CC19Cu) { return; }
    }
    ctx->pc = 0x1CC19Cu;
label_1cc19c:
    // 0x1cc19c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc1a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cc1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc1a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc1a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc1ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cc1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1B0u;
            // 0x1cc1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC1B8u;
    ctx->pc = 0x1cc1b8u;
}

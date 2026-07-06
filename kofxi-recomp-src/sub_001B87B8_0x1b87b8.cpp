#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B87B8
// Address: 0x1b87b8 - 0x1b8810
void sub_001B87B8_0x1b87b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B87B8_0x1b87b8");
#endif

    switch (ctx->pc) {
        case 0x1b87dcu: goto label_1b87dc;
        case 0x1b87ecu: goto label_1b87ec;
        case 0x1b87f4u: goto label_1b87f4;
        default: break;
    }

    ctx->pc = 0x1b87b8u;

    // 0x1b87b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b87b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b87bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b87bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b87c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b87c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b87c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b87c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b87c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b87ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b87d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b87d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b87d4: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B87D4u;
    SET_GPR_U32(ctx, 31, 0x1B87DCu);
    ctx->pc = 0x1B87D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87D4u;
            // 0x1b87d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87DCu; }
        if (ctx->pc != 0x1B87DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87DCu; }
        if (ctx->pc != 0x1B87DCu) { return; }
    }
    ctx->pc = 0x1B87DCu;
label_1b87dc:
    // 0x1b87dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b87dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b87e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87e4: 0xc06e204  jal         func_1B8810
    ctx->pc = 0x1B87E4u;
    SET_GPR_U32(ctx, 31, 0x1B87ECu);
    ctx->pc = 0x1B87E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87E4u;
            // 0x1b87e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8810u;
    if (runtime->hasFunction(0x1B8810u)) {
        auto targetFn = runtime->lookupFunction(0x1B8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87ECu; }
        if (ctx->pc != 0x1B87ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8810_0x1b8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87ECu; }
        if (ctx->pc != 0x1B87ECu) { return; }
    }
    ctx->pc = 0x1B87ECu;
label_1b87ec:
    // 0x1b87ec: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B87ECu;
    SET_GPR_U32(ctx, 31, 0x1B87F4u);
    ctx->pc = 0x1B87F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87ECu;
            // 0x1b87f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87F4u; }
        if (ctx->pc != 0x1B87F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87F4u; }
        if (ctx->pc != 0x1B87F4u) { return; }
    }
    ctx->pc = 0x1B87F4u;
label_1b87f4:
    // 0x1b87f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b87f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b87f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b87f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b87fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8804: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b8804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8808: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8808u;
            // 0x1b880c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8810u;
    ctx->pc = 0x1b8810u;
}

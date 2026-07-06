#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F17C8
// Address: 0x1f17c8 - 0x1f1810
void sub_001F17C8_0x1f17c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F17C8_0x1f17c8");
#endif

    switch (ctx->pc) {
        case 0x1f17ecu: goto label_1f17ec;
        default: break;
    }

    ctx->pc = 0x1f17c8u;

    // 0x1f17c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f17c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f17cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f17ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f17d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f17d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f17d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f17d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f17d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f17dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f17e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f17e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17e4: 0xc07abb8  jal         func_1EAEE0
    ctx->pc = 0x1F17E4u;
    SET_GPR_U32(ctx, 31, 0x1F17ECu);
    ctx->pc = 0x1F17E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17E4u;
            // 0x1f17e8: 0x8e052020  lw          $a1, 0x2020($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAEE0u;
    if (runtime->hasFunction(0x1EAEE0u)) {
        auto targetFn = runtime->lookupFunction(0x1EAEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17ECu; }
        if (ctx->pc != 0x1F17ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAEE0_0x1eaee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F17ECu; }
        if (ctx->pc != 0x1F17ECu) { return; }
    }
    ctx->pc = 0x1F17ECu;
label_1f17ec:
    // 0x1f17ec: 0xde0209a8  ld          $v0, 0x9A8($s0)
    ctx->pc = 0x1f17ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2472)));
    // 0x1f17f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f17f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f17f4: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1f17f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1f17f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f17f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f17fc: 0xfe0209a8  sd          $v0, 0x9A8($s0)
    ctx->pc = 0x1f17fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2472), GPR_U64(ctx, 2));
    // 0x1f1800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1804: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1804u;
            // 0x1f1808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F180Cu;
    // 0x1f180c: 0x0  nop
    ctx->pc = 0x1f180cu;
    // NOP
    ctx->pc = 0x1f1810u;
}

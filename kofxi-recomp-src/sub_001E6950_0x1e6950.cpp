#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6950
// Address: 0x1e6950 - 0x1e6998
void sub_001E6950_0x1e6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6950_0x1e6950");
#endif

    switch (ctx->pc) {
        case 0x1e6980u: goto label_1e6980;
        default: break;
    }

    ctx->pc = 0x1e6950u;

    // 0x1e6950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6954: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e6954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6958: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1e6958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e695c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e695cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e6964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e696c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e696cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6970: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e6970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6974: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e6974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e6978: 0xc073878  jal         func_1CE1E0
    ctx->pc = 0x1E6978u;
    SET_GPR_U32(ctx, 31, 0x1E6980u);
    ctx->pc = 0x1E697Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6978u;
            // 0x1e697c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E0u;
    if (runtime->hasFunction(0x1CE1E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6980u; }
        if (ctx->pc != 0x1E6980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE1E0_0x1ce1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6980u; }
        if (ctx->pc != 0x1E6980u) { return; }
    }
    ctx->pc = 0x1E6980u;
label_1e6980:
    // 0x1e6980: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1e6980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1e6984: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e6984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e6988: 0xac503c84  sw          $s0, 0x3C84($v0)
    ctx->pc = 0x1e6988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15492), GPR_U32(ctx, 16));
    // 0x1e698c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e698cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6990: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6990u;
            // 0x1e6994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6998u;
    ctx->pc = 0x1e6998u;
}

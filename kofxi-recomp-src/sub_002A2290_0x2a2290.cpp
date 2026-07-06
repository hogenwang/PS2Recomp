#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2290
// Address: 0x2a2290 - 0x2a22f0
void sub_002A2290_0x2a2290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2290_0x2a2290");
#endif

    switch (ctx->pc) {
        case 0x2a22c4u: goto label_2a22c4;
        case 0x2a22e4u: goto label_2a22e4;
        default: break;
    }

    ctx->pc = 0x2a2290u;

    // 0x2a2290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a229c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a229cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22a0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a22a4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2a22a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a22a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A22A8u;
    {
        const bool branch_taken_0x2a22a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A22ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22A8u;
            // 0x2a22ac: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22a8) {
            ctx->pc = 0x2A22CCu;
            goto label_2a22cc;
        }
    }
    ctx->pc = 0x2A22B0u;
    // 0x2a22b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2a22b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a22b4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A22B4u;
    {
        const bool branch_taken_0x2a22b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a22b4) {
            ctx->pc = 0x2A22CCu;
            goto label_2a22cc;
        }
    }
    ctx->pc = 0x2A22BCu;
    // 0x2a22bc: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A22BCu;
    SET_GPR_U32(ctx, 31, 0x2A22C4u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22C4u; }
        if (ctx->pc != 0x2A22C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22C4u; }
        if (ctx->pc != 0x2A22C4u) { return; }
    }
    ctx->pc = 0x2A22C4u;
label_2a22c4:
    // 0x2a22c4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a22c8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2a22c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2a22cc:
    // 0x2a22cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A22CCu;
    {
        const bool branch_taken_0x2a22cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A22D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22CCu;
            // 0x2a22d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22cc) {
            ctx->pc = 0x2A22E4u;
            goto label_2a22e4;
        }
    }
    ctx->pc = 0x2A22D4u;
    // 0x2a22d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a22d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a22d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a22dc: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2A22DCu;
    ctx->pc = 0x2A22E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22DCu;
            // 0x2a22e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A22E4u;
label_2a22e4:
    // 0x2a22e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a22e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a22e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A22E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A22ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22E8u;
            // 0x2a22ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A22F0u;
    ctx->pc = 0x2a22f0u;
}

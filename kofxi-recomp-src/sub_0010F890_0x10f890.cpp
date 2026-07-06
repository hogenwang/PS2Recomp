#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010F890
// Address: 0x10f890 - 0x10f8d8
void sub_0010F890_0x10f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F890_0x10f890");
#endif

    switch (ctx->pc) {
        case 0x10f8ccu: goto label_10f8cc;
        default: break;
    }

    ctx->pc = 0x10f890u;

    // 0x10f890: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10f890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10f894: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x10f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x10f898: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10f898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10f89c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x10f89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8a0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x10f8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x10f8a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10f8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8a8: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10f8ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f8b0: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x10f8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x10f8b4: 0x2484f760  addiu       $a0, $a0, -0x8A0
    ctx->pc = 0x10f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x10f8b8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x10f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x10f8bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8c0: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x10f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x10f8c4: 0xc043a92  jal         func_10EA48
    ctx->pc = 0x10F8C4u;
    SET_GPR_U32(ctx, 31, 0x10F8CCu);
    ctx->pc = 0x10F8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F8C4u;
            // 0x10f8c8: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EA48u;
    if (runtime->hasFunction(0x10EA48u)) {
        auto targetFn = runtime->lookupFunction(0x10EA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F8CCu; }
        if (ctx->pc != 0x10F8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EA48_0x10ea48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F8CCu; }
        if (ctx->pc != 0x10F8CCu) { return; }
    }
    ctx->pc = 0x10F8CCu;
label_10f8cc:
    // 0x10f8cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F8D0u;
            // 0x10f8d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F8D8u;
    ctx->pc = 0x10f8d8u;
}

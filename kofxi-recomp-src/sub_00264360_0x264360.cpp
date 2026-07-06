#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00264360
// Address: 0x264360 - 0x2643c0
void sub_00264360_0x264360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264360_0x264360");
#endif

    switch (ctx->pc) {
        case 0x2643acu: goto label_2643ac;
        default: break;
    }

    ctx->pc = 0x264360u;

    // 0x264360: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x264360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x264364: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264368: 0xdc4876b0  ld          $t0, 0x76B0($v0)
    ctx->pc = 0x264368u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 30384)));
    // 0x26436c: 0x244376b0  addiu       $v1, $v0, 0x76B0
    ctx->pc = 0x26436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30384));
    // 0x264370: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x264370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x264374: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x264374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x264378: 0x94690010  lhu         $t1, 0x10($v1)
    ctx->pc = 0x264378u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26437c: 0x24f0dbc0  addiu       $s0, $a3, -0x2440
    ctx->pc = 0x26437cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958016));
    // 0x264380: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x264380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x264384: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x264384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264388: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x264388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26438c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26438cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264390: 0xfce8dbc0  sd          $t0, -0x2440($a3)
    ctx->pc = 0x264390u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294958016), GPR_U64(ctx, 8));
    // 0x264394: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x264394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x264398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26439c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x26439cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2643a0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2643a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2643a4: 0xc0990f0  jal         func_2643C0
    ctx->pc = 0x2643A4u;
    SET_GPR_U32(ctx, 31, 0x2643ACu);
    ctx->pc = 0x2643A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2643A4u;
            // 0x2643a8: 0xa6090010  sh          $t1, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (runtime->hasFunction(0x2643C0u)) {
        auto targetFn = runtime->lookupFunction(0x2643C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2643ACu; }
        if (ctx->pc != 0x2643ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002643C0_0x2643c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2643ACu; }
        if (ctx->pc != 0x2643ACu) { return; }
    }
    ctx->pc = 0x2643ACu;
label_2643ac:
    // 0x2643ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2643acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2643b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2643b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2643b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2643b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2643B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2643BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2643B8u;
            // 0x2643bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2643C0u;
    ctx->pc = 0x2643c0u;
}

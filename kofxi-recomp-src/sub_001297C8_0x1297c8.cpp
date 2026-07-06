#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001297C8
// Address: 0x1297c8 - 0x129840
void sub_001297C8_0x1297c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001297C8_0x1297c8");
#endif

    switch (ctx->pc) {
        case 0x129824u: goto label_129824;
        case 0x129838u: goto label_129838;
        default: break;
    }

    ctx->pc = 0x1297c8u;

    // 0x1297c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1297c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1297cc: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1297ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x1297d0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1297d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1297d4: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x1297d4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x1297d8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1297d8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297dc: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x1297dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x1297e0: 0x8decbde8  lw          $t4, -0x4218($t7)
    ctx->pc = 0x1297e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x1297e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1297e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297e8: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x1297e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x1297ec: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x1297ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x1297f0: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x1297f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x1297f4: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x1297f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x1297f8: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x1297f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x1297fc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1297fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x129800: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x129800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x129804: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x129804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x129808: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x129808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x12980c: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x12980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x129810: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x129810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x129814: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x129814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x129818: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x129818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x12981c: 0xc04afb2  jal         func_12BEC8
    ctx->pc = 0x12981Cu;
    SET_GPR_U32(ctx, 31, 0x129824u);
    ctx->pc = 0x129820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12981Cu;
            // 0x129820: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC8u;
    if (runtime->hasFunction(0x12BEC8u)) {
        auto targetFn = runtime->lookupFunction(0x12BEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129824u; }
        if (ctx->pc != 0x129824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BEC8_0x12bec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129824u; }
        if (ctx->pc != 0x129824u) { return; }
    }
    ctx->pc = 0x129824u;
label_129824:
    // 0x129824: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x129824u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129828: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x129828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12982c: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x12982cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x129830: 0x3e00008  jr          $ra
    ctx->pc = 0x129830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129830u;
            // 0x129834: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129838u;
label_129838:
    // 0x129838: 0x3e00008  jr          $ra
    ctx->pc = 0x129838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129838u;
            // 0x12983c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129840u;
    ctx->pc = 0x129840u;
}

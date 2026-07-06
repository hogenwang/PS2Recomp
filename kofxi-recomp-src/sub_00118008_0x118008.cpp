#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118008
// Address: 0x118008 - 0x118058
void sub_00118008_0x118008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118008_0x118008");
#endif

    ctx->pc = 0x118008u;

    // 0x118008: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x118008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11800c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11800cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x118010: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x118010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x118014: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x118014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118018: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x118018u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 16))); // MMIO: 0x10000010
    // 0x11801c: 0xdc8a9d48  ld          $t2, -0x62B8($a0)
    ctx->pc = 0x11801cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 4294942024)));
    // 0x118020: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x118020u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x118024: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118024u;
    {
        const bool branch_taken_0x118024 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x118028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118024u;
            // 0x118028: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118024) {
            ctx->pc = 0x118034u;
            goto label_118034;
        }
    }
    ctx->pc = 0x11802Cu;
    // 0x11802c: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x11802cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118030: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x118030u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_118034:
    // 0x118034: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x118034u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x118038: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x118038u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x11803c: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x11803cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x118040: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x118040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x118044: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x118044u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x118048: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x118048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x11804c: 0x3e00008  jr          $ra
    ctx->pc = 0x11804Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118054u;
    // 0x118054: 0x0  nop
    ctx->pc = 0x118054u;
    // NOP
    ctx->pc = 0x118058u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6AB8
// Address: 0x1a6ab8 - 0x1a6b08
void sub_001A6AB8_0x1a6ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6AB8_0x1a6ab8");
#endif

    ctx->pc = 0x1a6ab8u;

    // 0x1a6ab8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6abc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1a6ac0: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1a6ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1a6ac4: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x1a6ac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6ac8: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 16))); // MMIO: 0x10000010
    // 0x1a6acc: 0xdc8ae118  ld          $t2, -0x1EE8($a0)
    ctx->pc = 0x1a6accu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 4294959384)));
    // 0x1a6ad0: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a6ad0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x1a6ad4: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6AD4u;
    {
        const bool branch_taken_0x1a6ad4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AD4u;
            // 0x1a6ad8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ad4) {
            ctx->pc = 0x1A6AE4u;
            goto label_1a6ae4;
        }
    }
    ctx->pc = 0x1A6ADCu;
    // 0x1a6adc: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x1a6adcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6ae0: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a6ae0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a6ae4:
    // 0x1a6ae4: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a6ae4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1a6ae8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a6ae8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a6aec: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a6aecu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1a6af0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1a6af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1a6af4: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a6af4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1a6af8: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x1a6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1a6afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6B04u;
    // 0x1a6b04: 0x0  nop
    ctx->pc = 0x1a6b04u;
    // NOP
    ctx->pc = 0x1a6b08u;
}

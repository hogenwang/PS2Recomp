#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001180D8
// Address: 0x1180d8 - 0x118148
void sub_001180D8_0x1180d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001180D8_0x1180d8");
#endif

    switch (ctx->pc) {
        case 0x1180f8u: goto label_1180f8;
        default: break;
    }

    ctx->pc = 0x1180d8u;

    // 0x1180d8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1180d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1180dc: 0x24479d48  addiu       $a3, $v0, -0x62B8
    ctx->pc = 0x1180dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x1180e0: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x1180e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1180e4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1180E4u;
    {
        const bool branch_taken_0x1180e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1180e4) {
            ctx->pc = 0x1180F8u;
            goto label_1180f8;
        }
    }
    ctx->pc = 0x1180ECu;
    // 0x1180ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1180ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1180f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1180F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1180F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1180F0u;
            // 0x1180f4: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1180F8u;
label_1180f8:
    // 0x1180f8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1180f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1180fc: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1180fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x118100: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x118100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x118104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118108: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x118108u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x11810c: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x11810cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x118110: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x118110u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x118114: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x118114u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x118118: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x118118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x11811c: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x11811cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x118120: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x118120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118124: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x118124u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x118128: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x118128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x11812c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11812cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x118130: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x118130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x118134: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x118134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x118138: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x118138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x11813c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x118140: 0x3e00008  jr          $ra
    ctx->pc = 0x118140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118140u;
            // 0x118144: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118148u;
    ctx->pc = 0x118148u;
}

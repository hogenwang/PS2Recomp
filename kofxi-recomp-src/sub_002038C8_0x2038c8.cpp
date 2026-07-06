#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002038C8
// Address: 0x2038c8 - 0x203940
void sub_002038C8_0x2038c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002038C8_0x2038c8");
#endif

    switch (ctx->pc) {
        case 0x2038d8u: goto label_2038d8;
        case 0x2038f8u: goto label_2038f8;
        default: break;
    }

    ctx->pc = 0x2038c8u;

    // 0x2038c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2038c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2038cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2038CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2038D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038CCu;
            // 0x2038d0: 0xfc442078  sd          $a0, 0x2078($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8312), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2038D4u;
    // 0x2038d4: 0x0  nop
    ctx->pc = 0x2038d4u;
    // NOP
label_2038d8:
    // 0x2038d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2038d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2038dc: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2038dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2038e0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2038e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2038e4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x2038e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x2038e8: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x2038e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x2038ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2038ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2038F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038ECu;
            // 0x2038f0: 0xfc800010  sd          $zero, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2038F4u;
    // 0x2038f4: 0x0  nop
    ctx->pc = 0x2038f4u;
    // NOP
label_2038f8:
    // 0x2038f8: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x2038f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2038fc: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x2038fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x203900: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x203900u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203904: 0xa7482a  slt         $t1, $a1, $a3
    ctx->pc = 0x203904u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x203908: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x203908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x20390c: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x20390cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x203910: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x203910u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x203914: 0xc5302d  daddu       $a2, $a2, $a1
    ctx->pc = 0x203914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x203918: 0xa9380b  movn        $a3, $a1, $t1
    ctx->pc = 0x203918u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x20391c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203920: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x203920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x203924: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x203924u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x203928: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x203928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x20392c: 0x3e00008  jr          $ra
    ctx->pc = 0x20392Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20392Cu;
            // 0x203930: 0xfc880010  sd          $t0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203934u;
    // 0x203934: 0x0  nop
    ctx->pc = 0x203934u;
    // NOP
    // 0x203938: 0x0  nop
    ctx->pc = 0x203938u;
    // NOP
    // 0x20393c: 0x0  nop
    ctx->pc = 0x20393cu;
    // NOP
    ctx->pc = 0x203940u;
}

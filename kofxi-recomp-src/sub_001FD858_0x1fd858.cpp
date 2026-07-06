#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD858
// Address: 0x1fd858 - 0x1fd8b8
void sub_001FD858_0x1fd858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD858_0x1fd858");
#endif

    switch (ctx->pc) {
        case 0x1fd878u: goto label_1fd878;
        default: break;
    }

    ctx->pc = 0x1fd858u;

    // 0x1fd858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd85c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fd85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd864: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fd864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd86c: 0x807f61e  j           func_1FD878
    ctx->pc = 0x1FD86Cu;
    ctx->pc = 0x1FD870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD86Cu;
            // 0x1fd870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD878u;
    goto label_1fd878;
    ctx->pc = 0x1FD874u;
    // 0x1fd874: 0x0  nop
    ctx->pc = 0x1fd874u;
    // NOP
label_1fd878:
    // 0x1fd878: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1fd878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1fd87c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fd87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fd880: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1fd880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fd884: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fd884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fd888: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd88c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fd88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fd890: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1fd890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fd894: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fd894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fd898: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1fd898u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fd89c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd8a0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1fd8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fd8a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fd8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fd8a8: 0xacc71f9c  sw          $a3, 0x1F9C($a2)
    ctx->pc = 0x1fd8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8092), GPR_U32(ctx, 7));
    // 0x1fd8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD8ACu;
            // 0x1fd8b0: 0xac8513b4  sw          $a1, 0x13B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5044), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD8B4u;
    // 0x1fd8b4: 0x0  nop
    ctx->pc = 0x1fd8b4u;
    // NOP
    ctx->pc = 0x1fd8b8u;
}

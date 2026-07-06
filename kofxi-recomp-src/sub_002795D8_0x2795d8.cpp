#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002795D8
// Address: 0x2795d8 - 0x279650
void sub_002795D8_0x2795d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002795D8_0x2795d8");
#endif

    ctx->pc = 0x2795d8u;

    // 0x2795d8: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x2795d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x2795dc: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x2795dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x2795e0: 0x244b5388  addiu       $t3, $v0, 0x5388
    ctx->pc = 0x2795e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 21384));
    // 0x2795e4: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x2795e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x2795e8: 0x8c695390  lw          $t1, 0x5390($v1)
    ctx->pc = 0x2795e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21392)));
    // 0x2795ec: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x2795ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2795f0: 0x8c435384  lw          $v1, 0x5384($v0)
    ctx->pc = 0x2795f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21380)));
    // 0x2795f4: 0x1242004  sllv        $a0, $a0, $t1
    ctx->pc = 0x2795f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
    // 0x2795f8: 0x1444021  addu        $t0, $t2, $a0
    ctx->pc = 0x2795f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2795fc: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x2795fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x279600: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x279600u;
    {
        const bool branch_taken_0x279600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279600u;
            // 0x279604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279600) {
            ctx->pc = 0x279648u;
            goto label_279648;
        }
    }
    ctx->pc = 0x279608u;
    // 0x279608: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x279608u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x27960c: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x279610: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x279610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x279614: 0x3c0601c3  lui         $a2, 0x1C3
    ctx->pc = 0x279614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)451 << 16));
    // 0x279618: 0x8c4353a0  lw          $v1, 0x53A0($v0)
    ctx->pc = 0x279618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21408)));
    // 0x27961c: 0x3c0701c3  lui         $a3, 0x1C3
    ctx->pc = 0x27961cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)451 << 16));
    // 0x279620: 0x8ca453a4  lw          $a0, 0x53A4($a1)
    ctx->pc = 0x279620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 21412)));
    // 0x279624: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x279624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x279628: 0x8cc553b0  lw          $a1, 0x53B0($a2)
    ctx->pc = 0x279628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 21424)));
    // 0x27962c: 0x1231806  srlv        $v1, $v1, $t1
    ctx->pc = 0x27962cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
    // 0x279630: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x279630u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279634: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x279634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x279638: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x279638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x27963c: 0xace253a8  sw          $v0, 0x53A8($a3)
    ctx->pc = 0x27963cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 21416), GPR_U32(ctx, 2));
    // 0x279640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x279640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279644: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x279644u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
label_279648:
    // 0x279648: 0x3e00008  jr          $ra
    ctx->pc = 0x279648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279650u;
    ctx->pc = 0x279650u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001420D0
// Address: 0x1420d0 - 0x142170
void sub_001420D0_0x1420d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001420D0_0x1420d0");
#endif

    ctx->pc = 0x1420d0u;

    // 0x1420d0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1420d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1420d4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1420d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1420d8: 0x9466f102  lhu         $a2, -0xEFE($v1)
    ctx->pc = 0x1420d8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963458)));
    // 0x1420dc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1420dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1420e0: 0x8463f10c  lh          $v1, -0xEF4($v1)
    ctx->pc = 0x1420e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963468)));
    // 0x1420e4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1420e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1420e8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1420e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1420ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1420ECu;
    {
        const bool branch_taken_0x1420ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1420F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1420ECu;
            // 0x1420f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1420ec) {
            ctx->pc = 0x1420FCu;
            goto label_1420fc;
        }
    }
    ctx->pc = 0x1420F4u;
    // 0x1420f4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1420f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1420f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1420f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1420fc:
    // 0x1420fc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1420fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x142100: 0x8463f10e  lh          $v1, -0xEF2($v1)
    ctx->pc = 0x142100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963470)));
    // 0x142104: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x142104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x142108: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x142108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14210c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14210Cu;
    {
        const bool branch_taken_0x14210c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14210c) {
            ctx->pc = 0x14211Cu;
            goto label_14211c;
        }
    }
    ctx->pc = 0x142114u;
    // 0x142114: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x142114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x142118: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14211c:
    // 0x14211c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x14211cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x142120: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x142120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142124: 0x9465f100  lhu         $a1, -0xF00($v1)
    ctx->pc = 0x142124u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963456)));
    // 0x142128: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x142128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x14212c: 0x8463f110  lh          $v1, -0xEF0($v1)
    ctx->pc = 0x14212cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963472)));
    // 0x142130: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x142130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x142134: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x142134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x142138: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x142138u;
    {
        const bool branch_taken_0x142138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142138) {
            ctx->pc = 0x142148u;
            goto label_142148;
        }
    }
    ctx->pc = 0x142140u;
    // 0x142140: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x142140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x142144: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_142148:
    // 0x142148: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x142148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x14214c: 0x8463f112  lh          $v1, -0xEEE($v1)
    ctx->pc = 0x14214cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963474)));
    // 0x142150: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x142150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x142154: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x142154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x142158: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x142158u;
    {
        const bool branch_taken_0x142158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142158) {
            ctx->pc = 0x142168u;
            goto label_142168;
        }
    }
    ctx->pc = 0x142160u;
    // 0x142160: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x142160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x142164: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_142168:
    // 0x142168: 0x3e00008  jr          $ra
    ctx->pc = 0x142168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142170u;
    ctx->pc = 0x142170u;
}
